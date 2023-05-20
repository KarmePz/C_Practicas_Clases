#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,j,k;
	
	/* (A) este for imprime los numeros impares y pares hasta 5 dependiendo de la iteracion. 
	Si esta es par imprime los numeros pares hasta dicha iteracion, 
	si es impar,nos muestra los numeros impares hasta dicha iteracion*/
	for (i=1; i<=5; i++)
	{
		printf("%d \n", i);
		for(j=i; j>=1; j-=2){
			printf("\t %d \n", j);
		}
	}
	
	
	/* (B)este for imprime tres numeros de forma que cada iteracion
	sus 3 digitos tienen que coincidir empezando */
	
	
	for(i=3; i>0; i--){
		for(j=1; j <= i; j++){
			for(k=i; k >= j; k--){
			printf("%d %d %d \n", i, j, k);
			}
		}
	}
	
	
	return 0;
}

/* este for imprime los numeros impares y pares hasta 5 dependiendo de la iteracion. 
Si esta es par imprime los numeros pares hasta dicha iteracion, 
si es impar,nos muestra los numeros impares hasta dicha iteracion*/
