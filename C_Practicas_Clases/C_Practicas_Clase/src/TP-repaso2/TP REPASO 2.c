#include <stdio.h>
#include<ctype.h>
#define E 5
/*
Ejercicio 2 :
Realizar un programa que permita usando la sentencia Switch seleccionar la operación 
a realizar con el arreglo de tipo numérico.  Tener en cuenta los tipos de arreglos que se pueden presentar.
Las operaciones que se pueden realizar son: insertar, eliminar, buscar y ordenar. Estas operaciones 
se deben realizar mediante una función.La cantidad de elementos del arreglo se indica mediante DEFINE
Los elementos del arreglo se cargan mediante una sentencia iterativa antes de seleccionar la operación a realizar con el arreglo.
*/
void Cargar(int Arreglo[]);
void Mostrar(int Arreglo[], int tamanio);
void insertar(int Arreglo[]);
void eliminar(int Arreglo[]);
void buscar(int Arreglo[]);
void ordenar(int Arreglo[]);

int main(int argc, char *argv[]) {
	int Arreglo[E];
	char opcion; 
	Cargar(Arreglo);
	Mostrar(Arreglo,E);
	do{
		printf("\n\nIngrese una opcion para operar con el Arreglo: ");
		printf("\nInsertar en el Arreglo  (A) ");
		printf("\nBuscar en el Arreglo    (B)");
		printf("\nEliminar en el Arreglo  (C) ");
		printf("\nOrdenar el Arreglo      (D)");
		printf("\n*Salir*		          (E)");
		printf("\n\t\tOpcion: ");
		scanf(" %c",&opcion);
		opcion = tolower(opcion);
		switch(opcion){
			case 'a':
				insertar(Arreglo);
				opcion=0;
				break;
			case 'b':
				buscar(Arreglo);
				opcion=0;
				break;
			case 'c':
				eliminar(Arreglo);
				opcion=0;
				break;
			case 'd':
				ordenar(Arreglo);
				break;
			case 'e':
				opcion=0;
				break;
			default:
				printf("\nPor favor ingrese un valor valido\n");
				break;
		}
	}while(opcion != 0);
	return 0;
}
void Cargar(int Arreglo[]){
	int i;
	printf("\nIngrese los valores del arreglo y Presione ENTER despues de cada uno: \n");
	for(i=0; i<E; i++){
		scanf("%d",&Arreglo[i]);
	}
}
void Mostrar(int Arreglo[], int tamanio){
	int i;
	printf("\nARREGLO\n");
	printf(" ( ");
	for(i=0; i<tamanio; i++){
		printf(" %d ", Arreglo[i]);
	}
	printf(" ) ");
}
void insertar(int Arreglo[]){
	int i, nuevotamanio = 0, valor=0;
	int Arreglo2[nuevotamanio];
	printf("\n Ingrese el valor al Arreglo: ");
	scanf(" %d", &valor);
	nuevotamanio = E + 1;
	for (i=0;i<E;i++){
		Arreglo2[i] = Arreglo[i];
	}
	Arreglo2[nuevotamanio-1] = valor;
	Mostrar(Arreglo2, nuevotamanio);
}
void eliminar(int Arreglo[]){ 
	int i, j, nuevotamanio, valor=0;
	nuevotamanio = E;
	if(E == 0){printf("Arreglo vacio");return;}
	
	printf("\n Ingrese el valor a Borrar al Arreglo: ");
	scanf("%d", &valor);
	
	for (i=0;i<nuevotamanio;i++){
		if (valor==Arreglo[i]){
			for(j = i; j < nuevotamanio-1; j++){
				Arreglo[j] = Arreglo[j+1];
			}
			nuevotamanio--;
			i--;
			if(i == 0){break;}
		}
	}
	Mostrar(Arreglo, nuevotamanio);
}
void buscar(int Arreglo[]){
	int i, busca, cont = 0;
	printf("\n Ingrese el valor a buscar: ");
	scanf("%d", &busca);
	for(i=0; i<E; i++){
		if(Arreglo[i]==busca){
			printf("\n Se encontro el valor %d en la posicion %d\n", busca, i);
			cont++;
		}
	}
	if(cont == 0){printf("\n NO se encontro el valor %d en el arreglo\n", busca);}
}
void ordenar(int Arreglo[]){
	int i,j, aux = 0;
	for(i=0; i<E; i++){
		for(j=0; j<E-1; j++){
			if(Arreglo[j]>Arreglo[j+1]){
				aux = Arreglo[j+1];
				Arreglo[j+1]= Arreglo[j];
				Arreglo[j]= aux;
			}
		}
	}
	printf("\nARREGLO ORDENADO\n");
	Mostrar(Arreglo, E);
}
