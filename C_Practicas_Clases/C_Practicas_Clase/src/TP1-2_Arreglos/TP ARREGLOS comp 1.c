#include <stdio.h>
/*1. Cargar un arreglo de tipo entero de 10 elementos en etapa de definición. Mostrar el
contenido del arreglo usando la sentecia FOR. Los elementos se deben mostrar uno al lado
del otro separados por dos guiones medio.
a. Al programa anterior agregar la suma de sus elementos. Mostrar el resultado.
Calcular el promedio.
b. Mostrar los elementos que son mayores a la mitad del promedio.
c. Ingresar una posición por teclado e indicar que elemento se encuentra en dicha
posición.
d. Ingresar un valor por teclado e indicar si es un elemento que pertenece al arreglo.*/
float suma(float arreglo[]);
void Mostrar(float arreglo[]);
void MostrarMayorMitadPromedio(float arreglo[], float promedio);
void Posicion(float arreglo[]);
void busca(float arreglo[]);

int main(int argc, char *argv[]) {
	float arreglo[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	Mostrar(arreglo);
	printf("\n\n");
	
	printf("La suma de todos sus numeros es: %.2f", suma(arreglo));
	printf("\nEl promedio de todos sus numeros es: %.2f", (suma(arreglo)/10));
	printf("\n");
	
	MostrarMayorMitadPromedio(arreglo, ((suma(arreglo)/10)/2));
	Posicion(arreglo);
	busca(arreglo);
	return 0;
}

float suma(float arreglo[]){
	int i, aux = 0;
	for(i = 0; i<10; i++){
		aux += arreglo[i];
	}
	return aux;
}
void Mostrar(float arreglo[]){
	int i;
	for(i = 0; i<10; i++){
		printf(" %.2f ", arreglo[i]);
	}
}
void MostrarMayorMitadPromedio(float arreglo[], float promedio){
	int i;
	printf("MAYORES A LA MITAD DEL PROMEDIO : %.2f\n", promedio*2);
	for(i = 0; i<10; i++){
		if (arreglo[i] > promedio){
			printf(" %.2f ", arreglo[i]);
		}
	}
}

void Posicion(float arreglo[]){
	int posicion;
	printf("\n\nIngrese una posicion: ");
	scanf(" %d", &posicion);
	if (posicion >=0 || posicion < 10){
		printf("El elemento en la posicion %d es el : %.2f", posicion, arreglo[posicion]);
	}else{printf("la posicion no existe");}
}
void busca(float arreglo[]){
		int i,valor, aux=0;
		printf("\n\nIngrese un valor: ");
		scanf(" %d", &valor);
		for(i = 0; i <10; i++){
			if (valor == arreglo[i]){
				printf("El valor pertenece al arreglo");
				aux++;
				break;
			}
		}
		if (aux == 0){
			printf("El valor NO pertenece al arreglo");
		}
}
