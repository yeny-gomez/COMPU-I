#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main(){
	
	char oracion[20][100],ora_pegada[20][100],aux[20][100];
	int x,y,z,longitud,casos,fin,ban;
	

        printf("\n\n  ORACIONES PALINDROMIAS");

        casos=0;
        do{        
			 fin=0; 
			 
			 do{
			 printf("\n\nIngrese la oracion del caso %i: ", casos+1);
			 fflush(stdin);
			 gets(oracion[casos]);
			
			   longitud=strlen(oracion[casos]);
			   
			 if( oracion[casos][0] == ' ' || oracion[casos][longitud-1] == ' ' ){
					ban=1;
                }else{
					ban=0;
                }
                
            }while(ban);
            
            
			for( y=0;y<strlen(oracion[casos]);y++ ){
				if( oracion[casos][y] == 'X' || oracion[casos][y] == 'x' ){
					fin++;
				}	
			}
			
			casos++;
			
	   }while(  fin <= 2 );
        
        casos-=1;
        
        z=0;
        for( x=0;x<casos;x++){
			for( y=0; y<strlen(oracion[x]);y++){			
				if(   isalpha(oracion[x][y]) != 0){
					ora_pegada[x][z++]=oracion[x][y];
				}		
			}	
        }
        
           for( x=0;x<casos;x++){
				strcpy(aux[x],ora_pegada[x]);
				strrev(aux[x]);
				}
						
           for( x=0;x<casos;x++){
		      if( strcmp(ora_pegada[x],aux[x]) == 0){
					printf("\n\n  SI");
		      }else{
					printf("\n\n  NO");
		      }
            }
        
        
	
	
}





