#include <stdio.h>
#define FIL 2
#define COLUM 2
/*Ejercicio N° 2
Dada una matriz de 2x2,calcular su matriz inversa.*/
int determinante(int matriz[FIL][COLUM]);
void TranspuestaAdjunta(int matriz[FIL][COLUM], int Adjunta[FIL][COLUM]);
void inversa(int matrizAdjTra[FIL][COLUM], float Inversa[FIL][COLUM],float determinante);
void mostrar(int Matriz[FIL][COLUM]);
void cargar(int Matriz[FIL][COLUM]); 

int main(int argc, char *argv[]) {
	int M[FIL][COLUM], det = 0;
	float I[FIL][COLUM];
	int AT[FIL][COLUM];
	cargar(M);
	mostrar(M); 
	det = determinante(M);
	printf ("\nDETERMINANTE : %d", det);
	TranspuestaAdjunta(M,AT);
	inversa(AT, I, det);
	
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
int determinante(int matriz[FIL][COLUM]){
	return matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0];
}
void TranspuestaAdjunta(int Matriz[FIL][COLUM], int Adjunta[FIL][COLUM]){
	int i, j;
	
	for(i=FIL-1; i>=0; i--){
		for (j = COLUM-1; j>=0; j--){
			if (i == j){Adjunta[FIL-1-i][COLUM-1-j] = Matriz[i][j];}
			else{Adjunta[FIL-1-i][COLUM-1-j]= -Matriz[j][i];}
		}
	}
	printf("\nTRANSPUESTA ADJUNTA\n");
	mostrar(Adjunta);
}
void inversa(int matrizAdjTra[FIL][COLUM], float Inversa[FIL][COLUM], float determinante){
	int i, j;
	for(i=0; i<FIL; i++){
		for (j = 0; j < COLUM; j++){
			Inversa[i][j] = matrizAdjTra[i][j]/determinante;
		}
	}
	printf("\nMATRIZ INVERSA\n");
	for(i=0; i<FIL; i++){
		printf (" (  " );
		for (j = 0; j < COLUM; j++){
			printf(" %.2f ", matrizAdjTra[i][j]/determinante);
		}
		printf (" )\n" );
	}
}

