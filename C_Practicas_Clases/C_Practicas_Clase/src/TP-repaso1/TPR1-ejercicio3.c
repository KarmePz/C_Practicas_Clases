#include <stdio.h>
#include <ctype.h>

/*Ejercicio N� 3:
Realizar un programa que pida al usuario dos n�meros y una letra: �i� � �p�. El programa presentar� los n�meros pares (si se
puls� la �p�) � impares (si se puls� la �i�) que hay desde el primer n�mero al segundo que introdujo el usuario. Si se pulsa
alguna tecla distinta de �p� � �i�, el programa no imprime ning�n n�mero.*/


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

