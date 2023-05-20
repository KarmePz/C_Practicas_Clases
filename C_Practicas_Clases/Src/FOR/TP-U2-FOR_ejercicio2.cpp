#include <stdio.h>
#include <conio.h>

//Ejercicio Nº2: Verificar si el siguiente programa determina si un número es perfecto

int main(int argc, char *argv[]) {
	int num, i, acum;
	printf("Ingrese el numero: ");
	scanf(" %d",&num);
	
	acum=0;
	
	for(i=1; i < num; i++){
		if (num % i == 0) {
			acum+=i;
		}
	}
	
	if (num == acum) { 
		printf("El numero %d es perfecto", num);
	}
		else {printf("El numero %i no es Perfecto", num);}
	
	getch();
	return 0;
}

//El programa SI  detecta los numeros perfectos
