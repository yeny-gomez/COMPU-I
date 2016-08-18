#include<stdio.h>
#include<conio.h>



int main(){
	
	int x,z,y,w,caso,limite_digito,comprovar_digitos,cont=0,cont_1,parar_d_limite,parar_c_cero,m,n,p,base=1,multipli,sumando,ban,ban_1;
	int n_alrevez,resultado,resultado_total=0,numero,aux;
	
	printf("\n\n¿CUANTOS NUMEROS REVERSIBLES?");
	///----- el numero que ingresa es la candidad de dijitos que se toman para el calculo
     //------pero no todas las convinaciones da numero impar, ya que algunos resultados almenos tienen un par
	  //-----por lo que ya no es un numero reversible
	
	
	////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	do{
           resultado_total=0;
			do{
			 printf("\n\nIngrese un entero numero (caso): ");
		     scanf("%i",&caso);		
			}while( caso > 9);
	
		  //**************** calculo de caso( digito que me da el usuario)
		  resultado_total=0;
		  parar_d_limite=1;
		  numero=10;//--------SALTO LOS NUMERO DE UN DIGITO
		   
	    do{
				
			numero=numero+1;
			
			x=numero;
	 
			//----------- division para saber los digitos que salen
			cont=0;
		      ban=0;
			do{ 				 
					
				cont++;//------tomo los digitos NOTA AQUI TOMA HASTA EL ULTIMO DIGITO( esta poscicion es importante)

		       z=x%10;
				x=x/10;

				if( z == 0 ){///hay un digito con cero
					ban=1;	
				}
		     
			}while( x != 0 );
		   ///---------------
		   printf("\n\n %i",cont);
		   
		 ban_1=0;
	    	if( ban == 0){
				
			      if( cont == caso){///****** sacar el numero alrevez
				
				    n_alrevez=0;
				    n=numero;
				    sumando=0;
				  
				    for( w=1; w<cont;w++){
					
					  m= n%10;
					   n=n/10;
					    
				
					    base=1;
					    	
					  for( p=w ;p<cont; p++ ){
							
							base=base*10;

					  }
			  
					  multipli=m*base;
					  sumando=sumando+multipli;			   
					    
	                  }
	    	         
	              
	                       
			          n_alrevez= sumando+n;
			    
			       printf("\n\nNumero alrevez ++%i++ numero *%i*",n_alrevez,numero);
			       resultado=n_alrevez+numero;
			       printf("\n\nSuma de los dos numero %i",resultado );
			       
			       
			        aux=resultado;
			        cont_1=0;
			        
			        do{
						cont_1++;
						aux=aux/10;
			      
				  	}while( aux != 0);
				  	ban_1=0;
				  	aux=resultado;
				  	
				  	
				  	if( cont_1 == cont ){
				  		
				  		
				       	for(w=1;w<cont;w++){
						
					         m=aux%10;
					      	aux=aux/10;
					     	if( m%2 == 0){
								ban_1=1;/// si almenos uno es par no se calcula
						       } 
						
				           }
					  }
				  	
				  	if( ban_1 == 0){
	                    resultado_total++;
					  }
				  
				  	
				  	
				  	
				  	
				  					
		        }
			    
      		}else{
      			parar_d_limite=0;
			  }
			
		
		
			
		}while( parar_d_limite);	
		
		//*************************************
		
		
		printf("\n\nTotal denumeros reversibles: %i",resultado_total);
		
		
	
		
	}while( caso != 0);
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	
	
	
	
	
	
	
	
	
	
	
}
