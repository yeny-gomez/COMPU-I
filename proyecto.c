#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define ARRI 72
#define ABAJ 80
#define DER 77
#define IZQ 75
#define T 20

struct coordenadas{
	int x;
	int y;
};

void cargar_campo(int campo[T][T+2]);
void movimiento(int campo[T][T+2],struct coordenadas *a,struct coordenadas *b,struct coordenadas *c,struct coordenadas *d);
void movimiento_jugador(int campo[T][T+2],struct coordenadas *a);
void movimiento_fantasmas(int campo[T][T+2],struct coordenadas *b);

void main(){
	
	struct coordenadas jugador,fant_1,fant_2,fant_come;
	struct coordenadas *a,*b,*c,*d;
	
	a=&jugador;
	 b=&fant_1;
	  c=&fant_2;
	   d=&fant_come;
	   
	   jugador.x=rand()%20;
	   jugador.y=rand()%20;
	    fant_1.x=rand()%20;
	    fant_1.y=rand()%20;
	     fant_2.x=rand()%20;
	     fant_2.y=rand()%20;
	      fant_come.x=rand()%20;
	      fant_come.y=rand()%20;
	
	int campo[T][T+2];
	srand(time(0));
	
	cargar_campo(campo);
	movimento(campo,&jugador,&fant_1,&fant_2,&fant_come);
	
	
}

void cargar_campo(int campo[T][T+2]){
	
	int x,y;
	
	  for(x=0;x<T;x++){
			for(y=0;y<T+2;y++){			
				if(x == 1){//imprimir un vector en la primera linea
					campo[x][y]=0;
				}else if(y == 0){
					campo[x][y]=0;
				}else if(x == T-1){
					campo[x][y]=0;
				}else if(y == T+1){
					campo[x][y]=0;
				}else{
					campo[x][y]=1;
				}
					
			}
	  }
	
}

void movimiento(int campo[T][T+2],struct coordenadas *a,struct coordenadas *b,struct coordenadas *c,struct coordenadas *d){
	
	char tecla;
	int x,y;
	 
	campo[a->x][a->y]=2;
	  campo[b->x][b->y]=3;
	   campo[c->x][c->y]=4;
	
	   do{
	
		 movimiento_jugador(campo,*a);
		 // aqui puedo colocar el vec de los pasos para que se carge
	  //   movimiento_fantasmas(campo,*b);
		
		 
						
	}while(1);
	

}


void movimiento_jugador(int campo[T][T+2],struct coordenadas *a){
	
	char tecla;
	
		if( kbhit()){
			tecla=getch();
               tecla=getch();
		}	
		switch( tecla ){	
				case ARRI:			
					if( campo[a->x-1][a->y]==0 ){
						campo[--a->x][a->y] =2;
					}
					break;
					
				case ABAJ:
				if( campo[a->x+1][a->y] == 0 ){
					campo[++a->x][a->y] = 2;
					}
					break;
					
				case DER:	
				if( campo[a->x][a->y+1] == 0 ){
					campo[a->x][++a->y] = 2;
					}
					break;		
						
				case IZQ:	
				if( campo[a->x][a->y-1] == 1 ){
					campo[a->x][--a->y] = 2;
					}
					break;
				tecla='p';
			}
}

void movimiento_fantasmas(int campo[T][T+2],struct coordenadas *b){
	
	
	
	
}

