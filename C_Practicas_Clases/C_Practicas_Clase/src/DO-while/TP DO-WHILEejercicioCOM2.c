#include <stdio.h>

int main(int argc, char *argv[]) {
	int num, aux=0, i;
	char opcion;
	i=0;
	do{
		printf("\nIntroduzca un n�mero entero: ");
		scanf(" %d", &num);
		printf("\n�Desea introducir otro n�mero(s/n)?:  ");
		scanf("  %c", &opcion);
		aux+=num;
		i++;
	}while(opcion=='s'||opcion=='S');
	
	printf("\nHa introducido %d n�mero(s)\n", i);
	printf("\nLa suma de todos ellos es: %d", aux);
	
	return 0;
}

