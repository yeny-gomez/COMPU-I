#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define F 10
#define C 10
int main(int argc, char *argv[]) {
	
	int mat[F][C],x,y,fil, col,cont,par=0,positivo=0,negativo=0,mayor=-99999,menor=9999;
	
	srand(time(0));
	
	for(x=0;x<F;x++){
		for(y=0;y<C;y++){
	
		mat[x][y]=rand()%100 + 100;
       }
    }
	
	for(x=0;x<F;x++){
		printf("\n");
		for(y=0;y<C;y++){
			printf(" %d ",mat[x][y]);	

       }
    }
    
    	for(x=0;x<F;x++){
		for(y=0;y<C;y++){

    
        if( mat[x][y] % 2 == 0 ){
          par++;
	}
	    if(mat[x][y] > 0){
		positivo++;
	}
    	if(mat[x][y] < 0){
		negativo++;
	}
		if(mat[x][y] > mayor){
		 mayor=mat[x][y];
	}
		if(mat[x][y] < menor){
		 menor=mat[x][y];
	}
    		

       }
    }
    	printf("\n\nPar: %i",par);
		printf("\n\nPositivos: %i",positivo);
	    printf("\n\nnegativos: %i",negativo);
	   	printf("\n\nmayor: %i",mayor);
	   	printf("\n\nmenor: %i",menor);
	   	
	   	
    
    
    printf("\n\n\t");
	system("PAUSE");
	//--------------------------------------------------------------------------
//	system("CLS");//-----numeros consecutivos
	system("pause");
	do{
		printf("\n Numero de filas [3 - %d]: ",F);
		scanf("%d",&fil);
	}while(fil<3 || fil>F);	
	
	do{
		printf("\n Numero de columnas [3 - %d]: ",C);
		scanf("%d",&col);
	}while(col<3 || col>F);
	
    cont=100;
    
	for(x=0;x<fil;x++){
		for(y=0;y<col;y++){
			mat[x][y]=cont;
			cont++;
       }
    }
	
	for(x=0;x<fil;x++){
		printf("\n");
		for(y=0;y<col;y++){
			printf(" %d ",mat[x][y]);	
       }
    }
    printf("\n\n\t");
    system("pause");
	system("PAUSE");
    //------------------------------------------
  //  system("CLS");
	
	do{
		printf("\n Numero de filas [3 - %d]: ",F);
		scanf("%d",&fil);
	}while(fil<3 || fil>F);	
	
	do{
		printf("\n Numero de columnas [3 - %d]: ",C);
		scanf("%d",&col);
	}while(col<3 || col>F);
    cont=100;
	for(x=0;x<col;x++){
		for(y=0;y<fil;y++){
			mat[y][x]=cont;
			cont++;
       }
    }
	
	for(x=0;x<fil;x++){
		printf("\n");
		for(y=0;y<col;y++){
			printf(" %d ",mat[x][y]);	
       }
    }
    printf("\n\n\t");
	system("PAUSE");
	return 0;
}

