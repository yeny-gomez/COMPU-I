#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
	
	int x1,x2,x3,x4,y1,y2,y3,y4,calculo,validar=0;
	float punto_x_reinicio,punto_y_reinicio,punto_x,punto_y,numero_x,numero_y;
	char resp;
	
	
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
	  	printf("\n  no es una recta vertical izquierda");
	  		validar=1;
	  }
	   
	   if( x2 != x4){
	   	printf("\n  no es una recta vertical derecha");
	   		validar=1;
	   }
		///----solo para validarel cuadrado
	}while( validar == 1);


       punto_x=( (x2-x1)/2)+(x1);
       punto_x_reinicio=punto_x;
       punto_y=( (y3-y1)/2)+(y1);
       punto_y_reinicio=punto_y;
   
   printf("\n\n   coordenada del punto: x=%.2f y=%.2f", punto_x, punto_y);
//---------------jugar

        do{ 
		
		   printf("\n\nIngrese un numero para mover el punto en x: ");
            scanf("%f",&numero_x);
           printf("\n\nIngrese un numero para mover el punto en y: ");
            scanf("%f",&numero_y);
     
             punto_x=punto_x+numero_x;
             punto_y=punto_y+numero_y;
       
          printf("\n\n  la nueva coordenada del punto: x=%.2f y=%.2f", punto_x, punto_y);
       
       if( punto_x > x2){
			printf("\n\nSe sale del cuadro, se reinicia el juego");
			punto_x= punto_x_reinicio;
			punto_y= punto_y_reinicio;
			   printf("\n\n  la nueva coordenada del punto: x=%.2f y=%.2f", punto_x, punto_y);
       }
        if( punto_x < x1){
			printf("\n\nSe sale del cuadro, se reinicia el juego");
			punto_x= punto_x_reinicio;
			punto_y= punto_y_reinicio;
			   printf("\n\n  la nueva coordenada del punto: x=%.2f y=%.2f", punto_x, punto_y);
       }
        
        if( punto_y > y3){
			printf("\n\nSe sale del cuadro, se reinicia el juego");
			punto_y= punto_y_reinicio;
			punto_y= punto_y_reinicio;
			   printf("\n\n  la nueva coordenada del punto: x=%.2f y=%.2f", punto_x, punto_y);
       }
        if( punto_y < y1){
			printf("\n\nSe sale del cuadro, se reinicia el juego");
			punto_y= punto_y_reinicio;
			punto_y= punto_y_reinicio;
			   printf("\n\n  la nueva coordenada del punto: x=%.2f y=%.2f", punto_x, punto_y);
       }
		
		printf("\n\nDesea seguir jugando (s/n): ");
		fflush(stdin);
		 scanf("%c",&resp);
		 resp=tolower(resp);
		 
	     }while(resp == 's');

}
