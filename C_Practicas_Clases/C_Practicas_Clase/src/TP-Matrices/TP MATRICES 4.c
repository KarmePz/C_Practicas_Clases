#include <stdio.h>
#define FIL 3
#define COLUM 3
/*Ejercicio Nº 4:
Un cuadrado mágico 3 x 3 es una matriz 3 x 3 formada por números del 1 al 9 don
de la suma de sus filas, sus columnas y sus diagonales son idénticas. Crear un
 programa que permita introducir un cuadrado por teclado y determine si este cuadrado es mágico o no. 
El programa deberá comprobar que los números introducidos son correctos, es decir, están entre el 1 y el 9.*/
int cuadradomagico(int Matriz[FIL][COLUM]);
void cargar(int Matriz[FIL][COLUM]);
void mostrar(int Matriz[FIL][COLUM]);

int main(int argc, char *argv[]) {
	int M[FIL][COLUM];
	cargar(M);
	mostrar(M);
	if(cuadradomagico(M)!=0){
		printf("\nEl cuadrado de 3x3 ingresado es magico y el valor de la suma de sus filas es : %d", cuadradomagico(M));
	}else{
		printf("\nEl cuadrado de 3x3 ingresado NO es magico");
	}
	
	return 0;
}

void cargar(int Matriz[FIL][COLUM]){
	int i, j, valor;
	for(i=0; i<FIL; i++){
		for (j = 0; j < COLUM; j++){
			printf("Ingrese el valor del cuadrado 3x3 en la posicion [%d][%d]: ", i,j);
			scanf("%d",&valor);
			if(valor<=9 && valor>=1){
				Matriz[i][j] = valor;
			}else{printf("\nEl numero debe estar entre el 1 y el 9. Ingrese nuevamente");j--;}
		}
		
	}
}
void mostrar(int Matriz[FIL][COLUM]){
	int i, j;
	for(i=0; i<FIL; i++){
		printf (" (  " );
		for (j = 0; j < COLUM; j++){
			printf(" %d ", Matriz[i][j]);
		}
		printf (" )\n" );
	}
}
int cuadradomagico(int Matriz[FIL][COLUM]){
	int fila1 =0, fila2 =0, fila3 =0, columna1 =0, columna2=0,columna3 = 0;
	int diag1 = 0, diag2= 0, Sumadestino = 0;
	
	fila1 = Matriz[0][0]+Matriz[0][1]+Matriz[0][2]; 
	fila2 = Matriz[1][0]+Matriz[1][1]+Matriz[1][2]; 
	fila3 = Matriz[2][0]+Matriz[2][1]+Matriz[2][2]; 
	Sumadestino = fila1;
	
	if(fila1==fila2 && fila2==fila3){
		columna1 = Matriz[0][0]+Matriz[1][0]+Matriz[2][0];
		columna2 = Matriz[0][1]+Matriz[1][1]+Matriz[2][1];
		columna3 = Matriz[0][2]+Matriz[1][2]+Matriz[2][2];
	}if(columna1 == columna2 && columna3 == columna2 && columna1 == Sumadestino){
		diag1 = Matriz[0][0] + Matriz[1][1] + Matriz[2][2];
		diag2 = Matriz[0][2] + Matriz[1][1] + Matriz[2][0];
	}if(diag2 == diag1 && diag1 == Sumadestino){
		return Sumadestino;
	}
	else{
		return 0;
	}
}
