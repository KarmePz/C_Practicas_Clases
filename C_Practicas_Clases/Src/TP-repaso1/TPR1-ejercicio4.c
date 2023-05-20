#include <stdio.h>
/*
Ejercicio 4:
	Suponga que el gobierno impone a los pescadores un límite en los Kg. de pesca que pueden recoger en un día, para no
	agotar los recursos marinos. Desarrolle un programa al que se le vayan dando los pesos de lo que se va pescando y vaya
	mostrando el total de Kg. pescados hasta ese momento. Cuando supere el máximo se debe dar la alarma y terminar el
	programa. También debe terminar el programa si introducimos un 0 como kilos pescados.*/

int main(int argc, char *argv[]) {
	int peso, aux, max, i;
	aux=0;
	i=1;
	peso=1;
	printf("maximo: ");
	scanf(" %d", &max);
		while(max > aux && peso != 0){
			printf("Peso dia %d: ", i);
			scanf(" %d", &peso);
			if (peso==0){
				printf("Conteo finalizado");
			}
			else{
			aux+=peso;
			i++;
			}
		}
	printf("\nALERTA: hay %d Kg de pescados de %d maximos", aux, max);
	return 0;
}

