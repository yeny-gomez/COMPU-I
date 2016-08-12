//------ ejercico pagina 10 guia profesor


#include<stdio.h>
#include<conio.h>
#include<define.h>



void main(){
	
	char p_origen[10],pais[10];
	int dias,x,temperatura,cont,acum=0,cont_temperatura=0,pro_anterior,porcentaje;
	float promedio;
	
	
	
	printf("\t\nPais donde se encuentra el organismo: ");
	 scanf("%s",p_origen);
	
	printf("\nAlgun pais participo(s/n): ");
	 scanf("%c",&resp);
	 resp=tolower(resp);
	 
	 while(resp=='s'){
			
			printf("\nNombre del pais:");
			fflush(stdin);
			 scanf("%s",pais);
			print("\nIngrese cuantos dias tomo para el calculo: ");
			  scanf("%i",&dias);
		
			for(x=0;x<dias;x++){
				
				printf("\n   Dia*%i* ",x+1);
				printf("\n Ingrese temperatura: ");
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
			
		printf("\nOtro pais participo(s/n):");	
	     scanf("%c",&resp);
	 }
	
	promedio=acum/(cont+1);
	
	printf("\nPromedio actual: %.2f ",promedio);
	printf("\nIngrese el promedio del año anterior: ");
	 scanf("%i",&pro_anterior);
	
      porcentaje=100-((pro_anterior/promedio)*100);
	
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
