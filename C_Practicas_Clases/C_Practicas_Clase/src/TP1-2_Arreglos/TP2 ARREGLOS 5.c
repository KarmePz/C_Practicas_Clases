#include <stdio.h>
/*ARREGLO DESORDENADO CON ELEMENTOS REPETIDOS*/



/*Ejercicio N¢X 5: Dado el siguiente arreglo A= {5, 4,10,8,2,11,9,1,5,11,1}, se pide:
Ingresar un numero por teclado y usando busqueda comun indicar si el elemento se encuentra y
en que posicion esta.

Responder:
*****1) Una vez que se encuentra el elemento en el arreglo .es necesario seguir recorriendo el)
arreglo?
****** 2)Luego de realizar los ejercicios para los diferentes tipos de arreglos .Hay un programa
que se pueda usar en la busqueda de un elemento para cualquier tipo de arreglo?
*****3)En que casos se usa la busqueda binaria?
*/
void busca(int A[], int num, int tamano);
int main(int argc, char *argv[]) {
	int A[]={5, 4,10,8,2,11,9,1,5,11,1};
	int tamano = sizeof(A)/sizeof(int);
	int num;
	
	printf("Ingrese un numero a buscar en el arreglo");
	scanf("%d", &num);
	
	printf("\n\n");
	busca(A, num, tamano);
	
	return 0;
}
void busca(int A[], int num, int tamano){
	int i, acum=0; 
	for(i = 0; i<tamano; i++){
		if (num == A[i]){
			printf("\n Numero %d encontrado en la posicion %d ", num, i);
			acum++;
		}
	}
	if (acum==0){printf("NUMERO NO ENCONTRADO");}
}
	
/***1) Una vez que se encuentra el elemento en el arreglo .es necesario seguir recorriendo el)
	arreglo?**/
	/*Si es necesario ya que se esta evaluando un arreglo DESORDENADO DE NUMEROS REPETIDOS, por ende puede repetirse un valor en cualquier posicion*/
	
/***** 2)Luego de realizar los ejercicios para los diferentes tipos de arreglos .Hay un programa
que se pueda usar en la busqueda de un elemento para cualquier tipo de arreglo?*/
	/*El metodo de busqueda que se puede aplicar a todos los arreglos independientemente de como sean es la busqueda comun, ya que solo se recorre el arreglo buscando el elemento indicado*/
	
/****3)En que casos se usa la busqueda binaria?*/
	/*La busqueda binaria se usa para arreglos ORDENADOS, se usa solo en estos casos ya que es mas rapido y facil buscar un elemento. Siempre y cuando el arreglo no se modifique de forma continua*/
