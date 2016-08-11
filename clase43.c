#include<stdio.h>
#include<conio.h>
#include<stdlib.h>




void main(){
	
	int x1,x2,x3,x4,y1,y2,y3,y4,calculo,validar=0;
	
	do{
		
			printf("\n Ingresar punto 1:");
	 printf("\n x1: ");
	  scanf("%i",&x1);
	  	printf("\n y1: ");
	  scanf("%i",&y1);
	  
 	printf("\n Ingresar punto 2:");
	printf("\n x2: ");
	  scanf("%i",&x2);
	printf("\n y2: ");
	  scanf("%i",&y2);

      printf("\n Ingresar punto 3:");
	   printf("\n x3: ");
	    scanf("%i",&x3);
    	printf("\n y3: ");
	    scanf("%i",&y3);
	
	printf("\n Ingresar punto 4:");
	printf("\n x4: ");
	  scanf("%i",&x4);
	printf("\n y4: ");
	  scanf("%i",&y4);
	
	
	//---para el horizontal de abajo
      if( y1 != y2){
      	printf("\n no es una recta en la recta horizontal abajo");
      	validar=1;
      }
	
    //----para el horizontal de arriba
	  if( y3 != y4){
      	printf("\n  no es una recta horizontal arriba");
      		validar=1;
      }
	
	  if( x1 != x3 ){
	  	printf("\n  no es una recta vertical 1");
	  		validar=1;
	  }
	   
	   if( x2 != x4){
	   	printf("\n  no es una recta vertical 2");
	   		validar=1;
	   }
		
		
		
	}while( validar == 1);

	
}
