#include <stdio.h>

int main(int argc, char *argv[]) {
	int num, aux=0, i;
	char opcion;
	i=0;
	do{
		printf("\nIntroduzca un número entero: ");
		scanf(" %d", &num);
		printf("\n¿Desea introducir otro número(s/n)?:  ");
		scanf("  %c", &opcion);
		aux+=num;
		i++;
	}while(opcion=='s'||opcion=='S');
	
	printf("\nHa introducido %d número(s)\n", i);
	printf("\nLa suma de todos ellos es: %d", aux);
	
	return 0;
}

