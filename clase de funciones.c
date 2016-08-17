#include<stdio.h>
#include<conio.h>

int suma(int a,int b);
int resta(int a, int b);



void main(){
	
/*	int x,y;
	
	
	printf("\n\nIngrese el valor de a:");
	 scanf("%i",&x);
	printf("\n\nIngrese el valor de b:");
	 scanf("%i",&y);
	
printf("\n\n  Suma: %i",suma(x,y));	
printf("\n\n  Resta: %i",resta(x,y)) ; 
		
		
	
}


int suma(int a,int b){
	
	int s;
	
	s=a+b;
	
	return s;
	
}

int resta(int a,int b){
	
	return(a-b);
	
}
*/


  int x,y,vec[10][10],cont;
  
  
  
     for( x=0; x<10; x++ ){
     	for ( y=0; y<10; y++){
		  vec[x][y]=0;
		 }
	 }



   x=0;
   y=9;
   
   do{
   	
          vec[x][y]=1;   	
   	
   	
   	  x++;
     	y--;

   }while( y != -1 );



     for( x=0; x<10; x++ ){
     	for ( y=0; y<10; y++){
		 printf("%i ",vec[x][y]);
		 }
		 printf("\n");
	 }
}

