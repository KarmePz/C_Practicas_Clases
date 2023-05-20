#include <stdio.h>
#include <conio.h>
#include <ctype.h>
/*Ejercicio N° 1: Para los siguientes programas secuenciales, transformarlos en programas que utilicen funciones*/
/*Programa 2*/

void detvocal(char caracter);
	
int main(int argc, char *argv[]) {
	
	char car;
	printf("Ingrese un caracter");
	scanf ("%c",&car);
	
	detvocal(car);
	
	return 0;
}

/*BLOQUE DE FUNCION DETECTAR VOCAL*/
void detvocal(char caracter){
	caracter = tolower(caracter);
	switch(caracter)
	{
	case 'a': printf (" Vocal a");break;
	case 'e': printf (" Vocal e");break;
	case 'i': printf (" Vocal i");break;
	case 'o': printf (" Vocal o");break;
	case 'u': printf (" Vocal u");break;
	default: printf("No es vocal"); break;
	}
	
}
