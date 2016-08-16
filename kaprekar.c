#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


void main(){
	
	int numero,multipli,div,rec,cont,cont_2,x,y,suma_iz,suma_der,suma,rec_1,div_1,suma_1;
	char resp;
	
	printf("\n\n\t NUMERO KAPREKAR");
	

		 
	do{
		//*****************************************
		do{
			printf("\n\nIngrese numero:");
			 scanf("%i",&numero);
			if( numero == 0){//-------para que no ejecute el cero mas abajo se sale del sistema
				break;
			}
			
			multipli=pow(numero,2);
			
			cont=0;
            do{
				div=div/10;
				cont++;	
			}while( div != 0 );
			///------ aqui divido en dos miembros todo el numero
			cont_2=0;
			do{
				div=numero;
	          for( x=1; x< cont-1; x++){//-----la x indica pa potencia //-- -1 porque el 
					
					rec=div/10;
					div=div/10;
					
					suma=div*pow(10,x);
					suma=+rec;
					
					suma_iz=+suma;
			
					for(  y=x+2; y<cont-1;y++){//------el -1 por el reciduo//-----empieza de la poscion 3
						
						rec_1=div/10;
						div_1=div%10;
						
						suma=div_1*pow(10,(cont-(x+1) ) );//---cuidado con la resta para hallar la potencia
						
						suma_der=+suma;
						
					}
					
					printf("\n\n %i",suma_iz+suma_der);
	          }
				
				
				cont_2++;
			}while( cont_2 != cont);
			
			
			
			
			
		}while( numero < 0 || numero > 65536 );
			
			if( numero == 0){//-----este segundo break es para que se salga completamente del juego
				break;
			}
		//************************************************	
	  printf("\n\nDesea calcular otro numero(s/n): ");
	  fflush(stdin);
	   scanf("%c",&resp);
		   resp=tolower(resp);
		   
	}while( resp == 's' );	   
	
	
	
	
	
	
}
