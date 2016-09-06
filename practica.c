#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>



void main(){
	
	
	int numero,x,ban;
	char palabras[20][20],letra;
	
	printf("\n\ncuantas palabras va a ingresar: ");
	  scanf("%i",&numero);
	  
	  ban=1;
	do{
	printf("\n que letra va a memorizar: ");
		fflush(stdin);
	 scanf("%c",&letra);
	 
	   if( letra == 'a'){
	   	ban=0;
	   }else if( letra == 'e'){
	   	ban=0;
	   }else if( letra == 'i'){
	   	ban=0;
	   }else if( letra == 'o'){
	   	ban=0;
	   }else if( letra == 'u'){
	   	ban=0;
	   }else{
	   	ban=1;
	   }
	 
	 
	}while( ban );
	
	
	
	for( x=0; x<numero; x++){
		
		do{
		   printf("\n\n Ingrese la palabra %i: ",x+1);
			fflush(stdin);
			scanf("%s",palabras[x]);
		}while( (strlen(palabras[x])) >= 20);	
	}
	
	
		for( x=0; x<numero; x++){
		  
		  if( palabras[x][0]==letra){
		  	
		  	printf("\n\n %s, ok",palabras[x]);
		  	
		  }else{
		  	printf("\n\n %s, X",palabras[x]);
		  	
		  }
	    }
	
	
	
	
	
	
	
	
}
