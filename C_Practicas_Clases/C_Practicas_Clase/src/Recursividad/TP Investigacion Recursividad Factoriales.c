#include <stdio.h>

/*Realizar un programa que ejemplifique la Recursividad. Explicar cómo funciona la recursividad.*/
float factorial (float n);

int main(int argc, char *argv[]) {
	float n;
	
	printf("Ingrese un número entero: ");
	scanf(" %f", &n);
	
	printf(" el factorial de %.2f es %.2f", n, factorial(n));
	
	
	
	return 0;
}

float factorial (float n){
	if (n<=1){
		return 1;
	}
	else{
		return (n*(factorial(n-1)));
	}
	
}
