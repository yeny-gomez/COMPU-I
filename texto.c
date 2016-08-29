#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>


void main (){
	
	
	char texto[300];
	int x,cont_1,cont,cont_2,cont_3,cont_4;
	
	
	printf("\n\n Ingrese el texto: \n");
	 gets(texto);

	
	cont=0;
	 cont_1=0;
	  cont_2=0,
	   cont_3=0;
	    cont_4=0;
	   for(x=0;texto[x];x++){
	   	
	   	if(texto[x]=='a'){
	   		
	   		cont_1++;
	   		
		   }
		   if(texto[x]=='e'){
	   		
	   		cont_1++;
	   		
		   }
	     	if(texto[x]=='i'){
	   		
	   		cont_1++;
	   		
		   }
	    	if(texto[x]=='o'){
	   		
	   		cont_1++;
	   		
		   }
		   if(texto[x]=='u'){
	   		
	   		cont_1++;
	   		
		   }
		    cont++;
		    
		   if( texto[x]==' '){
		   	texto[x] = 95; 
		   	cont_2++;
		   	
		   }
		   
		   if( isalpha(texto[x])==2 || isalpha(texto[x]==1)){
		   	 cont_3++;
		   }
		   
		   if( isdigit(texto[x]) == 1){
		   	 cont_4++;
		   }
		   
	   }
	   
	   
	
	printf("\n  %i total de caracteres",cont);
	printf("\n  %i total de vocales",cont_1);
	printf("\n  %i total de palabras",cont_2);
	printf("\n  %i total de letras",cont_3);
	printf("\n  %i total de digitos",cont_4);
	
	
	printf("\n");
	
	for( x=cont; x>=0;x--){
		
		printf(" %c ",texto[x]);
		
	}
	
	
	
}
