#include<conio.h>
#include<stdio.h>
#include<string.h>


void main(){
	
	int fi,co,x,y,vec_horas[50],matriz[x][y],suma_g,vec_d[50],vec_l[50],menor=999999,mayor=-999999,cont,a,suma;
	char vec_lugares[50][10],aux[10];
	
	printf("\nCENTRO METEOROLOGIA");
	
	  printf("\nIngres cuantos lugares hay: ");
	    scanf("%i",&fi);
      printf("\nIngres cuantas horas se calcularon: ");
	    scanf("%i",&co);
	
	 for(y=0;y<co;y++){
	  	printf("\n Ingrese la horas: ");
		  	  scanf("%i",vec_horas[y]);
	  }
	
	  for(x=0;x<fi;x++){
			printf("\n Ingrese el lugar: ");
			 scanf("%s",vec_lugares[x]);
	  	  
		for(y=0;y<co;y++){
			printf("\n Ingrese la presion: ");
			   scanf("%i",matriz[x][y]);
			
		}	
	  }
	
	//--------------------------------------- b)
		printf("\n PRESION DEL 3er LUGAR 5to DIA");
	
		  for(x=0;x<fi;x++){
		    for(y=0;y<co;y++){
		    
              if( x == 2){
					if( y == 4){
						printf("\n %i ",matriz[x][y]);
					}
              }
	      }	
	  }
	//----------------------------------------- c)
	

	suma_g=0;
	  cont=0;
	
	for( x=0;x<fi;x++){
		for( y=0;y<co;y++){
			suma_g=suma_g+matriz[x][y];
			cont++;
		}
	}
	
	printf("\n EL PROMEDIO GENERAL DEL ESTADO : %i", suma/cont);
	
	//--------------------------------------------d)
	printf("\n PROMEDIO POR DIA");
	
	for( y=0; y<co;y++){
		vec_d[y]=0;
	}
	
	for(y=0;y<co;y++){
		for(x=0;x<fi;x++){
			vec_d[y]=vec_d[y]+matriz[x][y];
		}
	}
	
	    for(y=0;y<co;y++){
	    	printf("\n hora %i con promedio: %i",vec_horas[y],(vec_d[y])/fi);	
         	}
	
	//------------------------------------------------- e)
	
		printf("\n PROMEDIO DE LA PRESION POR LUGAR");
	
    for( x=0; x<fi;x++){
		vec_l[x]=0;
	}
	
		for(x=0;x<fi;x++){
		   for(y=0;y<co;y++){
			vec_l[x]=vec_l[x]+matriz[x][y];
		    }
	  }
	
	for(x=0;x<fi;x++){
		printf("\n Lugar %s con promedio %i ",vec_lugares[x],(vec_l[x]/co));
	}
	//------------------------------------------------ f)
	
	  printf("\n Ingrese Santa Ana para buscarla en el registro: ");
	   scanf("%s",aux);

	
	    for(x=0;x<fi;x++){
	         
			 if( strcomp(aux,vec_lugares[x]) == 0){
					
				for(y=0;y<co;y++){
					
					if( matriz[x][y] < menor)
					menor=matriz[x][y];
				}
					
	         }	
      	}
	printf("\n La menor presion de Santa Ana: %i",menor);

	
	//------------------------------------------  g)
	
	
	
	   for(x=0;x<fi;x++){
	    	for(y=0;y<co;y++){
					
				  if( matriz[x][y] > mayor){
						mayor=matriz[x][y];
						a=x;
				  }
    		}       
      	}
      	
  	
	     printf("\n\n  El lugar donde se registro la mayor presion: %i",vec_lugares[a]);
	
}
