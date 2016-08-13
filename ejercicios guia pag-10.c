//------ ejercico pagina 10 guia profesor


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



void main(){
	
	char pais[10],resp;
	int dias,x,temperatura,cont,acum=0,cont_2,acum_2,cont_temperatura=0,pro_anterior,porcentaje;
	float promedio_p,promedio_g;
	
	
	
	 
	 do{
			printf("\nNombre del pais:");
			fflush(stdin);
			 scanf("%s",pais);
			print("\nIngrese cuantos dias tomo para el calculo: ");
			  scanf("%i",&dias);
		    acum=0;
		     cont=0;
			for(x=0;x<dias;x++){
				printf("\n   Dia*%i* ",x+1);
				printf("\n Ingrese temperatura (ºF): ");
				 scanf("%i",&temperatura);
				 acum=+temperatura;
				  cont++;
				  
				  if(x > 0){
					if(x < dias){				
						if( temperatura >= 105){
							cont_temperatura++;
						}	
					}
				  }
		     }
		     
		  printf("\n\n %i Dia(s) que la temperatura supero los 105 ºF",cont_temperatura);
		   acum_1=+acum;//----acumulador para el calculos de paises
		    cont_1++;  
		     
		 promedio_p=acum/(cont);
	      prinft("\n\nEl promedio del pais: %.2f",promedio_p;
		   printf("\nOtro pais participo(s/n):");	
	        scanf("%c",&resp);
	 }while(resp=='s');
	 
	 promedio_g=acum_1/cont_1;
     printf("\n\nPomedio de paises: %.2f",promedio_g);
	
	
	
	printf("\nPromedio actual de todos los paises: %.2f ",promedio_g);
	printf("\nIngrese el promedio del año anterior de todos los paises: ");
	 scanf("%i",&pro_anterior);
	
      porcentaje=100-((pro_anterior/promedio_g)*100);
	
	if( porcentaje > 20){
		printf("\nSitucion grave");
	}
	if(porcentaje > 0){
		if(porcentaje < 20){
		printf("\nSitucion normal");	
		}
	}
	
	if(porcentaje < 0){
	   	printf("\nSitucion estable");
	}
	if(porcentaje == pro_anterior){
	   	printf("\nSitucion estable");
	}
	
	
	
}
