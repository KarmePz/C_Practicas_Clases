#include <stdio.h>

//Ejercicio N° 4: Modificar el ejercicio anterior para que muestre 
//los resultados en forma descendente uno abajo del otro.

int main(int argc, char *argv[]) {
	
	int sol,i;
	
	sol=0;
	
	for(i=10; i>=1; i--){
		sol = 7 * i;
		printf(" 7 por %d ", i);
		printf("es %d\n", sol);
	}
	
	return 0;
}
