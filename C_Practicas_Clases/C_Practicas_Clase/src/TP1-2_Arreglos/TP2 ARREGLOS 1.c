#include <stdio.h>
/*ARREGLO ORDENADO SIN ELEMENTOS REPETIDOS*/




/*Ejercicio N° 1: Dado el siguiente arreglo A= {1,4,6,8,10,11,15,16}, se pide:
	Ingresar un número por teclado y usando búsqueda común indicar si el elemento se encuentra y
	en qué posición está.*/

void Busca(int A[], int num, int tamano);
int main(int argc, char *argv[]) {
	int A[] = {1,4,6,8,10,11,15,16}, num;
	int tamano = sizeof(A)/sizeof(int);
	printf("Ingrese numero a buscar del arreglo: " );
	scanf("%d", &num);
	printf("\n\n");
	Busca(A, num, tamano);
	return 0;
}
void Busca(int A[], int num, int tamano){
	int i, acum = 0; 
	for(i=0; i<tamano; i++){
		if (num == A[i]){
			printf(" El numero %d se encuentra en la posicion %d", num, i);
			acum++;
		}
	}	
	if(acum == 0){
		printf("No se encontro el %d en el arreglo", num);
	}
}
