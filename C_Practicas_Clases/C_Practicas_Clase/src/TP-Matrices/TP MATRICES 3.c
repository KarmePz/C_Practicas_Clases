#include <stdio.h>
#define FIL 3
#define COLUM 3
/*Ejercicio N° 3
Se dice que una matriz tiene un punto de silla
 si algun valor de la matriz es el menor valor de su fila y a la vez el 
mayor de su columna. Escribir un programa que tenga como entrada una matriz de 3x3 de números enteros
 y calcule la posición de un punto de silla (si es que existe).*/
void Cargar(int Matriz[FIL][COLUM]);
void Mostrar(int Matriz[FIL][COLUM]);
void puntosilla(int Matriz[FIL][COLUM]);


int main(int argc, char *argv[]) {
	int M[FIL][COLUM];
	Cargar(M);
	Mostrar(M);
	printf("\n");
	puntosilla(M);
	return 0;
}

void Cargar(int Matriz[FIL][COLUM]){
	int i, j;
	for(i = 0 ; i<FIL; i++){
		for(j = 0; j<COLUM; j++){
			printf("Ingrese un valor en la posicion [%d][%d]: ",i,j);
			scanf("%d",&Matriz[i][j]);
		}
	}
}
void Mostrar(int Matriz[FIL][COLUM]){
	int i, j;
	printf("\nMatriz\n");
	for(i = 0 ; i<FIL; i++){
		printf("( ");
		for(j = 0; j<COLUM; j++){
			printf(" %d ",Matriz[i][j]);
		}	printf(")\n ");
	}
}
void puntosilla(int Matriz[FIL][COLUM]){
	int valormin,valorMax,filaVmin,columnaVmax,punto=0, i,j,y;
	
	for(i = 0; i<FIL; i++){
			valormin = Matriz[i][0];
			columnaVmax = 0;
			
			for(j = 1; j <COLUM; j++){
				if (valormin > Matriz[i][j]){
					valormin = Matriz[i][j];
					columnaVmax = j;
				}
			}
			
		valorMax = Matriz[0][columnaVmax];
		filaVmin = 0;
		
		for(y = 1; y < FIL; y++){
			if (valorMax < Matriz[y][columnaVmax]){
				valorMax = Matriz[y][columnaVmax];
				filaVmin = y;
			}
		}
		
		if (filaVmin == i){
			printf("\nEl punto de silla se encontro en [%d][%d] y es : %d", filaVmin,columnaVmax, Matriz[filaVmin][columnaVmax]);
			punto = 1;
		}
	}

	if(!punto){
		printf("NO SE ENCONTRO punto de silla ");
	}
}
