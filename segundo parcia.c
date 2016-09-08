#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void cargar_matriz(int matriz[20][20],int numero);
int suma_lados(int matriz[20][20],int numero,int vec_h[20],int vec_v[20]);
int esterico_impar(int matriz[20][20],int numero,int cm_2);
int esterico_par(int matriz[20][20],int numero,int cm_2);

int main(){
	
	int numero,matriz[20][20],vec_h[20],vec_v[20],cm,cm_2,impar,par;
	
	do{

	
	do{	
	printf("\n\n\n ");
	 scanf("%i",&numero);
        
        if( numero ==0 ){
        	return 0;
		}
        
	}while(numero < 2 || numero > 1024);

	
	cargar_matriz(matriz,numero);
	cm=suma_lados(matriz,numero,vec_h,vec_v);
	
	   
	   if( cm == 0){
	     	printf("\n\n NO");
         }else{
	   	
	   
	  
	     cm_2=(4*cm)/numero;
	
	
	if( numero % 2 != 0){
		impar=esterico_impar(matriz,numero,cm_2);

		if(impar == 1 ){
			printf("\n\n ESOTERICO");
		}else{
		   	printf("\n\n DIABOLICO");
		}
	}else{
		
		par=esterico_par(matriz,numero,cm_2);
		
			if(par == 1 ){
			printf("\n\n ESOTERICO");
		}else{
		   	printf("\n\n DIABOLICO");
		}
		
	}
	}
	
	}while(1);
	
}


void cargar_matriz(int matriz[20][20],int numero){
	
	int x,y;
	
	
	 for(x=0;x<numero;x++){
	 	for(y=0; y<numero; y++){
	 		do{
	 		   printf("x: %i  y:%i:    ",x+1,y+1);
             scanf("%i",&matriz[x][y]);
	 		 }while((matriz[x][y]) > (pow(numero,2)) || (matriz[x][y]) == 0 );
		 }
	 }
	
}


int suma_lados(int matriz[20][20],int numero,int vec_h[20],int vec_v[20]){
	
	int suma,x,y,cont,ban_1,ban_2,ban_3,diag_1,diag_2;
	

	for(x=0; x<numero; x++){
		suma=0;	
		for(y=0;y<numero;y++){
			suma+=matriz[x][y];
		}
		vec_h[x]=suma;
	}
	
	ban_1=0;
     for( x=0; x<numero-1; x++){
     	for( y=x+1; y<numero;y++){
     		
     		if(vec_h[x] != vec_h[y]){
     			ban_1=1;
			 }
		 }
	 }
	
	for(y=0; y<numero; y++){
		suma=0;	
		for(x=0;x<numero;x++){
			suma+=matriz[x][y];
		}
		vec_v[y]=suma;
	}
	
	
	ban_2=0;
     for( x=0; x<numero-1; x++){
     	for( y=x+1; y<numero;y++){
     		
     		if(vec_v[x] != vec_v[y]){
     			ban_2=1;
			 }
		 }
	 }
	 
	 diag_1=0;
	  diag_2=0;
	for(y=0; y<numero; y++){
	   for(x=0;x<numero;x++){
	   	
	   	 if( (x+y) == numero){
	   	 	 diag_1+=matriz[x][y];
			}
	   	 if( x == y ){
	   		 diag_2+=matriz[x][y];
		   }
		}
	   }
	   
	   
	ban_3=0;
	 if( diag_1 != diag_2){
	 	ban_3=1;
	 }
	 
	
	if( ban_1 == 0 && ban_2 == 0){
	  	if( vec_h[0]==vec_v[0]){
	  		if( ban_3 == 0){
	  			return diag_1;
			  }
		  }
	}else{
		return 0;
	}

	
	
	
}

int esterico_impar(int matriz[20][20],int numero,int cm_2){
	
	
	int x,y,aux_1,aux_2,aux_3,aux_4,suma_es,centro,l_izq,l_der,l_arr,l_aba;
	int suma_l,centro_t;
	
	for(x=0;x<numero;x++){
    	for( y=0; y<numero; y++){
		
		if( x== 0 && y==0){
			aux_1=matriz[x][y];
		}
		if( x== 0 && y==numero-1){
			aux_2=matriz[x][y];
		}
		if( x== numero-1 && y==0){
			aux_3=matriz[x][y];
		}
		if( x== numero-1 && y==numero-1){
			aux_4=matriz[x][y];
		}
		
		if( x == (numero/2) && y== (numero/2)){
			centro=matriz[x][y];
		} 
		
		if( x == (numero/2) && ( y==0 ) ){
			l_izq=matriz[x][y];
		}
		if( x ==(numero/2) && y == numero-1){
			l_der=matriz[x][y];
		}
		
		if( x==0 && y==(numero/2)){
			l_arr=matriz[x][y];
		}
		if( x==(numero-1) && y == (numero/2)){
			l_aba=matriz[x][y];
		}
		
	  }	
	}
	
	suma_es=aux_1+aux_2+aux_3+aux_4;
	suma_l=l_izq+l_der+l_arr+l_aba;
	centro_t=centro*4;
	

	
	 if( suma_es == cm_2 && suma_l == cm_2 && centro_t == cm_2){
	 	return 1;
	 }else{
	 	return 0;
	 }
	
	
}

int esterico_par(int matriz[20][20],int numero,int cm_2){
	
	int x,y,aux_1,aux_2,aux_3,aux_4,suma_es,centro,l_izq,l_der,l_arr,l_aba;
	int suma_l,centro_t;
	
	
	for(x=0;x<numero;x++){
    	for( y=0; y<numero; y++){
		
		if( x== 0 && y==0){
			aux_1=matriz[x][y];
		}
		if( x== 0 && y==numero-1){
			aux_2=matriz[x][y];
		}
		if( x== numero-1 && y==0){
			aux_3=matriz[x][y];
		}
		if( x== numero-1 && y==numero-1){
			aux_4=matriz[x][y];
		}
		
		if( x == (numero/2) && y== (numero/2)){
			centro=matriz[x][y]+matriz[x-1][y]+matriz[x][y-1]+matriz[x-1][y-1];
		} 
		
		if( x == (numero/2) &&  y== 0)  {
			l_izq=matriz[x][y]+matriz[x-1][y];
		}
		if( x ==(numero/2) && y == numero-1){
			l_der=matriz[x-1][y]+matriz[x][y];
		}
		
		if( x==0 && y==(numero/2)){
			l_arr=matriz[x][y]+matriz[x][y-1];
		}
		if( x==(numero-1) && y == (numero/2)){
			l_aba=matriz[x][y]+matriz[x][y-1];
		}
		
	  }	
	}
	
	suma_es=aux_1+aux_2+aux_3+aux_4;
	suma_l=l_izq+l_der+l_arr+l_aba;
	centro_t=centro;

	
	 if( suma_es == cm_2 && suma_l == (cm_2*2) && centro_t == cm_2){
	 	return 1;
	 }else{
	 	return 0;
	 }
	
	
}
