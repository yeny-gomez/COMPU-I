#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ARRI 72
#define ABAJ 80
#define DER 77
#define IZQ 75
#define FIN 102

void cargar_mapa(int campo[7][7],int celdas_h[7], int celdas_v[7],int nivel,int puntero[7][7]);
void imprimir(int campo[7][7],int puntero[7][7],int nivel);


//------ Tents&Trees

void main(){
	
	int opcion,campo[7][7],x,y,celdas_h[7],celdas_v[7],nivel,puntero[7][7];
	
	for(x=0;x<7;x++){
		for(y=0;y<7;y++){
			campo[x][y]=0;
		}
	}
	for(x=0;x<7;x++){
		for(y=0;y<7;y++){
			puntero[x][y]=' ';
		}
	}
	
	printf("\n\n\tTENTS & TREES");
	
	printf("\n\n Que nivel quiere jugar");
	 scanf("%i",&nivel);
	 
	 do{	
	 printf("\n\n  Menu");
	printf("\n\n  1. Crear mapa");
	printf("\n\n  2. ver mapas pre-cargados");
	printf("\n\n  3. Jugar");
	printf("\n\n  4. Continuar con mapa guardado");
	printf("\n\n  5. creditos");
	printf("\n\n  6. salir \n\n");
	scanf("%i",&opcion);
	
	
	  switch(opcion){
		
		 case 1:
		
			  cargar_mapa(campo,celdas_h,celdas_v,nivel,puntero);
			
			break;
	
	}

     
     
     if( opcion == 6){
			break;
     }
	
	}while(1);
	
}


void cargar_mapa(int campo[7][7],int celdas_h[7], int celdas_v[7],int nivel,int puntero[7][7]){
	
	int x,fi,co,aux,fin;
	char direcciones,final,tecla;
	
	fi=0;
	 co=0;
	 
	 aux=campo[fi][co];
	 puntero[fi][co]='_';
	printf("\n\n");
	fin=1;
	do{
		
	    if( !kbhit()){
			direcciones=getch();
			
	    }
		
		switch( direcciones ){
			
			case ARRI: 
				
				if( fi > 0 ){
				    puntero[fi][co]=aux;	
					aux=puntero[fi+1][co];
				    puntero[fi+1][co]='_';
					  fi++;
					  
					if( !kbhit() ){
					  tecla=getch();    
					   tecla=getch();
					   tolower(tecla);
					   	printf("jsdhjfsdhjsdfhj");
					       if( tecla == 'a'){
			                campo[fi][co]=8;	
                                 }
			               if( tecla == 't'){
			                  campo[fi][co]=4;	
                                  }
	                       if( tecla == 'b'){
			                 campo[fi][co]=0;	
                                  }
					}   
				  
				}	
					imprimir(campo,puntero,nivel);
				break;
			
			case ABAJ:
		       if( fi < nivel ){
					campo[fi][co]=aux;	
					aux=campo[fi-1][co];
				    campo[fi-1][co]='_';
					fi--;
				}	
				break;
				
			case DER:
				if( co > 0 ){
					campo[fi][co]=aux;	
					aux=campo[fi][co-1];
				    campo[fi][co-1]='_';
					co--;
				}	
				break;
			
			case IZQ:
				if( co < nivel ){
					campo[fi][co]=aux;	
					aux=campo[fi][co+1];
				    campo[fi][co+1]='_';
					co++;
				}
				break;
				
			 case FIN:
					
					fin=0;
					
			 	break;
			 
		}
		
		
		system("pause");
	}while(fin);
	
	
}

void imprimir(int campo[7][7],int puntero[7][7],int nivel){
	
	   int x,y;
	   
	system("cls");
	for( x=0; x<nivel;x++){
		printf("\n\n\t");
		for(y=0;y<nivel;y++){
			if( puntero[x][y] == '_'){
				printf("%i ",puntero[x][y]);
			}else{
				printf("%i ",campo[x][y]);
			}
		}
	}
	
	
}


