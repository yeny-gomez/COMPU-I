#include<stdio.h>
#include<conio.h>
#include<time.h>
#define T 30



void main (){
	
	
	
	int x,vec[20],n,par=0,positivo=0,negativo=0,mayor=-99999,menor=9999;
	
	
	do{	
		printf("\n\nIngrese los numeros");
		  scanf("%i",&n);
		
	}while( n<5 && n< T);
	
	
	
	
	for( x=0; x<n;x++){
		
		
	//	scanf("%i",&vec[x]);
	
	  vec[x]= rand () % 100+100;
	  printf("\n\nvec[%i]: %i",x, vec[x]);
	
	}
	

	for( x=0; x<n; x++){
		
		if( vec[x] % 2 == 0){
			par++;
		}
	
		if( vec[x] > 0){
			positivo++;
		}
	
		if( vec[x] < 0){
			negativo++;
		}
	
		if( vec[x] > mayor){
			mayor=vec[x];
		}
	
		if( vec[x] < menor){
			menor=vec[x];
		}
	}
	   
		printf("\n\nPar: %i",par);
		printf("\n\nPositivos: %i",positivo);
	    printf("\n\nnegativos: %i",negativo);
	   	printf("\n\nmayor: %i",mayor);
	   	printf("\n\nmenor: %i",menor);
	    
}
