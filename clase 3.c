#include<stdio.h>
#include<string.h>
#include<conio.h>



void main(){
	
	char resp,nombre[10],nom_aux[10],sexo,x,t_prenda;
	int n_prendas,mayor=-9999, cont_hombres=0, cont_mujeres=0,cont_camisa=0,cont_pantalon=0;
	float k_pantalon,k_camisa;
	
	
	printf("\t\nDesea solicitar el servicio de lavanderia (s/n): ");
	 scanf("%c",&resp);
	

	
	while( resp=='s' || resp=='S'){
		
	   		printf("\nIngrese el nombre del estudiante: ");
			   fflush(stdin);
			   gets(nombre);
			   	
		    printf("\nIngrese el sexo (f/m): ");
		   //  fflush(stdin);
		    //  sexo=getch();
		      //  sexo=getch();
		      scanf("%c",&sexo);
		//	  sexo=tolower(sexo);///----lleva la palabra sexo a minuscula
		      
		      if(sexo=='f'){//-----------contador quien utiliza mas la lavanderia 
		      	cont_mujeres++;
			  }
			  if(sexo=='m'){
			  	cont_hombres++;
			  }
		      
			printf("\nIngrese el numero de prendas: ");
		      scanf("%i",&n_prendas);
	       
	       	cont_camisa=0;
	        cont_pantalon=0;
	       
	        for(x=0; x<n_prendas; x++){
	          printf("\nDescripcion de la prenda pantalo(p) vestido(v) camisa(c) otro(o): ");
	          	 fflush(stdin);
		       scanf("%c",&t_prenda);
		        t_prenda=tolower(t_prenda);
		          
		        if(t_prenda == 'c'){
		        	cont_camisa++;
				}
		        if(t_prenda == 'p'){
		         	cont_pantalon++;
		         
				}  	
	        } 
	       
	       if( cont_camisa >= 5){//-------quien trajo mas pantalones teniendo en cuenta el ultimo
	       	if(cont_pantalon >= mayor){
			   	 mayor=cont_pantalon;	
					strcpy(nom_aux,nombre);		   	
			   }
		   }
		       
			  
	     if( cont_pantalon > 0 ){
		    k_pantalon=(cont_pantalon*650)/(1000);
			   printf("\n pantalones en kilogramos: %f", k_pantalon);
	                              }
	  
	  	if(cont_camisa > 0 ){
			k_camisa=(cont_camisa*450)/(1000);
			   printf("\n camisa en kilogramos: %f", k_camisa ); 
	         }
	  
		
		  
		printf("\n El estudiante %s  trajo:  %i pantalones,  %i camisas", nombre,cont_pantalon,cont_camisa);  
	
		   	
		printf("\nDesea seguir cargando datos de los estudiantes (s/n): ");
		  fflush(stdin);
		  scanf("%c",&resp);	
		
	}
	  
	   if( cont_pantalon > 0 ){
			if(cont_camisa > 0 ){
			printf("\n El ultimo estudiante que trajo mas pantalones: %s",nom_aux);
		}
	  }
	  
	  
	  
	  
	  
	  
	  
	  	
}
