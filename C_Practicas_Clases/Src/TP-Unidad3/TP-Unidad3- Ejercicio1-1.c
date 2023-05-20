#include <stdio.h>
#include <conio.h>

/*Para los siguientes programas secuenciales, transformarlos en programas que utilicen funciones*/
/*Programa 1- Calcular si un Año es Bisiesto*/

void BICIESTO(int a, int b, int c);
int main(int argc, char *argv[]) {
	
	int a,b,c;
	/* Aquí va el cuerpo del programa */
	a=3;
	b=3;
	c=0;
	
	BICIESTO(a,b,c);
	
	return 0;
}

void BICIESTO(int a, int b, int c){
	int anio;
	printf("Ingrese anio \n");
	scanf ("%d",&anio);
	a= anio % 4;
	b= anio % 100;
	c= anio % 400;
	if (a==0) printf(" es bisiesto \n");
	else if (a==0 && b!=0) printf(" es bisiesto \n");
	else printf("no es bisiesto \n");
	getch();
}
