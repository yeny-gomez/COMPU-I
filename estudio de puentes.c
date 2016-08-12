#include<stdio.h>
#include<conio.h>



void main(){
	
	char resp,n_puente[10],tipo,toneladas;
	int puentes,x,i,corrocion,cont=0,acum_capacidad=0,troncal,cont_h=0,cont_m=0,mayor=-999999,aux,cont_corrocion;
	
	printf("\n\nESTUDIO DE PUENTES");
	
	   for(i=0;i<3;i++){
	  
		printf("\n\n Ingrese que troncal es %i: ",i+1);
		  scanf("%s",&troncal);
		  
			printf("\nHay puente para el calculo(s/n): ");
			  fflush(stdin);
		      scanf("%c",&resp);
		        resp=tolower(resp);
	
	cont_corrocion=0;
	
		while( resp == 's' ){
		   
				printf("\n\nNombre del puente: ");
			     scanf("%s",n_puente);
		        printf("\n\nIngrese el tipo de puente: metalico(m) homigon(h) mixto(x): ");
		         fflush(stdin);
		         scanf("%c",&tipo);
		          scanf("%c",&tipo);
		         tipo=tolower(tipo);
		        printf("\n\nIngrese la capacidad en toneladas ");
		         scanf("%i",&toneladas);
		        printf("\n\nIngrese la corrocion del puente en porcentaje: ");
		         scanf("%i",&corrocion); 
			  printf("\n\n %c",tipo);
			  if( tipo == 'm' || tipo == 'h' ){
				
					if(toneladas >= 50 && corrocion > 45 ){
						printf("\n\n Estado de alto riesgo");
					}else{
						printf("\n\n Estado transitible");
					}
			  }
			  if( tipo == 'x'){	
					printf("\n\nEl estado del puente no es definido");
					cont++;
					acum_capacidad=+toneladas;
			  }
			  
			  if( tipo == 'h'){
					cont_h++;
			  }
			  if( tipo == 'm'){
					cont_m++;
			  }
			  
			  if( corrocion < 65){///----------calculo de corrocion-para la via mas segura
					cont_corrocion++;
			  }
	       printf("\nHay otro puente para el calculo(s/n): ");
			 fflush(stdin);
		      scanf("%c",&resp);
		        resp=tolower(resp);
		}
			  
		
			  if( cont_corrocion > mayor ){///-----para la via mas segura
			       aux=troncal;
					mayor=cont_corrocion;
			  }
        
        if( troncal == 1){
			if(cont_h>cont_m){
				printf("\n\n Hay mas puentes de hormigon en la troncal 1");
			}else {
				printf("\n\n Hay mas puentes de metalicos en la troncal 1");
			}
        }
        
	 }
	 if( mayor > 0){
	  printf("\n\n La via mas segura es la troncal %i",aux);
	 }
	 
	
	
	
	
}



