#include <stdio.h>

/*2.2 Desarrollar la función cuadrado que permita que se ejecute el siguiente programa*/

int cuadrado (int i);
int main(int argc, char *argv[]) {
	
	int i,resultado;
	for (i=0;i<10;i++)
	{
	resultado = cuadrado (i);
	printf("Cuadrado de %d: %d\n",i,resultado);
	}
	
	
	return 0;
}

/*FUNCION CUADRADO*/
int cuadrado (int i){
	int resultado;
	resultado = i*i;
	return resultado;
}
