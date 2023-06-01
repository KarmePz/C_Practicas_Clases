#include <stdio.h>
#define FIL 3
#define COLUM 3
/*Ejercicio N° 1
Dadas dos matrices cuadradas de 3x3,M y N, Se pide
a. Cargar ambas matrices.
b. Comparar ambas matrices e indicar si son iguales. Mostrar ambas matrices.
c. Calcular M+N y mostrar el resultado por pantalla.
d. Calcular M-N y mostrar el resultado por pantalla.
e. Calcular M*N y mostrar el resultado por pantalla*/
void cargar(int Matriz[FIL][COLUM]);
void mostrar(int Matriz[FIL][COLUM]);
int Iguales(int Matriz[FIL][COLUM], int Matriz2[FIL][COLUM]);
void suma(int Matriz[FIL][COLUM], int Matriz2[FIL][COLUM],int sol[FIL][COLUM]);
void resta(int Matriz[FIL][COLUM], int Matriz2[FIL][COLUM],int sol[FIL][COLUM]);
void producto(int Matriz[FIL][COLUM], int Matriz2[FIL][COLUM],int sol[FIL][COLUM]);
int main(int argc, char *argv[]) {
	int M[FIL][COLUM];
	int N[FIL][COLUM];
	int sol[FIL][COLUM];
	cargar(M);
	printf("\nMatriz M\n");
	mostrar(M);
	cargar(N);
	mostrar(N);
	printf("\nMatriz M\n");
	mostrar(N);
	if ((Iguales(M,N))!= 0){
		printf("\n Las Matrices son iguales\n");
	}else{printf("\n Las Matrices NO son iguales\n");}
	suma(M,N,sol);
	resta(M,N,sol);
	printf("\nproducto MAtrices\n");
	producto(M,N,sol);
	
	return 0;
}

void cargar(int Matriz[FIL][COLUM]){
	int i, j;
	for(i=0; i<FIL; i++){
		for (j = 0; j < COLUM; j++){
			printf("Ingrese el valor en la posicion [%d][%d]: ", i,j);
			scanf("%d", &Matriz[i][j]);
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
int Iguales(int Matriz[FIL][COLUM], int Matriz2[FIL][COLUM]){
	int i, j, cont=0;
	for(i=0; i<FIL; i++){
		for (j = 0; j < COLUM; j++){
			if (Matriz[i][j] == Matriz2[i][j]){
				cont++;
			}else{break;}
		}
	}
	if (cont < 9){return 0;}
	else{return 1;}
}

	void suma(int Matriz[FIL][COLUM], int Matriz2[FIL][COLUM], int sol[FIL][COLUM]){
		int i, j;
		for(i=0; i<FIL; i++){
			for (j = 0; j < COLUM; j++){
				sol[i][j]= Matriz[i][j]+Matriz2[i][j];
			}
		}
		printf("\nSuma de las dos Matrices:\n");
		mostrar(sol);
	}
		
void resta(int Matriz[FIL][COLUM], int Matriz2[FIL][COLUM],int sol[FIL][COLUM]){
	int i, j;
	for(i=0; i<FIL; i++){
		for (j = 0; j < COLUM; j++){
			sol[i][j]= Matriz[i][j]-Matriz2[i][j];
		}
	}
	printf("\nResta de las dos Matrices:\n");
	mostrar(sol);
}
void producto(int Matriz[FIL][COLUM], int Matriz2[FIL][COLUM], int sol[FIL][COLUM]){
	int i=0, j, y, aux = 0, sum = 0;
	for(y = 0; y<COLUM; y++){
		for(i=0; i<FIL; i++){
			sum = 0;
			for(j = 0; j<COLUM; j++){
				aux = Matriz[i][j]*Matriz2[j][y]; 
				sum += aux;
			}
			sol[i][y] = sum;
		}
	}
	mostrar(sol);
}

