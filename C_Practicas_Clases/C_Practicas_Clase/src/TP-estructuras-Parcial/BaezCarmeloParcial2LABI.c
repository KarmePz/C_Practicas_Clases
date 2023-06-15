#include <stdio.h>
/*Alumno Baez Carmelo*/
/*PARCIAL Ejercicio 2*/

/*See inician las funciones y proceimientos*/
void Ordenar(int A[]);
void MostrarArreglo(int A[]);
void MostrarMatriz(int Matriz[2][3]);
void CargarMatriz(int Matriz[2][3], int Arreglo[]);
int busca(int A[], int valor);
	
int main(int argc, char *argv[]) {
	int A[6]= {2,4,10,5, 15,3};
	int Matriz[2][3],valor = 0, posicion;
	printf("\nARREGLO\n");
	/*Se muestra, se carga la matriz y  se ordena el arreglo mediante procedimientos*/
	MostrarArreglo(A);
	printf("\n-------------------------\n");
	Ordenar(A);
	printf("\n-------------------------");
	CargarMatriz(Matriz,A);
	printf("\n-------------------------\n");
	/*Ingreso de datos*/
	printf("\nIngrese un valor por teclado: ");
	scanf("%d", &valor);
	posicion = busca(A, valor);
	/*Si se encuentra el valor en la matriz se da un aviso por pantalla*/
	if (posicion == -1){
		printf("\nNo se encontro el valor ingresado");
	}
	else{
		printf ("El valor se encontro en la posicion %d del arreglo, por ende esta en la matriz", posicion );
		/*Se evalua si es divisible por 3 el dato ingresado*/
		if (A[posicion] % 3 == 0){
			printf("\nEl numero es divisible por 3");
		}else{
			printf("\nEl numero NO es divisible por 3");
		}
	}
	
	return 0;
}

/*BLOQUE DE FUNCIONES*/
/*Como La matriz proviene del arreglo entonces los elementos que esten en el arreglo estan en la matriz*/
int busca(int A[], int valor){
	int i, posicion = -1, contador = 0;
	/*Se recorre el arreglo y se evalua la igualdad con el valor ingresado*/
	for (i = 0; i < 6; i++){
		if (A[i] == valor){
			posicion = i;
			contador++;
		}
	}
	/*Se devuelve posicion*/
	return posicion;
}
/*Funcion para ordenar arreglo*/
void Ordenar(int A[]){
	int i, j, aux = 0;
	/*Se recorre el arreglo moviendo los valores de mayor a menor*/
	for (i = 0; i<6; i++){
		for(j = 0; j<5; j++){
			if(A[j]<A[j+1]){
				aux = A[j];
				A[j]= A[j+1];
				A[j+1]= aux;
			}
		}
	}
	/*Se muestra el arreglo*/
	printf("\nARREGLO ORDENADO\n");
	MostrarArreglo(A);
}
/*Se muestra arreglo*/
void MostrarArreglo(int A[]){
	int i;
	/*Se recorre el arreglo imprimiendo cada elemento*/
	for (i = 0; i < 6; i++){
		printf(" %d ", A[i]);
	}
	
}

/*Se carga la matriz con los valores del arreglo*/
void CargarMatriz(int Matriz[2][3], int Arreglo[]){
	int contador = 0, i, j;
	for (i = 0; i<2; i++){
		for(j = 0; j<3; j++){
			/*Como el arreglo tiene una dimension se usa un contador para sus posiciones*/
			Matriz[i][j]= Arreglo[contador];
			contador++;
		}
	}
	/*Se muestra la matriz*/
	MostrarMatriz(Matriz);
}
void MostrarMatriz(int Matriz[2][3]){
	int i, j;
	printf("\n\nMATRIZ DEL ARREGLO: \n");
	/*Se recorren filas y columnas imprimiendo cada dato presente en la matriz*/
	for (i = 0; i<2; i++){
		printf("\n ( ");
		for(j = 0; j<3; j++){
			printf(" %d ", Matriz[i][j]);
		}
		/*Se añaden las parentesis caracteristicas de la matriz*/
		printf(" ) ");
	}
}

	
