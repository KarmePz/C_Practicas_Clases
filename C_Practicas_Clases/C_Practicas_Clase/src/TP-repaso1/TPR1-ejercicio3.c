#include <stdio.h>
#include <ctype.h>

/*Ejercicio N° 3:
Realizar un programa que pida al usuario dos números y una letra: “i” ó “p”. El programa presentará los números pares (si se
pulsó la “p”) ó impares (si se pulsó la “i”) que hay desde el primer número al segundo que introdujo el usuario. Si se pulsa
alguna tecla distinta de “p” ó “i”, el programa no imprime ningún número.*/


int main(int argc, char *argv[]) {
	int num1, num2, i;
	char opcion;
	printf("Ingrese numero inicial:");
	scanf(" %d", &num1);
	printf("Ingrese numero final:");
	scanf(" %d", &num2);
	if(num1 < num2){ 
		printf("Ingrese si quiere pares o impares(p/i):");
		scanf(" %c", &opcion);
		opcion=tolower(opcion);
		switch(opcion){
		case 'i':
			printf("IMPARES DEL %d AL %d\n", num1, num2);
			for(i=num1; i<=num2; i++){
				if(i % 2 !=0 ){
				printf(" %d \n", i);
				}
			}
			
			break;
		case 'p':
			printf("PARES DEL %d AL %d\n", num1, num2);
			for(i=num1; i<=num2; i++){
				if(i % 2 ==0 ){
					printf(" %d \n", i);
				}
			}
			break;
		default:
			printf ("rango no valido");
		}
	}
	else{
		printf ("rango no valido");
	}
	
	return 0;
}

