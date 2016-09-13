#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define DER 77
#define IZQ 75
#define DIS 72

void cargar(int matriz[20][30]);
void mover(int matriz[20][30]);
void imprimir(int matriz[20][30]);

void main(){
	
	int matriz[20][30];
	

	
	 cargar(matriz);
	 mover(matriz);
	
}

void cargar(int matriz[20][30]){
	
	int x,y;
		
	  for( x=0; x<20; x++){
	  	for(y=0;y<30;y++){
	  		
	  		if( x == 0 ){
	  			matriz[x][y]=0;
			  }else if( x == 19){
			  	matriz[x][y]=0;
			  }else if( y == 0){
			  	matriz[x][y]=0;
			  }else if( y == 29){
			  	matriz[x][y]=0;
			  }else if( x == 18){
			  	matriz[x][y]=1;
			  }else{
			  	matriz[x][y]=2;
			  }
		  }
	  }
	
}
void imprimir(int matriz[20][30]){
	
	int x,y;
 /* system("cls");
	 for( x=0; x<20; x++){
	 	printf("\t\n");
		 for(y=0;y<30;y++){
		 	
		 	if( matriz[x][y] == 2){
		 	    printf(" ");	
			 }else if(matriz[x][y] == 1){
			 	printf(" ");
			 }else if(matriz[x][y] == 0){
			 	printf("%c",178);
			 }else if(matriz[x][y] == 3){
			 	printf("%c",1);
			 }else if(matriz[x][y] == 2){
			 	printf("%c",167);
			 }
			 
		 }
	 }
	 
	 
*/
 //  system("cls");
	for( x=0; x<20; x++){
	 	printf("\t\n");
		 for(y=0;y<30;y++){
		 	
		 	printf("%i",matriz[x][y]);
		 
			 
		 }
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
}

void mover(int matriz[20][30]){
	
	char tecla,fi,co;
	int aux_x,aux_y,cont,ban;
	
	cont=0;
	fi=18;
	 co=15;
	 ban=0;
	matriz[fi][co]=3;

	imprimir(matriz);
	
	do{
		cont++;
	//	printf("%i-",cont);
		
		if( kbhit()){
			fflush(stdin);
			tecla=getch();	
			tecla=getch();	
		}
			printf("djkfksdj");
		printf("%i",tecla);
		switch(tecla){
		
			case DER:
				
				if( matriz[fi][co+1] == 1){
					matriz[fi][co] = 1;
					matriz[fi][++co] = 3;
				}
				
				break;
			
			case IZQ:
				
				if( matriz[fi][co-1] == 1){
					matriz[fi][co] = 1;
					matriz[fi][--co] = 3;
				}
				
				break;
				
			case DIS:
				
				//  cuatro disparar
				 aux_x=fi;
				  aux_y=co;
				  ban=1;
				
				
				break;
		}
		
	
		
		 if( cont % 2 == 0){
		 	
		 	if(ban){
		 	
		 	     if(matriz[aux_x-1][aux_y]==2){
		 	     	
		      	     matriz[--aux_x][aux_y]=4;
			        
			       }else{
			       	  matriz[aux_x][aux_y]=2;
			       	  
			    	ban=0;
			    	
			       }
			 
		      	} 
			
			cont=0;
		 }
		
		
		
		Sleep(100);
		imprimir(matriz);
		system("pause");
		
	}while(1);
	
	
	
}
