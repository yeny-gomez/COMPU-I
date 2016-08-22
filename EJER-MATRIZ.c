#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>



void main(){
	
	srand(time(0));
	
	int x,y,matriz[5][5],ban,vec_h[5],vec_v[5];
	
	printf("\nMATRIZ ORIGINAL\n");
	  for( x=0; x<5; x++){
			for( y=0; y<5; y++){
			   
			   printf("%i ",matriz[x][y]=rand()%10);
			   	
			}
			printf("\n");
	  }
	
	printf("\n\n");
	//---------------------------------------------------------------------------------

   ban=0;
	do{
			 ban=0;
	  for( x=0; x<5; x++){
			for( y=0; y<5; y++){
			   
			   //-------------- para diagonal de 135
			   if( matriz[x][y]==matriz[x+1][y+1]){
					matriz[x][y]=rand()%9;
					ban=1;
			   }
			   	if( matriz[x][y]==matriz[x-1][y-1] ){
					matriz[x][y]=rand()%9;
					ban=1;
			   	}
			   	////----------------- para diagonal de 45
			   	
			   if( matriz[x][y]==matriz[x-1][y+1] ){
					matriz[x][y]=rand()%9;
					ban=1;
			   	}   	
			   if( matriz[x][y]==matriz[x+1][y-1] ){
					matriz[x][y]=rand()%9;
					ban=1;
			   	}
			   	//---------------- lados
			   	if( matriz[x][y]==matriz[x][y-1] ){
					matriz[x][y]=rand()%9;
					ban=1;
			   	}
			  	if( matriz[x][y]==matriz[x][y+1] ){
					matriz[x][y]=rand()%9;
					ban=1;
			   	}
			   	//----------------- arriba y abajo
			   	if( matriz[x][y]==matriz[x-1][y] ){
					matriz[x][y]=rand()%9;
					ban=1;
			   	}
			   	if( matriz[x][y]==matriz[x+1][y] ){
					matriz[x][y]=rand()%9;
					ban=1;
			   	}
			}
	  }
	  
	  
	
   }while( ban );
   
		  

	  
	//-------------------------------------------------------------------------
	  
	  for( x=0;x<5;x++){
			vec_h[x]=0;
			vec_v[x]=0;
	  }
	  
	  	  for( x=0; x<5; x++){
			for( y=0; y<5; y++){
	               vec_h[x]=vec_h[x]+matriz[x][y];
			    }
	          }
	
	   for( x=0; x<5; x++){
			for( y=0; y<5; y++){
	               vec_v[x]=vec_v[x]+matriz[y][x];
			    }
	          }
	  
	  //------ matriz suma
	  
	  	printf("\n MATRIZ NO REPETIDA Y SUMA \n");
	  
	  	for( x=0; x<5; x++){
			for( y=0; y<5; y++){
			   printf("%i  ",matriz[x][y]);
			}
		    	printf("  %i ",vec_h[x]);
			printf("\n");
	    }
		printf("\n");
	  for( x=0;x<5;x++){
		printf("%i ",vec_v[x]);
	  }
	
	//-----------matriz modificasion filas
	printf("\nMATRIZ FILAS MAYORES A 30\n");
	  printf("\n\n");
	  	  for( x=0; x<5; x++){
				if( vec_h[x] > 30){
				  for( y=0; y<5; y++){
	                 matriz[x][y]=matriz[x][y]-2;
				    }
				 }
	          }
      
	  
	  for( x=0;x<5;x++){
			vec_h[x]=0;
			vec_v[x]=0;
	  }
	  
	  	  for( x=0; x<5; x++){
			for( y=0; y<5; y++){
	               vec_h[x]=vec_h[x]+matriz[x][y];
			    }
	          }        
	          
	           for( x=0; x<5; x++){
			for( y=0; y<5; y++){
	               vec_v[x]=vec_v[x]+matriz[y][x];
			    }
	          } 
	            
	          	  
	  	for( x=0; x<5; x++){
			for( y=0; y<5; y++){
			   printf("%i  ",matriz[x][y]);
			}
		    	printf("  %i ",vec_h[x]);
			printf("\n");
	    }
		printf("\n");
	  for( x=0;x<5;x++){
		printf("%i ",vec_v[x]);
	  }
	  
	  
      //--------------------------------  suma coloumnas      
	          printf("\nMATRIZ COLUMNAS SUMA MAYOR 25\n");
			  	printf("\n\n");

	        	
				  
	          for( x=0; x<5; x++){
				if( vec_v[x] > 25){
				  for( y=0; y<5; y++){
	                 matriz[y][x]=matriz[y][x]-1;
				    }
				 }
	          }
	          
	    for( x=0;x<5;x++){
			vec_h[x]=0;
			vec_v[x]=0;
	  }
	  
	  	  for( x=0; x<5; x++){
			for( y=0; y<5; y++){
	               vec_h[x]=vec_h[x]+matriz[x][y];
			    }
	          }        
	          
	           for( x=0; x<5; x++){
			for( y=0; y<5; y++){
	               vec_v[x]=vec_v[x]+matriz[y][x];
			    }
	          } 
	          
	          
	          	          	  
	  	for( x=0; x<5; x++){
			for( y=0; y<5; y++){
			   printf("%i  ",matriz[x][y]);
			}
		    	printf("  %i ",vec_h[x]);
			printf("\n");
	    }
		printf("\n");
	  for( x=0;x<5;x++){
		printf("%i ",vec_v[x]);
	  }
	          
	          
	          
	          
	          
	
}
