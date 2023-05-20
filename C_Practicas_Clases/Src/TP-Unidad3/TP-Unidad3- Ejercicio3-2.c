#include <stdio.h>
#include <math.h>
/*Ejercicio N° 3: Realizar los siguientes programas usando funciones.
2. Calcular las raíces reales de una ecuación cuadrática.*/
float Raiz1 (float a1, float b1, float c1);
float Raiz2 (float a2, float b2, float c2);
	
	/*BLOQUE FUNCION PRINCIPAL*/
int main(int argc, char *argv[]) {
	float a, b, c;
	
	/*INGRESO DE DATOS*/
	printf("\n Ingrese el número 'a', 'b', y 'c':\n");
	scanf("%f  %f  %f", &a, &b, &c);
	
	/*se evalúa si estamos hablando de una ecuacion 
	de segundo grado con el primer dato ingresado (a)*/
	if(a != 0){
		/*Se invocan las dos funciones para los mismos datos*/
		Raiz1(a, b, c);
		Raiz2(a, b, c);
	}
	/*si a = 0 entonces la ecuación no es de segundo grado*/
	else {
		printf("\n La ecuación no es cuadrática");
	}
	return 0;
}


	/*BLOQUE DE FUNCION DE PRIMERA RAIZ*/
float Raiz1 (float a1, float b1, float c1){
	float x1, raizinterna;
	/*Se calcula la raiz interna  y se evalua posteriormente para operar*/
	raizinterna = (b1* b1) + (-4*a1*c1);
	
	/*si el numero dentro de la raiz es positiva se opera*/
	if(raizinterna >= 0){
		x1 = (-b1 + sqrt(raizinterna)) / (2*a1);/*formula (+) para resolver ecuaciones de segundo grado */
		printf ("\n x1 = %0.2f\n", x1);/*se muestra resultado por pantalla*/
		return 0;
	}
	/*si el número dentro de la raiz es negativo la solucion 
	no esta en el campo de los reales*/
	else{
		printf("\n x1= Raiz 1 invalida\n");
		return 0;
	}
}
	
	
	/*BLOQUE DE FUNCION DE SEGUNDA RAIZ*/
float Raiz2 (float a2, float b2, float c2){
	float x2, raizinterna;
	raizinterna = (b2* b2) + (-4*a2*c2);
	
	/*si el numero dentro de la raiz es positiva se opera*/
	if(raizinterna >= 0){
		x2 = (-b2 - sqrt(raizinterna)) / (2*a2);/*formula (-) para resolver ecuaciones de segundo grado */
		printf ("\n x2 = %0.2f\n", x2);
		return 0;/*finaliza funcion*/
	}
	/*si el número dentro de la raiz es negativo la solucion 
	no esta en el campo de los reales*/
	else{
		printf("\n x2= Raiz 2 invalida\n");
		return 0;/*finaliza funcion*/
	}
}
