#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a, i, b;
	
	printf("Ingrese el valor positivo: ");
	scanf(" %d", &a);
	i=0;
	
	if(a<0){
		printf("\nDato no válido");
	}
	else{
		do{
			i++;
			printf(" \t%d", i );
		}while(i<a);
	}
	return 0;
}

