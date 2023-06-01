#include <stdio.h>
/*Ejercicio 1:
Realice un programa en lenguaje C que compruebe si una matriz
 cuadrada de 3x3 dada es una matriz simétrica. Mostrar la matriz mediante la 
representación gráfica propia de las matrices. Usar un procedimiento para cargar y 
mostrar la matriz.
*/
int Simetrica(int M[3][3]);
void Cargar(int M[3][3]);
void Mostrar(int M[3][3]);

int main(int argc, char *argv[]) {
	int M[3][3];
	Cargar(M);
	Mostrar(M);
	if (Simetrica(M)==9){
		printf("\nLa matriz es simetrica");
	}else{
		printf("\nLa matriz No es simetrica");
	}
	return 0;
}

int Simetrica(int M[3][3]){
	int T[3][3];
	int i, j, cont=0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			T[i][j]=M[j][i];
		}
	}
	printf("\n MATRIZ TRANSPUESTA\n");
	Mostrar(T);
	for(i=0; i<3;i++){
		for(j=0; j<3; j++){
			if(M[i][j] == T[i][j]){
				cont++;
			}else{cont--;}
		}
	}
	return cont;
}
void Cargar(int M[3][3]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("ingrese el valor en la posicion [%d][%d]: ",i,j);
			scanf("%d", &M[i][j]);
		}
	}
	
}
void Mostrar(int M[3][3]){
	int i, j;
	for(i=0; i<3; i++){
		printf("\n ( ");
		for(j=0; j<3; j++){
			printf(" %i ", M[i][j]);
		}
		printf(" ) \n");
	}
}
