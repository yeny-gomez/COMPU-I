#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#define ARRI 72
#define ABAJ 80
#define DER 77
#define IZQ 75


void cargar_matriz(int campo[20][20],int tam,int fi,int co);
//void crear_celulas(int campo[15][15],int tamaño);


void main(){
	
	int campo[20][20];
	int tam,fi,co;
	
	fi=1;
	 co=1:
	 	
	printf("\n\n Cual es el tamaño del tablero: ");
	 scanf("%i",&tam);
	
	cargar_matriz(campo,tam);
	crear_celulas(campo,tamaño);
	
	
}

void cargar_matriz(int campo[20][20],int tam){
	
	int x,y;
	
	  for( x=0; x<tam; x++){
	  	for( y=0; y<tam; y++){
	  		 campo[x][y]=2;
		  }
	  }
	
}


void crear_celulas(int campo[15][15],int tam,int fi, int co){
		
	int x,y;
	char tecla;

	campo[fi][co]=3;
	
   ban=1;
	 do{
	   	
	    if( kbhit() ){
	    	 ffluhs(stdin);
	    	tecla=getch();
		}
	 
	 	switch (tecla){
			
			case ARRI: 
			
			  if( campo[fi-1][co] == 2 ){
			  		campo[fi][co]=2;
			  		campo[fi-1][co]=3;
			  		fi--;
			  		
			  		if( kbhit ()){
			  			techa=getch();
			  			if( tecla == 'v'){	
			  				campo[fi][co]=1;
						  }
						  if( tecla == 'f'){
						  	campo[fi][co]=0;
						  }
					  }		
			  }		
			  break;
			
			case ABAJ:
			
				  if( campo[fi+1][co] == 2){
			  		campo[fi][co]=2;
			  		campo[fi+1][co]=3;
			  		fi++;
			  		
			  			   if( kbhit ()){
			  			      techa=getch();
			  			      if( tecla == 'v'){	
			  				campo[fi][co]=1;
						  }
						  if( tecla == 'f'){
						  	campo[fi][co]=0;
						  }
					  }	
			  		
			      }			
			  break;
			
			 case DER:
			 	
			 	  if( campo[fi][co+1] == 2){
			  		campo[fi][co]=2;
			  		campo[fi][co+1]=3;
			  		co++;
			      }		
			  break;
			 	
			case IZQ:
				 if( campo[fi][co-1] == 2){
			  		campo[fi][co]=2;
			  		campo[fi][co-1]=3;
			  		co--;
			      }	
			      break;
			
		}
	 	
	 	
	 }while(ban);
	
	
	
	
	
	
}



