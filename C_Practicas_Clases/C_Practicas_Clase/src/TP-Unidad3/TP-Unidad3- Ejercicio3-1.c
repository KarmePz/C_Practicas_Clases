#include <stdio.h>

/*Ejercicio N° 3:1. Hacer un programa para que dada una lista de números que finaliza con cero informa cuantos de ellos
eran primos. Usar una función llamada PRIMO que devuelva 1 si el número recibido es primo y 0 si no es
primo.*/
int PRIMO (int num);

int main(int argc, char *argv[]) {
	int num;
	do{
		printf("Ingrese un número:" );
		scanf(" %d", &num);
		if (num != 0){
		printf(" %d\n", PRIMO(num));
		} 
		else {printf(" NO es primo\n****FIN DEL PROGRAMA****" );}
	}while(num != 0);
	
	return 0;
}

int PRIMO (int num){
	int i, resto;
	if (num == 1 ){
		printf(" NO es primo\n" );
		return 0;
	}
	else{
		for (i = 2; i<num; i++){
			resto = num % i;
			if (resto == 0){
				printf(" NO es primo\n" );
				return 0;
			}
		}
		if (resto != 0){
			printf(" ES primo\n" );
			return 1;
		}
	}
	return 0;
}
