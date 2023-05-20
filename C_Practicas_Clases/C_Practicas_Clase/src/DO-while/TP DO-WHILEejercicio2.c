#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int edad, dinero, total,max;
	total=dinero=10;
	max=1000;
	edad=12;
	
	do{
			dinero=dinero*2;
			total+=dinero;
			edad++;
	}while(max>=total);
	
	printf("\tCalculo del Dinero recibido \n");
	
	printf("\nEdad (En ultima cantidad): %d", edad);
	printf("\nDinero recibido: %d", dinero);
	printf("\nTotal Recibido: %d", total);

	return 0;
}

