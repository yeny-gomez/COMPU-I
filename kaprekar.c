#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


void main(){
	
	long int numero,suma_der,suma_iz,suma_1,suma,multipli; 
	int div,rec,cont,cont_2,x,y,rec_1,div_1,vec[20],vec_aux[20],potencia,aux,ban=0,ban_1=0,ban_2=0,n_aux;
	char resp;
	
	printf("\n\n\t NUMERO KAPREKAR");
	printf("\n\n  Ingrese un numero para comprobar si es numero kaprekar");
		 
	do{
		//*****************************************
		do{
			printf("\n\nIngrese numero:");
			 scanf("%i",&numero);
			if( numero == 0){//-------para que no ejecute el cero mas abajo se sale del sistema
				break;
			}
	     }while( numero < 0 || numero > 65536);
	    //*****************************************
	    
	    	if( numero == 0){//-------para que no ejecute el cero mas abajo se sale del sistema
				break;
			}	
	    
	    //---------------------------para elevar a la potencia
	      n_aux=numero;
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
          
             
         //--------------------------------    INERTIR VECTORES
             
          cont_2=0;
          
          do{
				
				vec_aux[cont_2]=vec[cont];
				cont_2++;
				cont--;
	
		  }while( cont != -1);//----meno uno porque llego a la posicion cero del vector
    
	      //-----------------------------
	      
	      
	      	 //-----------------------------------------  para no dejar pasar las potencias de 10     
			ban=0;
			ban_1=0;
			ban_2=0;
			
			 if( vec_aux[0] == 1){
				ban=1;	
             }
             
             for( x=1; x<cont_2; x++){
			   if( vec_aux[x] == 0){
				  ban_1=1;	
                 }
             }
             
             if( ban==1){
					if( ban_1==1){
						ban_2=1;
					}
             }
              //----------------------------------------       
               
	      
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
				    --y;
					multipli=vec_aux[x] * pow(10,y);
					suma_1=suma_1+multipli;
						
				}
				
				suma_der=suma_1;
				printf("\nderecha %i",suma_der);
				
				
				suma=suma_iz+suma_der;
				printf("\n\n\n Suma %i ",suma);			
				
				
				if( suma == n_aux){
					printf("\n\n SALIDA:  SI");
				}else{
					printf("\n\n SALIDA:  NO");
				}
						
				cont++;
		}while( cont_2-1 != cont );
	
	  
	         if( ban_2 == 1 ){
				printf("\n\nLAS POTENCIAS DE 10 NO SON NUMERO KAPREKAR");
	         }

	
	  printf("\n\nDesea calcular otro numero(s/n): ");
	  fflush(stdin);
	   scanf("%c",&resp);
		   resp=tolower(resp);
		   
	}while( resp == 's' );	   
}


