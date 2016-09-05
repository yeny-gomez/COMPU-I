#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>





void main(){
	
	
	int vec_a[100],vec_b[100],elementos_a,elementos_b,x,y,vec_c[200],z,numero,vec_aux[100],cont_a,cont_b,suma_a,suma_b,impares_b,sumatoria_pares_a;
	int mayor,resta,valor,ban,cont,primo[50],no_primo[50];
	srand(time(0));
	
	
	//--------------------- 1)
	
	do{		
	printf("\n\n Ingrese el numero de elementos del vector A: ");
	 scanf("%i",&elementos_a);	
    }while( elementos_a < 5 || elementos_a > 100 );	
	
    do{
	      printf("\n\n Ingrese el numero de elementos del vector B: ");
	     scanf("%i",&elementos_b);
   }while( elementos_b < 10 || elementos_b > 100 );	
	
		//--------------------- 2)

	
	for( x=0; x<elementos_a; x++){	
		vec_a[x]=rand()%400+100;
		printf("%i ",vec_a[x]);
	}
printf("\n\n");
	for( x=0; x<elementos_b; x++){	
		vec_b[x]=rand()%500+300;
			printf("%i ",vec_b[x]);
	}

		//----------- 3)
		
		if( elementos_a > elementos_b){
			mayor=elementos_a;
			resta=elementos_a-elementos_b;
			valor=elementos_a-resta;
			
			ban=1;
		}else{
		    mayor=elementos_b;
			resta=elementos_b-elementos_a;
			valor=elementos_b-resta;
			
			ban=0;
		}
		
		
		printf("\n\n\tVECTOR-A  VECTOR-B");
		for( x=0; x<valor;x++){
			
			printf("\n\t");
		printf("%i",vec_a[x]);
			printf("  ");
		printf("%i",vec_b[x]);
		
		 if( (x+1) % 10 == 0){
	      	printf("\n\n");
	      	system("pause");	
		  }
		
		}

	if(ban){
            	for( x=valor; x<mayor;x++){
			        printf("\n\t");
		          printf("%i",vec_a[x]);
		         
		           if( (x+1) % 10 == 0){
	             	printf("\n\n");
	      	         system("pause");	
		             }   
	         	}	
	}else{
			for( x=valor; x<mayor;x++){
				
			   printf("\n\t     ");
		          printf("%i",vec_b[x]);
		          	          
		          if( (x+1) % 10 == 0){
	             	printf("\n\n");
	      	         system("pause");	
		             }		             
			   
	         	}
	}	
	
		//----------- 4)
   z=0;
   sumatoria_pares_a=0;
	for( x=0; x<elementos_a; x++){	
		if( vec_a[x] % 2 == 0){
			vec_c[z++]=vec_a[x];
			sumatoria_pares_a+=vec_a[x];//------ lo tomo para la pregunta 6)
			
		}
	}
     
     vec_c[z++]=99;
     
     impares_b=0;
	for( x=0; x<elementos_b; x++){	
			if( vec_b[x] % 2 != 0){
			vec_c[z++]=vec_b[x];
			impares_b++;//------lo tomo para la pregunta 6)
		}
	}
	
	printf("\n\n   VECTOR C");
		for( x=0; x<z; x++){	
	      printf("\n\n%i",vec_c[x]);
	      if( (x+1) % 10 == 0){
	      	printf("\n\n");
	      	system("pause");
		  }
     	}

		//--------------------5)
	
		printf("\n\n\n Ingresar numero para buscar: ");
		 scanf("%i",&numero);
	
	 cont_a=0;
		for( x=0; x<elementos_a; x++){	
		    if( numero == vec_a[x]){
		    	cont_a++;
			}
	      }
	      
	cont_b=0;
	    for( x=0; x<elementos_b; x++){	
		  if( numero == vec_b[x]){
		    	cont_b++;
			 }
	      }
	
	if( cont_a == 0){
		printf("\n\n el numero no esta en el vector_a");
	}else{
		printf("\n\n en el vector a esta el numero %i vez o veces",cont_a);
	}
	
	if( cont_b == 0){
		printf("\n\n el numero no esta en el vector_b");
	}else{
		printf("\n\n en el vector esta el numero %i vez o veces",cont_b);
	}
	
	
	//--------------------- 6)
	   suma_a=0;
	for( x=0; x<elementos_a; x++){	
		suma_a+=vec_a[x];
	}
     
    printf("\n\n\n\n PROMEDIO DE LOS VALORES DEL VECTOR A = %.2f",(float)(suma_a/elementos_a));
	
	printf("\n\n PORCENTAJE DE LO VALORES IMPARES DEL VECTOR B = %.2f",(float)((100*impares_b)/elementos_b));//---- impares de b lo tome de la pregunta 4)
	
	printf("\n\n SUMATORIA DE LOS VALORES PARES DEL VECTOR A = %i ",sumatoria_pares_a);//---- la sumatoria la tome de la pregunta 4)
	
	
	///--------------- extra
	printf("\n\n");
		for( x=0; x<elementos_a;x++){
			
			cont=1;
			z=0;
			do{
			  if( vec_a[x] % cont++ == 0 ){
			  primo[z++];
			            }
			}while( cont != vec_a[x]);
		
		
		}

	for( x=0; x<elementos_b;x++){
			
			cont=1;
			y=0;
			do{
			  if( vec_b[x] % cont++ == 0 ){
			  no_primo[y++];
               }
			}while( cont != vec_b[x]);
		
		}
	
	for( x=0; x<z; x++){	
		printf("%i ",primo[x]);
	}
        printf("\n\n");
	for( x=0; x<y; x++){	
			printf("%i ",no_primo[x]);
	}
	
	
}









