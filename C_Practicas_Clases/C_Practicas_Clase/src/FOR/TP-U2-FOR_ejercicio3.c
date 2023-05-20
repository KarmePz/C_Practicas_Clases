#include <stdio.h>

//Ejercicio N° 3: Calcular la tabla del 7 de los 10 primeros números enteros. 
//Mostrar los resultados en forma ascendente uno abajo del otro.

int main(int argc, char *argv[]) {
	
	int sol,i;
	
	sol=0;
	
	for(i=1; i<=10; i++){
		sol = 7 * i;
		printf(" 7 por %d ", i);
		printf("es %d\n", sol);
	}
	
	return 0;
}

