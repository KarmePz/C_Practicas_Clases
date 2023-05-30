#include <stdio.h>
#define MAX 10
/*Dada un arreglo de 10 números enteros positivos, generar un nuevo vector con aquellos
números que son múltiplos de 3 y otro con el resto de los elementos del vector original.
Mostrar los tres vectores.*/
void Mostrar (int Arreglo[]);
void Cargar (int Arreglo[]);
void Multiplo3(int Arreglo1[], int Arreglo2[], int Arreglo3[]);
	
int main(int argc, char *argv[]) {
	int vector1[MAX], vector2[MAX], vector3[MAX];
	
	Cargar(vector1);
	Multiplo3(vector1,vector2,vector3);
	printf("\nVECTOR ORIGINAL\n");
	Mostrar(vector1);
	printf("\nVECTOR MULTIPLOS DE 3\n");
	Mostrar(vector2);
	printf("\nVECTOR NO MULTIPLOS DE 3\n");
	Mostrar(vector3);
	
	return 0;
}

void Cargar (int Arreglo[]){
	int i,dato;
	for(i = 0; i < MAX; i++){
		printf("Ingrese el numero en la posicion %d : ", i);
		scanf(" %d", &dato);
		Arreglo[i] = dato;
	}
} 
void Mostrar (int Arreglo[]){
	int i;
	for(i = 0; i < MAX; i++){
		printf(" %d\t", Arreglo[i]);
	}
}
void Multiplo3(int Arreglo1[], int Arreglo2[], int Arreglo3[]){
	int i;
	for(i = 0; i < MAX; i++){
		if(Arreglo1[i] % 3 == 0){
			Arreglo2[i] = Arreglo1[i];
			Arreglo3[i] = 0;
		}
		else{
			Arreglo2[i] = 0;
			Arreglo3[i] = Arreglo1[i];
		}
	}
}
