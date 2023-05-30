#include <stdio.h>
/*ARREGLO ORDENADO SIN ELEMENTOS REPETIDOS*/


/*Ejercicio N° 2: Dado el siguiente arreglo A= {1,4,6,8,10,11,15,16}, se pide:
Ingresar un número por teclado e indicar si el elemento se encuentra y en qué posición está
usando búsqueda binaria*/

/*Responder:
***Una vez que se encuentra el elemento en el arreglo .es necesario seguir recorriendo el
arreglo?*/

/*NO ES NECESARIO RECORRER DE NUEVO TODO EL ARREGLO YA QUE NO SE ENCUENTRAN ELEMENTOS REPETIDOS*/
void BuscaB(int A[], int num);
int main(int argc, char *argv[]) {
	int A[] = {1,4,6,8,10,11,15,16}, num;
	
	printf("Ingrese numero a buscar del arreglo: " );
	scanf("%d", &num);
	printf("\n\n");
	BuscaB(A, num);
	return 0;
}
void BuscaB(int A[], int num){
	int acumA = 0, acumB = 0, a=0,b=10, mitad;
	while (a<=b){
		acumA++;
		mitad = (a+b)/2;
		if (num == A[mitad]){
			printf("Numero encontrado en la posicion %d", mitad);
			break;
		}else if (num < A[mitad]){
			b = mitad-1;
		}else{
			a = mitad+1;
		}
		acumB++;
	}
	if (acumA == acumB){printf("Numero no encontrado\n");} 
}
	
