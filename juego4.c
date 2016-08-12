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
	
	int numero,iz,der,lim_iz,lim_der,cont_total=0,cont_perdidos=0;
	float centro,centro_reinicio,veces_perdio;
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
	 printf("\n centro (indicador): %.2f",centro);
	 printf("\n Ingrese un numero entero para correr el indicador: ");
	  scanf("%i",&numero);
	   cont_total++;
	     	centro=centro+numero;
	     	 printf("\n\n El nuevo centro (indicador): %.2f",centro);
		 
	      if( (centro) < lim_iz){
				 centro=centro_reinicio;
	     	 printf("\n\n PERDIO se inicia el juego\n\n Centro %.2f ",centro);
	     	   cont_perdidos++;
		  }else if( (centro) > lim_der){
				 centro=centro_reinicio;
	     	 printf("\n\n PERDIO se inicia el juego\n\n Centro %.2f ",centro);
	     	 cont_perdidos++;
		  }else{
				printf("\n\n GANO puede seguir jugando ");
		  }
		  printf("\n\n Desea seguir jugando (s/n);");
		   fflush(stdin);
		   scanf("%c",&resp);
		   resp=tolower(resp);
	}
	
	veces_perdio=(100*cont_perdidos)/cont_total;
	printf("\n\nPorcentaje de veces que se salio del rango  %.2f",veces_perdio);
	
}
