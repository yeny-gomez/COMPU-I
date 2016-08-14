#include<stdio.h>
#include<conio.h>



int main(){
	
	int x,z,y,w,caso,limite_digito,comprovar_digitos,cont=0,parar_d_limite,parar_c_cero,m,n,p,base=1,multipli,sumando;
	int n_alrevez,resultado,resultado_total,numero=0;
	
	printf("\n\n¿CUANTOS NUMEROS REVERSIBLES?");
	///----- el numero que ingresa es la candidad de dijitos que se toman para el calculo
     //------pero no todas las convinaciones da numero impar, ya que algunos resultados almenos tienen un par
	  //-----por lo que ya no es un numero reversible
	
	
	////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	do{
		printf("\n\nIngrese un entero numero (caso): ");
		  scanf("%i",&caso);
		  
		
		  //**************** calculo de caso( digito que me da el usuario)
		  parar_d_limite=1;
		  numero=10;//--------SALTO LOS NUMERO DE UN DIGITO
		   cont=0;
	    do{
				
			numero=+numero+1;
			
			x=numero;
	 
			  
			//----------- division para saber los digitos que salen
			
			parar_c_cero=0;//------para romper la division
			do{ 
				
				 
				cont++;//------tomo los digitos NOTA AQUI TOMA HASTA EL ULTIMO DIGITO( esta poscicion es importante)
				
				y=x/10;
				z=x%10;
			 
				printf("*** %i",x);
				if( y <= 0){
					   	
             	//return 0;
					parar_c_cero=0;//----paro si llego al tamaño de digitoa
				}else if( z <= 0){
					parar_c_cero=0;///----paro si sale algun digito cero
				}
			     	
             
			}while( parar_c_cero );
		   ///---------------
				
			if( cont > caso){
				
				
				parar_d_limite=0;
				
				
			}else if( cont <= caso){
				
				    n_alrevez=0;
				    n=numero;
				    for( w=0; w<cont;w++){
					   
					    m= n%10;
					    
					    base=1;
					  for( p=w ;p<cont; p++ ){
							base=base*10;
							
					  }
					  
					  multipli=m*base;
					  sumando=+multipli;
					
					    n=numero/10;
					
	                  }
			
			    n_alrevez= sumando+m;
			    
			    resultado=n_alrevez+numero;
			    
			    resultado_total++;
			  //  printf("\n\n Numero reversible %i con %i digitos", resultado,cont);
			
				
			}
			
			///-----suma de los dos numero
			
	      
			
			
		}while( parar_d_limite);	
		
		//*************************************
		
		
		
		
		
		
		
	}while( caso == 0);
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	
	
	
	
	
	
	
	
	
	
	
}
