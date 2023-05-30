#include <stdio.h>
/*ARREGLO DESORDENADO SIN ELEMENTOS REPETIDOS*/




/*Ejercicio N° 4: Dado el siguiente arreglo A= {5, 4,10,8,2,11,9,1}, se pide:
Ingresar un número por teclado y usando búsqueda común indicar si el elemento se encuentra y
en qué posición está.*/
void Busca(int A[], int num, int tamano);
int main(int argc, char *argv[]) {
	int A[] = {5,4,10,8,11,9,1}, num;
	int tamano = sizeof(A)/sizeof(int);
	printf("\n Ingrese un numero para buscar: ");
	scanf("%d", &num);
	Busca(A,num,tamano);
	return 0;
}

void Busca(int A[], int num, int tamano){
	int i, acum = 0; 
	for(i=0; i<tamano; i++){
		if (num == A[i]){
			printf("\nEl numero %d se encuentra en la posicion %d", num, i);
			acum++;
		}
	}	
	if(acum == 0){
		printf("No se encontro el %d en el arreglo", num);
	}
}
