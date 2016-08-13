#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//-----x=(100m*k)/1000m---> x=10km distancia maxima

void main(){
	
	char  resp;
	int velocidad,placa,u_tributaria,frenado,mayor=-99999,aux_f,aux_p,multa,cont=0,acum=0,cont_1=0,cont_2=0;
	float porcentaje,promedio;
	
	printf("\n\ncontrol de transcito");
	
	printf("\n\nIngrese la unidad tributaria por (km/h): ");
	 scanf("%i",&u_tributaria);
	 printf("\n\n Limete de velocidad 100 m/h");
	
	 do{
			cont_1++;
		printf("\n\nCual es la velocidad (km/h): ");
		 scanf("%i",&velocidad);	
		printf("\n\nDistancia de frenado(metros)");	
		  scanf("%i",&frenado);
		 printf("\n\nPlaca del veiculo: ");
		  scanf("%i",&placa);	
		
			if( frenado > 30){
				  cont++;
		          acum=+frenado;
			}
			if( velocidad > mayor){
				mayor=velocidad;
				aux_f=frenado;
				aux_p=placa;
			}
			if( velocidad > 10){//-----10 son los 10km de limite
				multa=(velocidad-10)*u_tributaria;
			  printf("\n\n La multa por exese de velocidad es: %i", multa);
			}else{
				cont_2++;
			}
			
	  printf("\n\nHay otro carro (s/n):");
	   fflush(stdin);
	   scanf("%c",&resp);	
	}while(resp == 's');
	   
	   promedio=acum/cont;
	printf("\n\nEl promedio de frenado con distancia mayor a 30 metros es: %.2f",promedio);   
	   porcentaje=(100*cont_2)/cont_1;
	printf("\n\nEl porcentaje de los no multados es: %.2f",porcentaje);
	printf("\n\nVehiculo con mayor velocidad placa %i con distancia %i",aux_p,aux_f);
	
	
}








