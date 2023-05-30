#include <stdio.h>
/*Dados dos arreglos ordenado de mayor a menor sin elementos repetidos de 10
elementos cada uno. Se pide:
• Generar un nuevo vector ordenado que contenga a ambos vectores. Mostrar el
resultado.
• Mostrar el vector de menor a mayor.*/
void Mostrar (int Arreglo[]);
void unir(int arreglo1[], int arreglo2[], int arreglo3[]);
void ordenar(int arreglo[]);
int main(int argc, char *argv[]) {
	int arreglo1[] = {1,2,5,6,7,9,11,12,15,16};
	int arreglo2[] = {13,14,17,18,19,20,21,23,25,29};
	int arreglo3[20];
	
	unir(arreglo1,arreglo2,arreglo3);
	printf("\n\t\t VECTOR 3\n");
	Mostrar(arreglo3);
	ordenar(arreglo3);
	printf("\n\n ARREGLO ORDENADO\n");
	Mostrar(arreglo3);
	
	
	return 0;
}

void unir(int arreglo1[], int arreglo2[], int arreglo3[]){
	int i,j;
	for(i = 0; i < 10; i++){
		arreglo3[i] =  arreglo1[i];
	}
	i=0;
	for (j = 10; j < 20; j++){
		arreglo3[j] =  arreglo2[i];
		i++;
	}
}
void ordenar(int arreglo[]){
	int i, j, aux;
	for(i = 0; i<20;i++){
		for(j =0; j<19; j++){
			if (arreglo[j]>arreglo[j+1]){
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
	}
}
void Mostrar (int Arreglo[]){
	int i;
	for(i = 0; i < 20; i++){
		printf(" %d ", Arreglo[i]);
	}
}
