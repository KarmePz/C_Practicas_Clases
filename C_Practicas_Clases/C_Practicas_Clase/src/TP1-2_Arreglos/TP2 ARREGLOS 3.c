#include <stdio.h>
/*ARREGLO ORDENADO CON ELEMENTOS REPETIDOS*/





/*Ejercicio N° 3: Dado el siguiente arreglo A= {1,4,6,6,8,10,11,11,15,16,16}, se pide:
Ingresar un número por teclado e indicar si el elemento se encuentra, cuantas veces aparece y en
qué posición está.
3.1 Realizar el ejercicio usando búsqueda común.
3.2 Realizar el ejercicio usando búsqueda binaria.*/

void Busca(int A[], int num, int tamano);
void BuscaB(int A[], int num);
int main(int argc, char *argv[]) {
	int A[]= {1,4,6,6,8,10,11,11,15,16,16}, num;
	int tamano = sizeof(A)/sizeof(int);
	printf("Ingrese numero a buscar del arreglo: " );
	scanf("%d", &num);
	printf("\n\n");
	Busca(A, num, tamano);
	printf("\nIngrese numero a buscar del arreglo: " );
	scanf("%d", &num);
	printf("\n\n");
	BuscaB(A, num);
	
	
	
	return 0;
}
void Busca(int A[], int num, int tamano){
	int i, acum = 0; 
	for(i=0; i<tamano; i++){
		if (num == A[i]){
			printf(" El numero %d se encuentra en la posicion %d ", num, i);
			acum++;
		}
	}	
	if(acum == 0){
		printf("No se encontro el %d en el arreglo", num);
	}
	printf("\n\nEl numero ingresado aparece %d veces", acum);
}
void BuscaB(int A[], int num){
	int acumA=0, acumB=0, a=0, b=12, mitad = 0, cont = 0;
	/*busqueda binaria*/
	while (a<=b){
		acumA++;
		mitad = (a+b)/2;
		if (A[mitad] == num){
			printf("\n numero %d encontrado en la posicion %d ", num, acumA );
			cont++;
			break;
		}else if (num < A[mitad]){
			b = mitad - 1;
		}else{
			a = mitad+1;
		}
		acumB++;
	}
	/*Se comprueba si contigua a esta posicion se encuentra el valor ingresado*/
	if(cont > 0){
		int repetido = 0;
		int i = mitad-1;
		while (i >= 0 && A[i]==num){
			repetido++;
			printf("\n numero %d encontrado en la posicion %d ", num, i);
			i--;
		}
		i = mitad + 1;
		while(i <= 11 && A[i] == num){
			repetido++;
			printf("\n numero %d encontrado en la posicion %d ", num, i);
			i++;
		}
		printf("\n El numero ingresado aparece %d veces en las posiciones contiguas al numero encontrado", cont+repetido);
		}else{printf("\nNumero NO encontrado");}
	
	if(acumA == acumB && cont == 0){
		printf("\nEl numero no se encontro" );	
	}
}
	
