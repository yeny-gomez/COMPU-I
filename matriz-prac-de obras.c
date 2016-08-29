#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define T 3
#define D 2

int  main(){
	
	int x,y,vec_pag[T],matriz[T][D],pago,vec_s_horas[T],vec_dias[D],mayor=-99999,menos=999999,vec_pago_total[T],a,b;
	int total_horas,pago_obra,aux_por;
	float porcentaje;
	char vec_cod[T][10],aux[10],nombre[10];

     for(x=0;x<T;x++){
	    vec_s_horas[x]=0;
     }
     

	for( x=0; x<T; x++){
		
		printf("\n Ingrese el codigo del trabajador %i: ",x+1);
		 fflush(stdin);
		 scanf("%s",vec_cod[x]);
		printf("\n\n Ingrese el pago del trabajor %i: ",x+1); 
		 scanf("%d",&vec_pag[x]);
	  printf("\n Nota: Si no trabajo ingrese cero");
		for( y=0; y<D;y++){
			printf("\n Ingrese la hora del trabajador %i del dia %i: ",x+1,y+1);
			 scanf("%d",&matriz[x][y]);
			vec_s_horas[x]+=matriz[x][y];//-----suma total de horas por trabajdor
			
		}
	}
	
	//----------------------------------- b)
     
	printf("\n\n SUMA DE HORAS LABORADOAS POR TRABAJADOR");
	  for(x=0;x<T;x++){
	   printf("\nTrabajador %s horas de trabajadas: %i",vec_cod[x], vec_s_horas[x]);
     }
     
    //-------------------------------------- c)
    
	printf("\n\n PAGO DE CADA TRABAJADOR ");
	  for(x=0;x<T;x++){
	     printf("\n  Trabajado %s",vec_cod[x]);
	         vec_pago_total[x]=vec_pag[x]*vec_s_horas[x];
	     printf(" \n pago: %i",vec_pago_total[x] );
     }
    
    //---------------------------------------- d)
    
    printf("\n\n TRABAJADOR o TRABAJADORES CON MAYOR HORAS \n");	
	  for(x=0;x<T;x++){//----------- trabajador con mayor numero de horas
			if(vec_s_horas[x]>mayor){
				 mayor=vec_s_horas[x];
			   strcpy(aux,vec_cod[x]);
			   
			    	
			   
			}
     }
         printf("\n\n  %s",aux);
   	
    //--------------------------------------- e)NO ENTIENDO EL ENUNCIADO
	
		printf("\n\n DIA O DIAS CON MENOR HORAS DE TRABAJO\n ");
   
	   		
	   for(y=0;y<D;y++){//----------para dias trabajados
		 a=0;
		 for(x=0;x<T;x++){
				a=a+matriz[x][y];
			}
			vec_dias[y]=a;	
		
		
	   }
	   
	      for(y=0;y<D ;y++){//----------para dias trabajadas
			if(vec_dias[y] < menos ){	
				menos=vec_dias[y];
				b=y;
			}
	   }
	                                           //COMO CALCUAR LOS DIAS----CUIDADO CON EL ENUNCIADO
	     	printf("\n  Dia con menor horas trabajados: %d",b+1);
	     
	     
	 	//--------------------------h
	
	  printf("\n\n PAGO TOTAL DE LA OBRA\n ");
	
	pago_obra=0;
		
	      for(x=0;x<T;x++){//----------para dias trabajadas
	       	pago_obra=pago_obra+vec_pago_total[x];
	         }
	         
	    printf("\nEl pago total es de %i",pago_obra);
	     
	     
	     
	//------------------------------------f
	
     printf("\n\n PORCENTADE DE PAGO\n ");
  
      printf("\n Ingrese el codigo del empleado: ");
        scanf("%s",nombre);
     
     for( x=0;x<T;x++ ){
			
			if( strcmp(nombre,vec_cod[x]) == 0 ){
				aux_por=vec_pago_total[x];///---------NO SE COMO CALULAR EL PORCENTAJE
			}	
     }
     
     porcentaje=(aux_por*100)/(pago_obra);
     
     printf("\n\n El porcentaje es: %2.f",porcentaje);
      
	//---------------------------g
	
  printf("\n\n PORCENTADE DE HORAS TRABAJADAS POR DIA\n ");
  
      total_horas=0;	
	      for(x=0;x<D;x++){//----------para dias trabajadas
			total_horas+=vec_dias[x];
	         }
	         
	      for(x=0;x<D;x++){//----------para dias trabajadas
			printf("\n\n Dia %i :%d ",x+1,(100*vec_dias[x])/(total_horas));
	         }
	
	
	
	//------------------------------   I
	printf("\n\n TRABAJADORES QUE NO TRABAJARON EL QUINTO DIA\n ");
	

	for( x=0; x<T; x++){
            if( matriz[x][4] == 0){
				printf("\n\n %s",vec_cod[x]);
					
            }		
	}
	
	return 0;
}





