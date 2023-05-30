#include <stdio.h>
/*• Crear un vector de 5 enteros, inicializa el vector en etapa de declaración. Copia los
elementos del vector en otro vector pero en orden inverso, y mostrar por la pantalla
ambos arreglos.*/
void Cargar (int Arreglo[]);
void Mostrar (int Arreglo[]);
void Inverso (int Arreglo[],int Arreglo2[]);

int main(int argc, char *argv[]) {
	int vector1[5], vector2[5];
	Cargar(vector1);
	printf("\n ****************vector 1*********\n");
	Mostrar(vector1);
	printf("\n**************** Orden inverso Vector 1****************\n ");
	Inverso(vector1, vector2);
	Mostrar(vector2);
	
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
void Mostrar (int Arreglo[]){
	int i;
	for(i = 0; i < 5; i++){
		printf(" %d\t", Arreglo[i]);
	}
}
	
void Inverso (int Arreglo[], int Arreglo2[]){
	int i;
	for(i = 0; i < 5; i++){
		Arreglo2[i] = Arreglo[4-i];
	}
}
	
