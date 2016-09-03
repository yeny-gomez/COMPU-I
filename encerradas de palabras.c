#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>




void main (){
	
	char oracion[1000],aux[30],aux_1[10];
	int x,cont,letras,palabras,ban_2,ban_1;
	

ban_1=0;
ban_2=0;
	do{
	
	  printf("\n\n ingrese oracion: ");
	    gets(oracion);
	     letras=0;
	      palabras=0;
	   
        for( x=0; x<strlen(oracion); x++){
			
			if( oracion[x] != ' ' ){
				letras++;
			}else{
		    	if( letras < 2){
				  ban_1=1;
			    }	
			   letras=0;	
			  palabras++;
			}
        }
        
        	if( palabras > 24){
				ban_2=1;
			}
        
    }while( ban_1 == 1 || ban_2 == 1);


 

	 ban_1=0;
	for( x=0; x<strlen(oracion); x++){
		
		if( oracion[x] != ' ' &&  oracion[x+1] == ' '){
			
			
			aux[x]=oracion[x-1];//---- dos ultimas letras de la primera palabra
			aux[x+1]=oracion[x];
			
			aux_1[x]=oracion[x+2];//------dos primeras de la segunda palabra
			aux_1[x+1]=oracion[x+3];
			
			
			if( aux[x] != aux_1[x] && aux[x+1] != aux_1[x+1]){
				  ban_1=1;	  		    		
			}
			
			
		}
	}
	
	if(ban_1){
	   	  printf("\n\n NO");
	}else {
		  printf("\n\n SI");
	}
	
}











