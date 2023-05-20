#include <stdio.h>
#include <conio.h>


//ejercicio N°1 TP UNIDAD 2 Sentencia For


int main(int argc, char *argv[]) {
	
	int aux, num, i;
	aux=0;
	num=0;
	
	for (i=1; i<6;i++){
		num++;
		aux=(-num);
		printf("%d\t",num);
		printf("%d\t",aux);
	}
	getch();
	
	
	return 0;
}

