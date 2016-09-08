#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define ARRI 72
#define ABAJ 80
#define IZQ 75
#define DERC 77

void cargar(int campo[20][20],int pintar[20][20],int numero);
void colocar_vidas(int campo[20][20],int pintar[20][20],int fi,int co,int numero);
void imprimir(int campo[20][20],int pintar[20][20],int numero);
void simulacion(int pintar[20][20],int numero,int aux[20][20]);
void seneracion_siguente(int pintar[20][20],int numero);

void main(){
	
	int campo[20][20],pintar[20][20],aux[20][20],numero,fi,co;
	
	printf("\n\n Ingrese el numero para el tama-o de la malla: ");
	 scanf("%i",&numero);
	
	fi=1;
	 co=1;	
	
	cargar(campo,pintar,numero);	
	colocar_vidas(campo,pintar,fi,co,numero);
//	system(pause);
    simulacion(pintar,numero,aux);
	
}


void cargar(int campo[20][20],int pintar[20][20],int numero){
	
	int x,y;
	
	for( x=0; x<numero; x++){
		for( y=0; y<numero; y++){
		 campo[x][y]=7;	
		 pintar[x][y]=0;
		}
	}	
	
}

void colocar_vidas(int campo[20][20],int pintar[20][20],int fi,int co,int numero){
	
	char tecla,cont;
	int ban;
		campo[fi][co]=3;
		
			imprimir(campo,pintar,numero);
		  cont=0;
		ban=1;
	do{
		
		if( kbhit() ){	
	//	tecla=getch();
		 tecla=getch();		
		}
		printf("%i*",tecla);
		
		switch(tecla){
			
			case ARRI:
			
			    if( campo[fi-1][co] == 7){
					if(pintar[fi-1][co] == 0){
					  campo[fi][co]=7;
					  campo[--fi][co]=3;
					}	
				}
			break;
			
			case ABAJ:
			
				if( campo[fi+1][co] == 7){
			    	if(pintar[fi+1][co] == 0){
				      campo[fi][co]=7;
					  campo[++fi][co]=3;
					}	
				}
				break;
				
			case IZQ:
				
			   if( campo[fi][co-1] == 7){
				  if(pintar[fi][co-1] == 0){
					campo[fi][co]=7;
					campo[fi][--co]=3;
				  }
				}
				break;
			
			 case DERC:
			
			if( campo[fi][co+1] == 7){
				if(pintar[fi][co+1] == 0){
					campo[fi][co]=7;
					campo[fi][++co]=3;
				    }
				}	
				break;
		}
			imprimir(campo,pintar,numero);
			
				if( kbhit() ){	
		     //    tecla=getch();
		          tecla=getch();		
		           }printf("%i-",tecla);	
		       
		    if(tecla == 'v'){
		      if( pintar[fi][co] == 0 ){
				pintar[fi][co]=1;
				 cont++;	
		          }
		        }
	
	       if( tecla == 'f'){
			if( cont < 8 && cont > 0){
		      ban=0;	
				     }
		    }
		    
		    if( cont == 8){
				ban=0;
		    }
	
		tecla='p';
	//	Sleep(3000);
	}while(ban);
}


void imprimir(int campo[20][20],int pintar[20][20],int numero){
	
	int x,y;
	
	 system("cls");
	  for( x=0; x<numero; x++){
			printf("\n\t");
		for( y=0; y<numero; y++){
			if( campo[x][y] == 3){
				 printf("%i ",campo[x][y]);
			}else{
				printf("%i ",pintar[x][y]);
			}
		}
	  } 
}


void simulacion(int pintar[20][20],int numero,int aux[20][20]){
	
	int x,y;
	
	do{
      // system("cls");
	  for(x=0;x<numero;x++){
			printf("\n\t");
		for( y=0; y<numero; y++){
		   printf("%i ",pintar[x][y]);
		}
	  }
	  seneracion_siguente(pintar,numero);
	  
	     printf("\n\n");
	  for(x=0;x<numero;x++){
			printf("\n\t");
		for( y=0; y<numero; y++){
		   printf("%i ",pintar[x][y]);
		}
	  }
	 system("pause");
	 // Sleep(3000);
	}while(1);
}

void seneracion_siguente(int pintar[20][20],int numero){
	
	int x,y,vivas,nacer,morir,viva,muertas;
	int a,b,c,d,e,f,g,h;
	
	
	nacer=1;
	viva=1;
	morir=0;
	
	  for( x=0; x<numero; x++){
		for( y=0; y<numero; y++){
			//------- seguir viva
			vivas=0;
			if( pintar[x][y] == 0){
				if( pintar[x+1][y] == 1 ){
					vivas++;
				}
				if( pintar[x-1][y] == 1 ){
					vivas++;
				}
				if( pintar[x][y+1] == 1 ){
					vivas++;
				}
				if( pintar[x][y-1] == 1 ){
					vivas++;
				}
				if( pintar[x+1][y+1] == 1 ){
					vivas++;
				}
				if( pintar[x+1][y-1] == 1 ){
					vivas++;
				}
				if( pintar[x-1][y+1] == 1 ){
					vivas++;
				}
				if( pintar[x-1][y-1] == 1 ){
					vivas++;
				}
			}
			if( vivas == 3 ){
				a=x;
				b=y;
			}
	      //------ seguir viva
	      
	
		 vivas=0;
			if( pintar[x][y] == 1){
				if( pintar[x+1][y] == 1 ){
					vivas++;
				}
				if( pintar[x-1][y] == 1 ){
					vivas++;
				}
				if( pintar[x][y+1] == 1 ){
					vivas++;
				}
				if( pintar[x][y-1] == 1 ){
					vivas++;
				}
				if( pintar[x+1][y+1] == 1 ){
					vivas++;
				}
				if( pintar[x+1][y-1] == 1 ){
					vivas++;
				}
				if( pintar[x-1][y+1] == 1 ){
					vivas++;
				}
				if( pintar[x-1][y-1] == 1 ){
					vivas++;
				}
			}
			if( vivas == 3 || vivas == 2){
				c=x;
				 d=y;
			}
			//-------- muere por soledad
		   if( vivas == 0 || vivas == 1 ){
				e=x;
				 f=y;
		   }
		   //------------ muere por sobre poblacion
		    if( vivas > 3 ){
				g=x;
				 h=y;
		   }
		}
		
	  }	
	  
	  pintar[a][b]=nacer;
		pintar[c][d]=viva;
		  pintar[e][f]=morir;
		  	pintar[g][h]=morir;
}

