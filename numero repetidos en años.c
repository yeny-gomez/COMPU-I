#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>




int main(){
	
	int numero ,x ,y ,div ,div_1 ,rec ,rec_1 ,cont_1,cont ;
	
     do{
			
		printf("\n\nIngrese el año: ");
		 scanf("%i",&numero);//----------  numero para el calculo
			
			div=numero;
			cont=0;
			do{
				div=div/10;	
			    cont++;	//----------- numero de digitos que tiene el numero
			}while( div != 0 );
			
	}while( numero < 1000 || numero > 1000000);	

	
	div=numero;
	cont_1=0;
	//*----recordar que estoy comparando el numero de derecha a izquierda
         for( x=1; x < cont; x++){
				
				rec=div%10;
				div=div/10;
				div_1=div;
				printf("\n %i--",rec);
				for( y=(x+1); y < cont ;y++){
					rec_1=div_1%10;
					div_1=div_1/10;
						printf("\n%i",rec_1);
					if( rec == rec_1 ){
						cont_1++;
					}
				}
				   if( rec == div_1){
				    	cont_1++;
				    	
			    	}
			    	if( cont_1 == 2){
						break;
			    	}
			    	
						printf("\n%i***",div_1);	
	                printf("\n\n %i cont",cont_1);
		}				
		
			
         if( cont_1 >= 1){
				
			if( numero >= 1988 ){
				if(  numero <= 2012  ){			
					printf("\n\n  1988-24");						
				}	
			}
			if( numero >= 2020 && numero <= 2030){
					printf("\n\n 2020-10");
			}
				
         }else if( cont_1 == 0 ){
		   if( numero >= 2013 && numero <= 2019){
				printf("\n\n  2013-6");
			}		
         }
	
	return 0;
	
	
}
