#include <stdio.h>
/*Ejercicio N° 5: Realizar un programa que pida el numerador y denominador de una fracción y devuelva la fracción
	simplificada.*/
int main(int argc, char *argv[]) {
	int num, den, i, r;
	i=1;
	printf("numerador: ");
	scanf(" %d", &num);
	printf("denominador: ");
	scanf(" %d", &den);
	if(den > 0){
		for (i=1; i<=den; i++){
			if (num % i ==0 && den % i == 0){
				num=num/i;
				den=den/i;
			}
		}
		printf("%d / %d", num, den);
	}
	else{printf("rango no valido");
	}
	return 0;
}

