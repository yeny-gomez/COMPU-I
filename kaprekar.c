#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


void main(){
	
	int numero,multipli,div,rec,cont,cont_2,x,y,suma_iz,suma_der,suma,rec_1,div_1,suma_1,vec[12],vec_aux[12],potencia,aux;
	char resp;
	
	printf("\n\n\t NUMERO KAPREKAR");
		 
	do{
		//*****************************************
		do{
			printf("\n\nIngrese numero:");
			 scanf("%i",&numero);
			if( numero == 0){//-------para que no ejecute el cero mas abajo se sale del sistema
				break;
			}
	     }while( numero < 0 || numero > 65536 );
	    //*****************************************
	    
	    	if( numero == 0){//-------para que no ejecute el cero mas abajo se sale del sistema
				break;
			}	
	    
	    //---------------------------para elevar a la potencia
	    
	      numero=pow(numero,2);
	    printf("\n\n numero * 10 a la 2: %i",numero);
	    //---------------------------
	    

			cont=0;
			div=numero;
            do{
			    rec=div%10;
			    vec[cont]=rec;
			    div=div/10;
			   
			    	cont++;
			    	
			}while( div > 9);

	           vec[cont]=div;///----es el ultimo digito que no puedo guardar
	                         //----- contador con el ultimo numero de contador
             
          cont_2=0;
          
          do{
				
				vec_aux[cont_2]=vec[cont];
				cont_2++;
				cont--;
	
		  }while( cont != -1);//----meno uno porque llego a la posicion cero del vector
    
	         aux=0;
             cont=0;
             suma=0;
             suma_iz=0;
             suma_der=0;
         do{
				
				aux++;
				suma_1=0;
				y=aux;
				
				for( x=0; x<aux; x++){
						
					multipli=vec_aux[x] * pow(10,--y);
					suma_1=suma_1+multipli;//---10 a la cero 1
				}
				
				suma_iz=suma_1;
				printf("\n\nizquierda %i",suma_iz);
	
				suma_1=0;
			      y=(cont_2) - (aux);
				for( x=aux; x<cont_2; x++){
				
					multipli=vec_aux[x] * pow(10,--y);
					suma_1=suma_1+multipli;
				}
				
				suma_der=suma_1;
				printf("\n\nderecha %i",suma_der);
				
				
				
				suma=suma_iz+suma_der;
				printf("\n\n Suma %i ",suma);			
				
							
							
				cont++;
				printf("\n%i ****",cont);
		}while( cont_2-1 != cont );
	
	  printf("\n\nDesea calcular otro numero(s/n): ");
	  fflush(stdin);
	   scanf("%c",&resp);
		   resp=tolower(resp);
		   
	}while( resp == 's' );	   
	
	
	
	
	
	
}
