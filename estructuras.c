#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct datos{
	char nom_empresa[20];
	int numero_del_pabellon;
	int duracion_alquiler;
	float metros_del_estand;
	float precio_alquiler;
};

struct pabellones{
	float tarifa;
	float m_alquilados_en_el_pabellon;
};

void inicializar(int inventario,struct pabellones vec[5]);
void incorporar_estand(struct datos stands[20],int inventario,struct pabellones vec[5]);
void desincorporacion(struct datos stands[20],int inventario,struct pabellones vec[5]);
void cambiar_t_pabellon(struct datos stands[20],int inventario,struct pabellones vec[5]);
void imprimir(struct datos stands[20],int inventario,struct pabellones vec[5]);


int main(){
	
	int opcion,inventario,x,y;
    struct pabellones vec[5];
    struct datos stands[20];
    
       for( x=0; x<5; x++){
			printf("\n\n Ingrese la tarifa del pabellon %i : ",x+1);
			 scanf("%f",&vec[x].tarifa);
       }
       
       printf("\n\n Cuantos stands tiene la empresa: ");
        scanf("%i",&inventario);
    
     inicializar(inventario,vec);
    
    do{
        printf("\n\n\tMENU");
     
      printf("\n\n 1. A-adir estand ");
      printf("\n\n 2. Quitar estand ");
      printf("\n\n 3. Cambiar la tarifa de un pabellon ");
      printf("\n\n 4. Visualizar informacion de los estand y pabellones ");
      printf("\n\n 5. Salir del programa ");
       scanf("%i",&opcion);
      
      switch(opcion){
			
			case 1: 
				
		incorporar_estand(stands,inventario,vec);
				
				break;
			
			case 2:
				
		desincorporacion(stands,inventario,vec);
				
				break;
			
			case 3:
				
		cambiar_t_pabellon(stands,inventario,vec);
				
				break;
			
			case 4:
				
		imprimir(stands,inventario,vec);
				
				break;
			
			case 5:
				
				return 0;
				
				break;	
      } 
      	}while(1);
}

void inicializar(int inventario,struct pabellones vec[5]){
	
	int x;
	
	for( x=0;x<inventario;x++){
		vec[x].m_alquilados_en_el_pabellon=0;
	}
}


void incorporar_estand(struct datos stands[20],int inventario,struct pabellones vec[5]){
	
	int x,aux;
	
	   printf("\n\n Ingrese los datos de la empresa por orden alfabetico ");
	     
		 for(x=0; x<inventario; x++){	
	        printf("\n\n Ingrese el nombre de la empresa: ");
	         fflush(stdin);
	          gets(stands[x].nom_empresa);
	        printf("\n\n Numero del pabellon: ");
	         scanf("%i",&stands[x].numero_del_pabellon);
	         
	         aux=stands[x].numero_del_pabellon;
	         
	        printf("\n\n Duracion del alquiler en dias: ");
	         scanf("%i",&stands[x].duracion_alquiler); 
			printf("\n\n Metros del estands: "); 
			 scanf("%f",&stands[x].metros_del_estand);
		
		   vec[aux-1].m_alquilados_en_el_pabellon+=stands[x].metros_del_estand;
			 
	 stands[x].precio_alquiler=vec[aux-1].tarifa*stands[x].duracion_alquiler*stands[x].metros_del_estand;
	        	printf("\n\n %.2f",stands[x].precio_alquiler); 
	      }     
}


void desincorporacion(struct datos stands[20],int inventario,struct pabellones vec[5]){
	
	int x,y,aux,aux_pab;
	char a[20];
	
	printf("\n\n Nombre de la empresa que va a desincorporar: ");
	 fflush(stdin);
	scanf("%s",&a);
	
	  for( x=0; x<inventario; x++){
		for( y=0; y<inventario;y++){
			
		   if( strcmp(stands[x].nom_empresa,a) == 0){
				aux=x;
		   }
		}	
	  }
	
	aux_pab=stands[aux].numero_del_pabellon;
	
	vec[aux_pab-1].m_alquilados_en_el_pabellon-=stands[aux].metros_del_estand;
	
	strset( stands[aux].nom_empresa,0);
	
	stands[aux].numero_del_pabellon=0;
	
	stands[aux].duracion_alquiler=0;
	
	stands[aux].metros_del_estand=0;
	
	stands[aux].precio_alquiler=0;
	
}

void cambiar_t_pabellon(struct datos stands[20],int inventario,struct pabellones vec[5]){
	
	int aux,x,y,nueva_tarifa;
		
	 printf("\n\n Pabellon que quiere cambiar la tarifa: ");
	  scanf("%i",&aux);
	  
	  printf("\n\n Ingrese la nueva tarifa: ");
	   scanf("%i",&nueva_tarifa);
	  
	   vec[aux-1].tarifa=nueva_tarifa;
	   
      for(x=0;x<inventario;x++){
			if( stands[x].numero_del_pabellon == aux ){			
				stands[x].precio_alquiler=vec[x].tarifa*stands[x].duracion_alquiler*stands[x].metros_del_estand;
				printf("\n\n ahora el nuevo pago de %s: %.2f",stands[x].nom_empresa,stands[x].precio_alquiler);		
			}
      }
      
}

void imprimir(struct datos stands[20],int inventario,struct pabellones vec[5]){
	
	int x,y;
	printf("\n\n INFORMACION DE LOS STANDS");
	 for( x=0; x<inventario;x++){
			printf("\n\n");
			printf("\n\n nombre del la empresa %s",stands[x].nom_empresa);
			printf("\n\n numero del pabellon %i" , stands[x].numero_del_pabellon);
		    printf("\n\n duracion del alquiler %i", stands[x].duracion_alquiler);
            printf("\n\n metros del stands %.2f", stands[x].metros_del_estand);
			printf("\n\n precio del aquiler %.2f", stands[x].precio_alquiler);	
	 }
	 
	 printf("\n\n INFORMACION DE LOS PABELLONES");
	for(x=0;x<5;x++){
			printf("\n\n\tpabellon %i",x+1);
		printf("\n tarifa del pabellon: %.2f",vec[x].tarifa);
		printf("\n metros alquilados: %.2f ",vec[x].m_alquilados_en_el_pabellon);
	}
		
	
}



