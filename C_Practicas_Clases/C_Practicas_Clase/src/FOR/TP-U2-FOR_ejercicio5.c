#include <stdio.h>
#include <conio.h>

/*Ejercicio N° 5: Modificar el programa 5 para que se ingrese por teclado la tabla que se quiere calcular y la
cantidad de números.*/
int main(int argc, char *argv[]) {
	
	int sol,i, tabla;
	sol=0;
	
	printf("Ingrese la tabla que quiere saber: ");
	scanf(" %d",&tabla); 
	
	for(i=1; i<=10; i++){
		sol = tabla * i;
		printf(" %d ", tabla);
		printf(" por %d ", i);
		printf("es %d\n", sol);
	}
	
	getch();
	return 0;
}

