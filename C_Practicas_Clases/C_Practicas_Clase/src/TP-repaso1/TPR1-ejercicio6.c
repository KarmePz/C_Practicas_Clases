#include <stdio.h>
//Crear la siguiente estructura usando sentencias repetitivas:escalera
int main(int argc, char *argv[]) {
	int i,j, num;
	printf("Ingrese cant de filas: ");
	scanf(" %d",&num);
	
	for (i=1; i<=num; i++){
		for (j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

