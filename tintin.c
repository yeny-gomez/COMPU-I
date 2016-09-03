#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>

void main(){
	
	char nombre[20][50],aux[20][50],aux_a;
	int x,y,a,z,b; 
	
	printf("\n Cuantas personas saludo tintin: ");
	 scanf("%d",&a);
	
	for(x=0;x<a;x++){
		printf("\n %i :  ",x+1);
		 fflush(stdin);
		  gets(nombre[x]);
	}
	
	
	for(x=0;x<a;x++){
	 for( y=0; y<strlen(nombre[x]); y++){
	 
	 if( nombre[x][y] != ' '  && (nombre[x][y+1] == ' ' ) ){
	 	
	 	  if( nombre[x][y-2] == 's' && nombre[x][y-1] == 'o' && nombre[x][y] == 'y'){
				
				   b=0;
				    y++;
				 for(z=y; z< strlen(nombre[x]);z++){
	 		   	   
					 if( nombre[x][z] != ' ' ){
				      y++;	
					  aux[x][b]=nombre[x][y];
					  b++;
					 }
				

				
	 	          }
	 		   
	 	}
	 		      
	  }
	 	
	}
 }
	
	for(x=0;x<a;x++){
				printf("\nhola, %s",aux[x]);	 	
	}

	
	
	
}


