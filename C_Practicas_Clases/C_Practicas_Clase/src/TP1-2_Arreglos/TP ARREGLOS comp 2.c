#include <stdio.h>
/*2. Dado un arreglo de 10 enteros, ingresar dos posiciones diferentes e intercambiar sus
contenidos.*/

int main(int argc, char *argv[]) {
	int arreglo[] = {10,20,30,40,50,60,70,80,90,100}, pos1, pos2, aux, i;
	
	printf("\narreglo original\n");
	for(i = 0; i<10; i++){
		printf(" %d ", arreglo[i]);
	}
	
	printf("\nIngrese dos posiciones para intercarmbiar entre 0 y 9: ");
	scanf(" %d", &pos1);
	scanf(" %d", &pos2);
	
	aux = arreglo[pos1];
	arreglo[pos1] = arreglo[pos2];
	arreglo[pos2] = aux;
	
	printf("\narreglo Modificado\n");
	for(i = 0; i<10; i++){
		printf(" %d ", arreglo[i]);
	}
	
	return 0;
}

