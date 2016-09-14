#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define J -1
#define K -2
#define ROBOD -3
#define PUERTA -4

void imprimir(int matriz[25][30]);
int recorrido(int matriz[25][30], char vec_1[50],int r_x,int r_y,int p_x,int aux_x,int aux_y);


void main(){
	
	int matriz[25][30]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0},
						{0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	
	};
	
	srand(time(0));
	
	int  j_x,j_y,k_x,k_y,p_x,z,x,y,buscar,r_x,r_y;
	char vec[100],vec_1[50],material,tecla;
     int  aux_x,aux_y;
	
	
	  j_x=rand()%9+3;
	  j_y=rand()%16+10;
	  k_x=rand()%2+14;
	  k_y=rand()%16+10;
	  
	  
	  p_x=rand()%18+3;
	  
	  r_x=rand()%18+3;
	  r_y=rand()%4;
	  
	  
	  matriz[j_x][j_y]=J;
	  matriz[k_x][k_y]=K;
	  matriz[p_x][4]=PUERTA;
	  matriz[r_x][r_y]=ROBOD;
	  
	  
	imprimir(matriz);


	 
    do{
       printf("\n\n Cuando el codigo este listo presione enter");
		printf("\n\n INSTRUCCION: ");
	    fflush(stdin);
	      gets(vec);	

	  	
	}while( strlen(vec) > 100 );
	
	 printf("\n\n Ingrese el material secreto: ");
	   scanf("%c",&material);
	   
	   if( material == 'j'){
	   	 
	   	 aux_x=j_x;
	   	 aux_y=j_y;
	   	
	   }
	   
	   if( material == 'k'){
	   	 
	   	aux_x=k_x;
	   	aux_y=k_y;
	   	
	   }
	   
	   
	   
	
	z=0;
	for( x=0; x<strlen(vec);x++){
		
		    if( vec[x] == 'a'){
			vec_1[z++]=vec[x];
		}
			if( vec[x] == 's'){
			vec_1[z++]=vec[x];
		}
			if( vec[x] == 'w'){
			vec_1[z++]=vec[x];
		}
			if( vec[x] == 'd'){
			vec_1[z++]=vec[x];
		}
	}
	
		
    printf("\n\n Para empezar el recorrido presionar 'r' \n\n ");
	
	 fflush(stdin);
	 tecla=getch();
	 
	 	system("pause");
	 	
	 	printf("\n\n\n");
	 
	 if( tecla == 'r'){
	 	
      	 recorrido(matriz,vec_1,r_x,r_y,p_x,aux_x,aux_y);
	 	
	 }
	 
	 
	  
}

int recorrido(int matriz[25][30], char vec_1[50],int r_x,int r_y,int p_x,int aux_x, int aux_y){
	
	
	int x,ban=0,cont=3,val;
	
	  
	
		for( x=0;x<(strlen(vec_1));x++){
			
	 		switch(vec_1[x]){
	 			
	 			
	 			case 'a':
	 				
	 		          if( matriz[r_x][r_y-1] == 0 || (r_x == p_x && r_y-1 == 4)){
	 		          	 matriz[r_x][r_y] = cont++;
	 		          	  matriz[r_x][--r_y] = ROBOD;
					   }else{
					   	printf("\n\n El robod fue atrapado");
					   	return 0;
					   	ban=1;
					   }
	 					
	 				break;
	 			
	 			case 's':
	 				
	 				 if( matriz[r_x+1][r_y] == 0 || (r_x+1 == p_x && r_y == 4)){
	 		          	 matriz[r_x][r_y] = cont++;
	 		          	  matriz[++r_x][r_y] = ROBOD;
					   }else{
					   	printf("\n\n El robod fue atrapado");
					   		return 0;
					   	ban=1;
					   }
	 				
	 				break;
	 			
	 			case 'w':
	 				
	 				 if( matriz[r_x-1][r_y] == 0 || (r_x-1 == p_x && r_y == 4)){
	 		          	 matriz[r_x][r_y] = cont++;
	 		          	  matriz[--r_x][r_y] = ROBOD;
					   }else{
					   	printf("\n\n El robod fue atrapado");
					   		return 0;
					   	ban=1;
					   }
	 				
	 				break;
	 			
	             case 'd':
	 				
	 				 if( matriz[r_x][r_y+1] == 0 || (r_x == p_x && r_y+1 == 4)){
	 		          	 matriz[r_x][r_y] = cont++;
	 		          	  matriz[r_x][++r_y] = ROBOD;
					   }else{
					   	printf("\n\n El robod fue atrapado");
					   		return 0;
					   	ban=1;
					   }
	 				
	 				break;	 						
	 			
			 }
	 		
	 		
	 		if(ban){
	 			break;
			 }
			 		
	  	imprimir(matriz);
	 		Sleep(1000);
		 }
		 
		 
		 int w,s;
		 
	 if( r_x == aux_x && r_y == aux_y){
		 	
		for(x=cont; x>=0; x--){
			
			system("cls");
			
			for(w=0;w<25;w++){
				for(s=0;s<30;s++){
					
					if(matriz[w][s] == 0){
						printf("a");
					}else if(matriz[w][s] == 1){
						printf("%c",178);
					}else if(matriz[w][s] == J){
						printf("J");
					}else if(matriz[w][s] == K){
						printf("K");
					}else if(matriz[w][s] == PUERTA){
						printf("%c",2);
					}else if(matriz[w][s] == cont){
						printf("%c",1);
					}else{
						printf("a");
					}
					
					
					
				}
			}
			
			system("pasuse");
			
		   }
		 	
		 	
	 }else{
	 		printf("\n\n El robod fue atrapado");
	 }
		 

	
}

void imprimir(int matriz[25][30]){
	
	int x,y;
	
	system("cls");

printf("\n\n\n");

	for(x=0;x<25;x++){
		printf("\n");
		for(y=0;y<30;y++){		
					if(matriz[x][y] == 0){
						printf("a");
					}else if(matriz[x][y] == 1){
						printf("%c",178);
					}else if(matriz[x][y] == J){
						printf("J");
					}else if(matriz[x][y] == K){
						printf("K");
					}else if(matriz[x][y] == ROBOD){
						printf("%c",1);
					}else if(matriz[x][y] == PUERTA){
						printf("%c",2);
				   }else{
				   	   printf("a");
				   }
				}
			}
}








