#include <stdio.h>

/*Ejercicio N°2
	2.1 Desarrollar el programa que permita que la siguiente función se pueda codificar*/
/*
int suma(int a,int b)
{
return (a+b);
}*/
int suma (int a, int b);
int main(int argc, char *argv[]) {
	
	int resultado, a, b;
	printf("Ingrese los dos numeros a sumar: ");
	scanf (" %d %d", &a, &b);
	
	resultado = suma (a,b);
	
	printf("resultado: %d", resultado);
	
	return 0;
}
int suma (int a, int b){
	return (a+b);
}
