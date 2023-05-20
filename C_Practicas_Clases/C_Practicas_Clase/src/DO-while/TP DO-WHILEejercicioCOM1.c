#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i=0, x=0;
	
	printf("El siguiente programa escribe cuantos numeros divisible por  5 exiten hasta el numero 20\n"); 
	do{
		if(i%5==0){
			x++;
			printf("%d", x);
		}
		++i;
	}while(i<20);
	
	printf("\nx=%d", x);
	
	return 0;
}

