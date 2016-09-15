/*
   cuidado con cargar la matriz campo debo ocultarla mientras no pierda
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define JUGADOR 3
#define FAN_1 5
#define PARED 0
#define VACIO 2
#define CAMINO 4

void cargar_campo(int campo[40][40],int aux[40][40]);
int movimientos(int campo[40][40],int *cont_vidas,int aux[40][40]);
void bloques(int campo[40][40],int auz[40][40]);
void imprimr(int campo[40][40]);

int main(){
	
	int aux_fi,aux_co,campo[40][40],menu,opcion,aux[40][40];
	char resp;
	 int vidas,*cont_vidas;
	
	 vidas=3;
	  cont_vidas=&vidas;
       srand(time(0));
    
    do{
		
    printf("\n\n\n\t**PACXON**");
    printf("\n\n  1. Jugar.");
    printf("\n\n  2. Salir.");
      scanf("%i",&opcion);
      printf("\n\n");
		 system("cls");
    
         if( opcion == 1){
			
			 printf("\n\n\tMENU"); 
             printf("\n 1. Jugar.");	
	         printf("\n 2. Ayuda.");
	         printf("\n 3. Creditos.");
	          scanf("%i",&menu);
       
	       switch(menu){
				
				case 1:
					do{
						 movimientos(campo,&vidas,aux);	
						 printf("\n\n  Quiere seguir jugando (s/n): ");
						  fflush(stdin);
						 scanf("%c",&resp);
					}while(resp == 's');
					break;
				
				case 2:	
					printf("\n  Ayuda");
					printf("\n Pacxon debe llenar el campo de juego com bloques, para ello con ayuda de ");
					printf("\n las direccionales debe ir formadon un camino que lo ayudara hacer bloques.");
					printf("\n\n El camino que va dejando pacxon no debe ser tocado por los fantasmas");
					printf("\n ya que perdera a menos que le falten tres pasos antes de llegar ya que perdera una vida.");
					printf("\n Pacxon tampoco puede ser tocado por los fantasmas ya que perdera una vida.");
					printf("\n Para pasar de nivel se debe llenar el 80 porciento del campo.");	 
					 printf("\n\n");
					 system("pause");
					 system("cls");
					break;
				
				case 3:
					printf("\n     Creditos");
					printf("\n  Realizado por: Yennifer Gomez");
					printf("\n  Cedula: 21.418.778.");
					printf("\n  Curso: Computacion I");
					 printf("\n\n");
					 system("pause");
					 system("cls");
					break;
	       }
						
         }else if( opcion == 2){
				printf("\n\n\n\t");  
				printf("***SALIENDO**");
				
				return 0;						
         }
    
	       }while(1);
}

int movimientos(int campo[40][40],int *cont_vidas,int aux[40][40]){
	
	int fi,co,fi_1,co_1,tiempo,primera_vuelta,ban_1,valor,movimiento,ban,pisar,cont;
	char tecla;
		
			cargar_campo(campo,aux);
    fi=0;
     co=0;
     
     fi_1=rand()%39+1;
      co_1=rand()%39+1;
     
      tiempo=0;
	  
	 campo[fi][co]=JUGADOR;
	  aux[fi][co]=JUGADOR;
      campo[fi_1][co_1]=FAN_1;
       aux[fi_1][co_1]=FAN_1; 
 	primera_vuelta=1;
 	ban=0;
 	tecla=0;
 	pisar=0;
 	cont=0;
	do{
	  tiempo++;
	
	  imprimr(campo);
	
	  	if( kbhit () ){
			fflush(stdin);
		 tecla=getch();	
	       tecla=getch();
		}
	printf("%i",tecla);	
	
		 switch(tecla){
				
				case 77:				
					if( co+1 < 40){
				       if(campo[fi][co+1] == VACIO || campo[fi][co+1] == PARED || campo[fi][co+1] == FAN_1){
				        	
				      if( fi > 0 && fi < 39 && co > 0 && co < 39 ){
						
							 campo[fi][co]=CAMINO;	
							
				      }else{
							campo[fi][co]=PARED;	
				      }
			
					  	campo[fi][++co]=JUGADOR;
					  	
					  	aux[fi-1][co]=cont++;
					    aux[fi][co]=JUGADOR;
					  	aux[fi+1][co]=cont++;
					  	
					  	
					  	if(campo[fi][co+1]==PARED){
							tecla='a';//---para cuando la siguiente posciocion sea pared envio la matriz aux
					  	}
					  }
					}	
					break;
				
				case 75:			 
					if( co-1 > -1 ){
				       if(campo[fi][co-1] == VACIO || campo[fi][co-1] == PARED || campo[fi][co-1] == FAN_1){
				        
					  if( fi > 0 && fi < 39 && co > 0 && co < 39 ){
						campo[fi][co]=CAMINO;
						
					  }else{
						campo[fi][co]=PARED;
					  }
					 campo[fi][--co]=JUGADOR;
					 
					   	if(campo[fi][co-1]==PARED){
							tecla='a';
					  	}
					  }
					}	
					break;
				
				case 72:				
					if( fi-1 > -1 ){
					   if(campo[fi-1][co] == VACIO || campo[fi-1][co] == PARED || campo[fi-1][co] == FAN_1){
				        
					  if( fi > 0 && fi < 39 && co > 0 && co < 39 ){
						campo[fi][co]=CAMINO;
						
					  }else{
						campo[fi][co]=PARED;
					  }
					 	 campo[--fi][co]=JUGADOR;
					 	 
					   	if(campo[fi-1][co]==PARED){
							tecla='a';
					  	}
					  }
					}
					break;
						
				case 80:				
					if( fi+1 < 40 ){
				    if(campo[fi+1][co] == VACIO || campo[fi+1][co] == PARED || campo[fi+1][co] == FAN_1){
				       if( fi > 0 && fi < 39 && co > 0 && co < 39 ){
						 campo[fi][co]=CAMINO;
						 
				       }else{
						 campo[fi][co]=PARED;
				       }
				         campo[++fi][co]=JUGADOR;
				         
				     	if(campo[fi+1][co]==PARED){
							tecla='a';
					  	}
				       } 
					}		
					break;
		 };
		 //--------------- FANTASMA
		if(primera_vuelta){
			movimiento=rand()%4+1;
	          primera_vuelta=0;
		}else{
			
			if(ban){
		
			  do{		
				valor=rand()%4+1;
			   }while( valor == movimiento);
			
			    movimiento=valor;
			}
		}
		 	 
		switch(movimiento){	
				
			case 1:	  				
				if(campo[fi_1+1][co_1-1] == CAMINO){					
					pisar=1;
				}	
				if( (campo[fi_1+1][co_1-1] == VACIO) ){
				 campo[fi_1][co_1]=VACIO;
				 campo[++fi_1][--co_1]=FAN_1;
				    ban=0;
				}else{
					ban=1;
				}				
				break;
		
			case 2:		 	
				if(campo[fi_1+1][co_1+1] == CAMINO){
						pisar=1;
				}				
				if((campo[fi_1+1][co_1+1] == VACIO) ){
				 campo[fi_1][co_1]=VACIO;	
				 campo[++fi_1][++co_1]=FAN_1;
				    ban=0;
				}else{
					ban=1;
				}		
				break;
		
			case 3:	
				if(campo[fi_1-1][co_1+1] == CAMINO){
					pisar=1;
				}				
				if((campo[fi_1-1][co_1+1] == VACIO) ){	
				 campo[fi_1][co_1]=VACIO;
				 campo[--fi_1][++co_1]=FAN_1;
				    ban=0;
				}else{
					ban=1;
				}
				break;
					
			case 4: 
				if(campo[fi_1-1][co_1-1] == CAMINO){
					pisar=1;
				}				
				if((campo[fi_1-1][co_1-1] == VACIO) ){
				 campo[fi_1][co_1]=VACIO;
				 campo[--fi_1][--co_1]=FAN_1;
				    ban=0;
				}else{
					ban=1;
				}
				break;						
		};			
			               //------------VIDAS
			printf("\n\n\n\t VIDAS: %i",*cont_vidas);	               
		  if(fi_1 == fi && co_1 == co || pisar==1){	
				--(*cont_vidas);
			 		
				if( *cont_vidas == 0){
				  system("cls");
					printf("\n\n\n\n  PERDISTE !!!  \n\n\n");
					system("pause");
					return 0;
				}	
				
	     	movimientos(campo,cont_vidas,aux);		
		  }
				
	  Sleep(50);
	    imprimr(campo);
			
	}while(1);
}

void cargar_campo(int campo[40][40],int aux[40][40]){//------------------ SOLO SE ACTIVA EN EL PRIMER NIVEL
	
	int x,y;
	
	for(x=0;x<40;x++){
		for(y=0;y<40;y++){
			if( x == 0 ){
				campo[x][y]=PARED;
				aux[x][y]=PARED;
			}else if(x == 39){
				campo[x][y]=PARED;
				aux[x][y]=PARED;
			}else if( y == 0){
				campo[x][y]=PARED;
				aux[x][y]=PARED;
			}else if( y == 39){
				campo[x][y]=PARED;
				aux[x][y]=PARED;
			}else{
				campo[x][y]=VACIO;
				aux[x][y]=VACIO;
			}
		}
	}
}
void bloques(int campo[40][40],int aux[40][40]){
	
	int x,y;
	
	
	
	
	
	
	
	
	
}

void imprimr(int campo[40][40]){
	
	int x,y;
			
 system("cls");	
	for(x=0;x<40;x++){
		printf("\n\t");
		for(y=0;y<40;y++){
			
			if( campo[x][y] == VACIO ){
				printf(" ");
			}else if(campo[x][y] == PARED){
				  printf("%c",178);
			}else if(campo[x][y] == CAMINO){
			      printf("%c",176);
		    }else if(campo[x][y] == JUGADOR){
			      printf("%c",1);
		    }else if(campo[x][y] == FAN_1){
			      printf("%c",42);
		    }
			
			
		}
	}
}


