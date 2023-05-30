#include <stdio.h>
/*• Realizar un programa que declare tres arreglos, ‘vector1’, ‘vector2’ y ‘vector3’ de cinco
enteros cada uno, pida valores por teclado para ‘vector1’ y ‘vector2’ y calcule
vector3=vector1+vector2. Mostrar los tres arreglos por pantalla.*/

void Cargar (int Arreglo[]);
void Sumar (int Arreglo1[], int Arreglo2[], int Suma[]);
void Mostrar (int Arreglo[]);


int main(int argc, char *argv[]) {
	int vector1[5], vector2[5], vector3[5];
	printf("Cargar el vector 1\n ");
	Cargar(vector1);
	printf("\nel vector 1 es : \n ");
	Mostrar(vector1);
	printf("\n");
	printf("\nCargar el vector 2\n");
	Cargar(vector2);
	printf("\nel vector 2 es : \n ");
	Mostrar(vector2);
	printf("\n\n");
	printf("Suma en  el vector 3\n");
	Sumar(vector1,vector2,vector3);
	printf("\nel vector 3 es : \n ");
	Mostrar(vector3);
	
	return 0;
}

void Cargar (int Arreglo[]){
	int i,dato;
	for(i = 0; i < 5; i++){
		printf("Ingrese el numero en la posicion %d : ", i);
		scanf(" %d", &dato);
		Arreglo[i] = dato;
	}
} 
void Sumar(int Arreglo1[], int Arreglo2[], int Suma[]){
	int i;
	for(i = 0; i < 5; i++){
		Suma[i] = Arreglo1[i]+Arreglo2[i];
	}
}
void Mostrar (int Arreglo[]){
	int i;
	for(i = 0; i < 5; i++){
		printf(" %d\t", Arreglo[i]);
	}
}
