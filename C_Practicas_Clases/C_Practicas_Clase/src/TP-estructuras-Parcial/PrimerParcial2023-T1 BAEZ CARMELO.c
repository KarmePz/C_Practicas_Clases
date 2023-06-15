#include <stdio.h>
/*Ejercicio número 1*/
int main(int argc, char *argv[]) {
	
	/*Se inician las variables*/
	int mon50, mon10, mon5, mon1;	/*elegimos int para contar las monedas*/
	float total, aux;					/*elegimos float para contar el precio ingresado*/
	mon10=mon1=mon5=mon50=0;			/*iniciamos todo en 0*/
	
	/*pedimos al usuario que ingrese el precio en pesos*/
	printf("Ingrese la cantidad a devolver en pesos: $");
	scanf(" %f",&total);
	
	/*Guardamos el dato en un auxiliar y lo multiplicamos por 100 
	para operar de forma adecuada y simple.*/
	aux=total;
	total= total * 100;
	
 /*Inicio del ciclo de repeticion while*/
	while (total > 0){
		/*seccion de condicionales*/
		
		if(total >= 50){
			total-=50;
			mon50++;
			/*moneda de ¢50 incrementa y se resta del total*/
		}
		
		if(total >= 10 && total < 50){
			total-=10;
			mon10++;
			/*moneda de ¢10 incrementa y se resta del total*/
		}
		if(total >= 5 && total < 10){
			total-=5;
			mon5++;
			/*moneda de ¢5 incrementa y se resta del total*/
		}
		if(total >= 1 && total < 5){
			total-=1;
			mon1++;
			/*moneda de ¢1 incrementa y se resta del total*/
		}
	}
	/*mostramos los resultados en pantalla verificando que los datos sean correctos y validos*/
	if(aux<0){printf("\nrango invalido");}
	else{
	printf("\nTendremos %d monedas de 50 centavo(s), %d de 10 centavo(s), %d de 5 centavo(s) y %d de 1 centavo(s) ", mon50,mon10,mon5,mon1);
	printf("\nMonto total devuelto: \n$%.2f", aux);
	}
	
	/*nota: como se realiza la resta del valor total de forma decreciente, siempre nos dara la menor cantidad de monedas posible*/
	
	return 0;
}

