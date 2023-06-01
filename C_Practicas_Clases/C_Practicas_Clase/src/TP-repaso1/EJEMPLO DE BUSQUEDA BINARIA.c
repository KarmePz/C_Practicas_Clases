#include <stdio.h>

int busquedaBinariaRecursiva(int dato, int inf, int sup, int arreglo[]) {
	if (sup >= inf) {
		int medio = inf + (sup - inf) / 2;
		
		if (arreglo[medio] == dato) {
			return medio;
		}
		
		if (arreglo[medio] > dato) {
			return busquedaBinariaRecursiva(dato, inf, medio - 1, arreglo);
		}
		
		return busquedaBinariaRecursiva(dato, medio + 1, sup, arreglo);
	}
	
	return -1;  // El elemento no se encuentra en el arreglo
}

int main() {
	int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
	int dato = 6;
	
	int indice = busquedaBinariaRecursiva(dato, 0, longitud - 1, arreglo);
	
	if (indice != -1) {
		printf("El dato %d se encuentra en el índice %d del arreglo.\n", dato, indice);
	} else {
		printf("El dato %d no se encuentra en el arreglo.\n", dato);
	}
	
	return 0;
}
