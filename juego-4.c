#include<conio.h>
#include<stdio.h>
#include<stdlib.h>




/*

void main(){
	
	int n_negativos=-2,n_positivos=8,numero,iz,der;
	char resp;
	
	printf("\n\tTOMA DE DESICIONES");
	
	printf("\n Hay algun jugador: ");
	fflush(stdin);
	 scanf("%c",&resp);
	resp=tolower(resp);
	
	printf("\n\nRango del indicador: iz**%i**  der**%i** ",  n_negativos, n_positivos);
	
	
	while(resp == 's'){	
	 printf("\n Ingrese un numero entero para correr el indicador: ");
	  scanf("%i",&numero);
	
	    if( numero > 0){
	    	iz=(n_negativos + numero);
	    	der=(n_positivos + numero);
		}
	    if( numero < 0){
	    	iz=(n_negativos - numero);
	    	der=(n_positivos - numero);	
		}
	
	   
	   if(der > 10){
	   	 printf("\nPERDIO\n\tse incia el juego");
	     n_negativos=-2;
	     n_positivos=8;
	   }
	
	    if(iz < -4){
	    printf("\nPERDIO\n\tse incia el juego");
         n_negativos=-2;
         n_positivos=8;
	        }  
	        
	    printf("\n\nRango del indicador: iz**%i**  der**%i** ",  n_negativos, n_positivos);
	 
		printf("\n Hay otro jugador: ");
		 fflush(stdin);
	      scanf("%c",&resp);
	      resp=tolower(resp);
	

		}
	}
	
	*/
void main(){
	
	int numero,iz,der,lim_iz,lim_der;
	float centro,centro_reinicio;
	char resp;
	
	printf("\n\tTOMA DE DESICIONES");
	
	printf("\n Hay algun jugador: ");
	fflush(stdin);
	 scanf("%c",&resp);
	resp=tolower(resp);
	
   printf("\n indique el rango iz: ");
    scanf("%i",&iz);
	
   printf("\n indique el rango der: ");
    scanf("%i",&der);	
    
      printf("\n indique el limite iz: ");
    scanf("%i",&lim_iz);
	
   printf("\n indique el limite der: ");
    scanf("%i",&lim_der);
    
    centro=((der-iz)/2)+(iz);
    centro_reinicio=centro;
    
	while(resp == 's'){	
	

	 printf("\n centro (indicador): %i",centro);
	 printf("\n Ingrese un numero entero para correr el indicador: ");
	  scanf("%i",&numero);
	
	   
	     if(numero > 0){
	     	centro=centro+numero;
	     	 printf("\n\n centro (indicador): %i",centro);
		 }
	      if( centro < 0){
	      	centro=centro-numero;
	     	 printf("\n\n centro (indicador): %i",centro);
		  }
	
	   if( (der-centro) > lim_der){
	  	  printf("\nPERDIO\n\tse incia el juego");
	  	  	   centro_reinicio=centro;
	   }
	
	 if( (iz-centro) < lim_iz){
	  	  printf("\nPERDIO\n\tse incia el juego");
	  	  	   centro_reinicio=centro;
	   }
	
	
	

		}
	}
	
	
	
	
	
	
	
	
	
	

