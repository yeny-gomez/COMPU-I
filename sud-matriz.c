#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<windows.h>

void cargar( int matriz_g[10][10],int m,int n);
void creal_sudmatriz(int matriz_g[10][10],int m,int n);
int mover_sudmatriz(int matriz_g[10][10],int m,int n);
void imprimir_a(int matriz_g[10][10]);
    
void main (){
	   
	
	int matriz_g[10][10],m,n;
	
	
	 cargar( matriz_g,m,n);
	
	
    }
    
    
void cargar( int matriz_g[10][10],int m,int n){
	
	int x,y;
	  char tecla;
	  
    for( x=0; x<10; x++){
		for( y=0; y<10; y++){
			matriz_g[x][y]=0;
		}
    }
    
    m=1;//---------------- en esta parte no importa que modifique  m y n porque cuando empieze el codigo se incian en 1
     n=1;
  matriz_g[m][n]=1;
	imprimir_a(matriz_g);
	
    do{
		
	    fflush(stdin);
          tecla=getch();

		 switch (tecla){
		
		 case 72:{//arriba
				if( m > 1  ){
			
				  matriz_g[m][n]=0;
		    		matriz_g[--m][n]=1;
		    	    	
						imprimir_a(matriz_g);
						
                        fflush(stdin);
                         tecla=getch();
                 
					if( ( tecla ) == 13){	
					     creal_sudmatriz(matriz_g,m,n);
					     	imprimir_a(matriz_g);
					     mover_sudmatriz(matriz_g,m,n);
					}    
				 }
		 	break;
		 }
		
		 case 80:{//abajo
				if( m < 8  ){
					matriz_g[m][n]=0;
					matriz_g[++m][n]=1;
			      
			      imprimir_a(matriz_g);
			      
			        fflush(stdin);
                      tecla=getch();
			
			    	if( ( tecla ) == 13){
					  creal_sudmatriz(matriz_g,m,n);
					  	imprimir_a(matriz_g);		
					  mover_sudmatriz(matriz_g,m,n);
					}
					
					}
		 	break;
		 }
		 
		 case 77:{
				if( n < 8){//dere
					matriz_g[m][n]=0;
					matriz_g[m][++n]=1;
				
				
				imprimir_a(matriz_g);
				
				 fflush(stdin);
                    tecla=getch();
			     
			   	if( ( tecla ) == 13){
					  creal_sudmatriz(matriz_g,m,n);
					  	imprimir_a(matriz_g);	
					  mover_sudmatriz(matriz_g,m,n);		
				  }
				
				}
		 	break;
		 }
		
		 case 75:{			
				if( n > 1){//izq
					matriz_g[m][n]=0;
					matriz_g[m][--n]=1;
					
				
                   imprimir_a(matriz_g);				
				
				 fflush(stdin);
                    tecla=getch();
			     
			  	if( ( tecla ) == 13){
				  creal_sudmatriz(matriz_g,m,n);
				  	imprimir_a(matriz_g);			
				  mover_sudmatriz(matriz_g,m,n);
				 }
				
				}
		 	break;
		 }
	
			
		
		}

		
	}while( 1 );
	
}



void imprimir_a(int matriz_g[10][10]){
	
	 int x,y;
	 
	 system("cls");
	   for( x=0; x<10; x++){
			   printf("\n\t");
		      for( y=0; y<10; y++){
					
					if( matriz_g[x][y] == 42 ){
						 printf("%c ",matriz_g[x][y]);
					}else if( matriz_g[x][y] == 32){
						printf("%c ",matriz_g[x][y]);
					}else{
						printf("%i ",matriz_g[x][y]);
					}
					
			  
		         }
		      
              }
        
		
             
}


void creal_sudmatriz(int matriz_g[10][10],int m,int n){
	
	int x,y;
	//-------------- nueva posicion
	      matriz_g[m][n]=42;			
			matriz_g[m+1][n]=32;
    	      matriz_g[m-1][n]=32;
				matriz_g[m][n+1]=32;
				   matriz_g[m][n-1]=32;
					 matriz_g[m+1][n+1]=32;
					   matriz_g[m+1][n-1]=32;
					     matriz_g[m-1][n+1]=32;
					       matriz_g[m-1][n-1]=32;
					       
		//---------------- reacomodar la posicion(huella)
		
		
		    matriz_g[m+2][n]=0;
    	      matriz_g[m-2][n]=0;
				matriz_g[m][n+2]=0;
				   matriz_g[m][n-2]=0;
					 matriz_g[m+2][n+1]=0;
					   matriz_g[m+2][n-1]=0;
					     matriz_g[m-2][n+1]=0;
					       matriz_g[m-2][n-1]=0;
					        matriz_g[m+1][n+2]=0;
					         matriz_g[m+1][n-2]=0;
					          matriz_g[m-1][n+2]=0;
					            matriz_g[m-1][n-2]=0;
	
}

int mover_sudmatriz(int matriz_g[10][10],int m,int n){
	
	char tecla_1;
	
   do{

	     fflush(stdin);
	 
		 tecla_1=getch();	  
		   tecla_1=getch();
	 
	   
    switch(tecla_1){

	 case 72:{//arriba

				if( m > 1  ){
					--m;
					matriz_g[m][n]=2;
			        creal_sudmatriz(matriz_g,m,n);	 
			        imprimir_a(matriz_g);

					}
		 	break;
		 }
		
		 case 80:{//abajo
				if( m < 8  ){
				   ++m;	
				   	matriz_g[m][n]=2;
				 creal_sudmatriz(matriz_g,m,n);
			     imprimir_a(matriz_g);
	
					}
		 	break;
		 }
		
		 case 77:{
				if( n < 8){//dere
			       ++n;
			         matriz_g[m][n]=2;
			        creal_sudmatriz(matriz_g,m,n);
			       imprimir_a(matriz_g);

				}
		 	break;
		 }
		
		 case 75:{			
				if( n > 1){//izq
				     --n;
				    matriz_g[m][n]=2;
			        creal_sudmatriz(matriz_g,m,n);
			       imprimir_a(matriz_g);
					
				}
				
		 	break;
		 }
		case 13:{
			
			 cargar(matriz_g,m,n);
			
			break;
		}
	}
	
	 
	 	}while(1);
	
}



