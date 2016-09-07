#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#define ARRI 72
#define ABAJ 80
#define DER 77
#define IZQ 75

void jugador(int campo[15][15],int fi,int co,int fi_1,int co_1);
//void enemigo(int campo[15][15],int fi_1,int co_1);
void movimiento_juador_quieto(int campo[15][15],int fi_1,int co_1);
void imprimir(int campo[15][15]);

void main(){ 


   int x,y,fi,co,fi_1,co_1;
   int campo[15][15]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  {1,0,0,0,0,0,0,0,0,2,0,0,0,0,1},
					  {1,0,2,2,2,2,0,0,0,2,0,0,2,0,1},
					  {1,0,0,0,0,0,0,0,0,2,0,0,2,0,1},
				      {1,0,0,0,0,0,0,2,0,2,0,0,2,0,1},
				      {1,0,0,0,0,0,0,2,0,0,0,0,2,0,1},
				      {1,0,0,0,0,0,0,2,0,0,0,0,0,0,1},
					  {1,2,2,2,2,0,0,0,0,0,0,0,2,0,1},
					  {1,0,0,0,2,0,0,0,0,2,2,2,2,2,1},
				      {1,0,0,0,2,0,0,0,0,0,0,0,2,0,1},
				      {1,0,0,0,2,0,0,0,0,0,2,0,2,0,1},
				      {1,0,0,0,0,0,0,0,0,0,2,0,0,0,1},
				      {1,0,0,0,0,0,2,2,2,2,0,0,0,0,1},
				      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  };

      
      fi=1;
       co=1;
        campo[fi][co]=3;

     /* fi_1=13;
       co_1=13;
         campo[fi_1][co_1]=4;
*/
   jugador(campo,fi,co,fi_1,co_1);

}




void jugador( int campo[15][15],int fi,int co,int fi_1,int co_1){
	
	char tecla;
	int ban;
	
	ban=0;
	
	do{
		
		if( kbhit() ){
			fflush(stdin);
			tecla=getch();
			ban=1;
		}
		
		switch (tecla){
			
			case ARRI: 
			
			  if( campo[fi-1][co] == 0 ){
			  		campo[fi][co]=0;
			  		campo[fi-1][co]=3;
			  		fi--;
			  }		
			  break;
			
			case ABAJ:
			
				  if( campo[fi+1][co] == 0 ){
			  		campo[fi][co]=0;
			  		campo[fi+1][co]=3;
			  		fi++;
			      }			
			  break;
			
			 case DER:
			 	
			 	  if( campo[fi][co+1] == 0 ){
			  		campo[fi][co]=0;
			  		campo[fi][co+1]=3;
			  		co++;
			      }		
			  break;
			 	
			case IZQ:
				 if( campo[fi][co-1] == 0 ){
			  		campo[fi][co]=0;
			  		campo[fi][co-1]=3;
			  		co--;
			      }	
			      break;
			
		}
		
		if(ban){
		   movimiento_juador_quieto(campo,fi_1,co_1);
		}
		
		
		imprimir(campo);
		Sleep(100);
		
		
	}while(1);
	
	
}


void imprimir(int campo[15][15]){
	
	
	int x,y;
	
	system("cls");
	   for( x=0; x<15; x++){
	   	printf("\n\t");
	   	for( y=0; y<15; y++){  	
	   		
	   		if( campo[x][y] == 1){
	   			printf("%c",219);
			   }
	   		
	   		if( campo[x][y] == 0){
	   			printf(" ");
			   }
	   		if( campo[x][y] == 2){
	   			printf("%c",178);			
			   }
	   		if( campo[x][y] == 3){
	   			printf("%c",1);
	   			
			   }
	
		   }
	   	
	   }
	
}


void enemigo(int campo[15][15],int fi_1,int co_1){
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
