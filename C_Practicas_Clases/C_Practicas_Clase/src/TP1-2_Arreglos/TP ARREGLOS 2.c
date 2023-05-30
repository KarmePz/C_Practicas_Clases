#include <stdio.h>
/*Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
(comprendidas entre 0 y 10). Por pantalla, se debe mostrar todas las notas, la nota media,
la nota más alta que ha sacado y la menor.*/

void Cargar (float Arreglo[]);
void Mostrar (float Arreglo[]);
float Promedio(float Arreglo[]);
float Mayor(float Arreglo[]);
float Menor(float Arreglo[]);
int main(int argc, char *argv[]) {
	float notas[5];
	
	Cargar(notas);
	Mostrar(notas);
	printf("\nLa mayor nota del alumno fue %.2f ", Mayor(notas));
	printf("\nLa menor nota fue %.2f ",Menor(notas));
	printf("\nSu nota media/ promedio fue %.2f" , Promedio(notas));
	return 0;
}


void Cargar (float Arreglo[]){
	float dato;
	int i;
	for(i = 0; i < 5; i++){
		printf("Ingrese la Nota numero %d : ", i+1);
		scanf(" %f", &dato);
		if (dato < 0 || dato > 10){
			printf(" La nota ingresada tiene que ser entre 0 y 10 inclusive, por favor ingrese nuevamente\n");
			i--;
		}else{
			Arreglo[i] = dato;
		}
	}
} 
void Mostrar (float Arreglo[]){
	int i; 
	printf("\nLas notas son: \n");
	for(i = 0; i < 5; i++){
		printf(" %.2f\t", Arreglo[i]);
	}
}
float Promedio(float Arreglo[]){
	int i;
	float promedio, aux = 0;
	for(i = 0; i < 5; i++){
		aux += Arreglo[i];
	}
	promedio = aux/5; 
	return promedio;
}
float Mayor(float Arreglo[]){
	int i;
	float mayor, aux = 0;
	for(i = 0; i < 5; i++){
		if(aux < Arreglo[i]){
			aux =  Arreglo[i];
		}
	}
	mayor = aux; 
	return mayor;
}
float Menor(float Arreglo[]){
	int i;
	float menor,aux = 10;
	for(i = 0; i < 5; i++){
		if(aux > Arreglo[i]){
			aux =  Arreglo[i];
		}
	}
	menor = aux;
	
	return menor;
}
