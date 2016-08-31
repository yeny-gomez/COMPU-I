#include<stdio.h>
#include<conio.h>
#include<time.h>




void main(){
	
	
	int vec_a[30],vec_b[30],vec_c[30],m_1[15][15],m_2[15][15],x,y,par,impar,aux_a[30],vec_d[60],aux,vec_a_copia[30];
	int vec_e[30],z,vec_f[30],vec_g[30],m_3[15][15],cont_1,cont_2,cont_3,numero,mod,div;
	
	int matriz[7][7],matriz_b[7][7],w,matriz_c[7][7],matriz_g[10][10],m,n;
	float p_imp,p_par;
	char a,tecla;

	
	srand(time(0));
	
	//------------------------------------  1)
	printf("\n\n NUMERO ALEATORIOS VEC A");
	 printf("\n\n");
	   for( x=0;x<30;x++){
			vec_a[x]=rand()%900+100;
	   }
	    for( x=0;x<30;x++){
			printf("%i ",vec_a[x]);
	   }
	//-------------------------------------  2)

       printf("\n\n NUMERO ALEATORIOS PARES VEC B");
       printf("\n\n");
       
	  for( x=0;x<30;x++){
			do{
				par=rand()%900+100;
			}while( (par%2) != 0 );
			
			vec_b[x]=par;
	   }
	  for( x=0;x<30;x++){
			printf("%i ",vec_b[x]);
	   }
	
	//------------------------------------ 3)
	   printf("\n\n NUMERO ALEATORIOS IMPARES VEC C");
       printf("\n\n");
	
	for( x=0;x<30;x++){
		do{
			impar=rand()%900+100;
		}while( impar%2 == 0);
		vec_c[x]=impar;
	}
	
	 for( x=0;x<30;x++){
			printf("%i ",vec_c[x]);
	   }
	
	///-------------------------------------    4)
	 printf("\n\n MATRIZ ALEATORIA de 100-999");
	   printf("\n\n");
	   
	for( x=0;x<15;x++){
		for(y=0;y<15;y++){
			m_1[x][y]=rand()%900+100;
		}
	}
		for( x=0;x<15;x++){
		    for(y=0;y<15;y++){
			printf("%i ",m_1[x][y]);
		      }
		      printf("\n");
	     }
	
	//----------------------------------------   5)
	
		 printf("\n\n MATRIZ ALEATORIA 1000-9999");
	      printf("\n\n");
	   
	for( x=0;x<15;x++){
		for(y=0;y<15;y++){
			m_2[x][y]=rand()%9000+1000;
		}
	}
		for( x=0;x<15;x++){
		    for(y=0;y<15;y++){
			printf("%i ",m_2[x][y]);
		      }
		      printf("\n");
	     }
	
	//------------------------------------------- 6)
	
	 printf("\n\n VEC A-B-C EN COLUMNAS");
	   printf("\n\n");
	
	
	 for( x=0;x<30;x++){
			printf("%i ",vec_a[x]);
				printf("%i ",vec_b[x]);
					printf("%i ",vec_c[x]);
					printf("\n");
	   }
	
	//------------------------------------------ 8)
		 printf("\n\n VEC-A VEC-A(alrevez)  EN COLUMNAS");
	          printf("\n\n");
	y=0;
	for( x=29; x >= 0; x-- ){
		aux_a[y++]=vec_a[x];
	}
	
	  for( x=0;x<30;x++){
			printf("%i ",vec_a[x]);
			   printf("%i",aux_a[x]);
			   printf("\n");
	   }
	
	//------------------------------------------ 9)//------  NO AGARRA EL MAS 2
	
	 printf("\n\nVEC-D CON VEC-B Y VEC-C");
	          printf("\n\n");
	
	  y=0;
	   for( x=0;x<30;x++){
			 vec_d[y++] = vec_b[x];
			 vec_d[y++] = vec_c[x];
	   }
	 
	y=0;
	 for( x=0 ;x<60 ;x++ ){
		printf(" *%i* %i",x+1,vec_d[x]);
		y++;
		if( y == 10){
			system("pause");
			printf("\n\n");
			y=0;
		}
	   }
	//---------------------------------------------- 10)
	
	printf("\n\nVEC-A ORDENA Y DESORDENADO");
	          printf("\n\n");
	          
		for(x=0;x<30;x++){
		  vec_a_copia[x]=vec_a[x];
		}
		
	   for( x=0;x<29;x++){
		 for(y=x+1;y<30;y++){
				
		 if( vec_a_copia[x] > vec_a_copia[y]){
				 aux=vec_a_copia[x];
				vec_a_copia[x]=vec_a_copia[y];
				vec_a_copia[y]= aux;
				
		     }
	      }
	   }
		
		for(x=0;x<30;x++){
	       	printf(" %i ",vec_a[x]);
			   printf("%i ",vec_a_copia[x]);
			   printf("\n");
		}
		
	//-------------------------------------------- 11)
		printf("\n\nVEC-E CON 15 ULT DE 'B' Y 15 PRIM 'A'");
	          printf("\n\n");
	y=15;
	z=0;
	for(x=0;x<30;x++){
		
		if( x <= 14 ){
			vec_e[x]=vec_b[y++];
		}
		if( x > 14){
		vec_e[x]=vec_c[z++];
		}
	}
	
	   for(x=0;x<30;x++){
	     printf("%i ",vec_e[x]);
	         printf("\n");
		}
	//-------------------------------------------- 12)
	
    	printf("\n\n PARES DEL VEC DE 'A'");
	          printf("\n\n");
	   y=0;
	    for( x=0; x<30; x++){
		   if( (vec_a[x]%2) == 0){
				
		      vec_f[y++]=vec_a[x]; 	  
				
		   }			
	    }
	
	      for( x=0; x<y; x++){
	 	  printf("%i",vec_f[x]);
			printf("\n");
	    }
	
	//----------------------------------------- 13)
	
	printf("\n\n CONCATENAR VEC-B Y VEC-C");
	          printf("\n\n");
	          
	      for( x=0; x<30; x++ ){
				vec_g[x]=(vec_b[x]*1000)+vec_c[x];	
	      } 
	          
	           for( x=0; x<30; x++ ){
				printf("%i ",vec_g[x]);
				  printf("\n");
	                }   
	//------------------------------------------ 14)
	      
	   	printf("\n\n MATRIZ TRANSPUESTA ");
	        printf("\n\n");    
	 
	 	printf("\n\n matriz origina\n\n"); 
	  for(x=0;x<15;x++){
		for(y=0;y<15;y++){
		  m_3[x][y]=m_1[y][x];
		}	
	  }
	       
        for(x=0;x<15;x++){
		   for(y=0;y<15;y++){
		  printf("%i ",m_1[x][y]);
	     	}	
	     	printf("\n");
	      } 
		      printf("\n\n");
	    printf("\n\n matriz transpuesta\n\n");
		 for(x=0;x<15;x++){
		   for(y=0;y<15;y++){
		  printf("%i ",m_3[x][y]);
	     	}	
	     	printf("\n");
	      }          
	          
	  //--------------------------------------  15)
	  
	  	printf("\n\n PORCENTAJE DE PARES E IMPARES DE matriz-2 ");
	        printf("\n\n");    
	  cont_1=0;
	   cont_2=0;
	    cont_3=0;
	  for( x=0;x<15;x++ ){
		for( y=0;y<15;y++ ){
		
		  if( (m_2[x][y]%2) == 0){
			cont_1++;		
		    }
		   
		   if( (m_2[x][y]%3) == 0){
				cont_2++;
		   }
				
				 cont_3++;
		     
		   }	   
	  }
	  
	  p_imp=(100*cont_2)/cont_3;
	  p_par=(100*cont_1)/cont_3;
	  
	     printf(" Porcentaje de pares %.2f \n\n",p_par);     
	      printf(" Porcentaje de impares %.2f\n\n",p_imp);
	//----------------------------------   16) 42
	
		printf("\n\n CAMBIAR LOS NUMERO PARES DE LA MATRIZ 1 EN ***");
	        printf("\n\n"); 
	        
		  for( x=0;x<15;x++ ){
		    for( y=0;y<15;y++ ){
		
		       if( (m_1[x][y] % 2) == 0 ){
				   a=42;
				   printf(" %c%c%c ",a,a,a);
				 }
                if( (m_1[x][y] % 2) != 0 ){
					
					printf(" %i ",m_1[x][y]);
                }
		     
		   }	   
		   printf("\n\n");
	  }
	  
	  //-------------------------   17)

	printf("\n\nDIAGONAL PRINCIPAL CON 'A'");
	printf("\n\nDIAGONAL SECUNDARIA CON 'B'");
	printf("\n\nINTERSECCION CON 'W'");
	        printf("\n\n");
     z=14;
		  for( x=0;x<15;x++ ){
			  m_2[x][x]=65;
		     
		      m_2[x][z--]=66;	
		}
               m_2[7][7]=87;

          for( x=0;x<15;x++ ){
				for(y=0;y<15;y++){
				
				if(m_2[x][y] == 65){
					printf("%c%c%c ",65,65,65);
				}else if(m_2[x][y] == 66){
					printf("%c%c%c ",66,66,66);
				}else if(m_2[x][y] == 87){
					printf("%c%c%c ",87,87,87);
				}else{
					printf("%i ",m_2[x][y]);
				}
		     
		  }  
		  printf("\n\n");
         }

	//-------------------------------18)
	
    
    
    
    
    
    
    //---------------------------------  ejercico matriz
	numero=0;
		printf("\n\nMATRIZ CON N IMPAR");
	        printf("\n\n");
/*	do{	
	    printf(" Ingrese un numero impar");
	     scanf("%i",&numero);
	
	}while( (numero %2) == 0);
*/

                          //------------------ a)
     for(x=0;x<7;x++){
			for(y=0;y<7;y++){	
				matriz[x][y]=rand()%1000;
			}
     }

    
           for(x=0;x<7;x++){		
		    	for(y=0;y<7;y++){
				
				div=matriz[x][y];
			      cont_1=0;	
			      
				  do{
					div=div/10;	
						cont_1++;
				    }while( div != 0);
				
				
				  if( cont_1 == 1){
				   printf("00%i ",matriz[x][y]);
				   }
				   
				  if( cont_1 == 2){
				   printf("%c%i ",48,matriz[x][y]);
				   }
				   
				  if( cont_1 == 3){
				   printf("%i ",matriz[x][y]);
				   }
				 
				
			       }
			       printf("\n");
            }

                //------------------ b)
                  printf("\n");  printf("\n");

    //--------cambiar A POR D
    
    	printf("\n\nMATRIZ CAMBIANDO LAS CUATRO ESQUINAS");
	        printf("\n\n");
    
    w=0;
     x=4;
      do{
			y=0;
			 z=4;
			do{
				
				matriz_b[w][y]=matriz[x][z];
				
				z++;
				 y++;
			}while( y!= 3);
			w++;
			 x++;
	  }while( w != 3 );
    
      //--------cambiar D POR A
    
	w=4;
     x=0;
     
       do{
	    	y=4;
			 z=0;
			do{
				
				matriz_b[w][y]=matriz[x][z];
				
				z++;
				 y++;
			}while( z != 3);
			w++;
			x++;
	  }while( x != 3 );
    
    //----------------------
    w=0;
     x=4;
        do{
	    	y=4;
			 z=0;
			do{
				
				matriz_b[w][y]=matriz[x][z];
				
				z++;
				 y++;
			}while( z != 3);
			 w++;
			x++;
	  }while( w != 3 );
    
	//-------------------------   
    w=4;
     x=0;
        do{
	    	y=0;
			 z=4;
			do{
				
				matriz_b[w][y]=matriz[x][z];
				
				z++;
				 y++;
			}while( y != 3);
			 w++;
			x++;
	  }while( x != 3 );


    for( x=0; x<7;x++){
		for( y=0;y<7;y++){
			
			if( x == 3 ){
			 matriz_b[x][y]=42;
			 printf("%c%c%c ",42,42,42);
			}else if( y == 3 ){
			 matriz_b[x][y]=42;
			 printf("%c%c%c ",42,42,42);
			}else{
			printf("%i ",matriz_b[x][y]);
			}
			
		}
		printf("\n");
    }
    
    //---------------------------- c)
    	printf("\n\nMATRIZ-C CAMBIANDO PARES POR ***");
	        printf("\n\n");

    
        for(x=0;x<7;x++){
			for(y=0;y<7;y++){	
				
				if((matriz[x][y] % 2) == 0 ){
					matriz_c[x][y]=42;
					printf("%c%c%c ",42,42,42);
				}else{
					matriz_c[x][y]=matriz[x][y];
					printf("%i ",matriz_c[x][y]);
				}
				
			}
			 printf("\n");
          }
    
	
}






