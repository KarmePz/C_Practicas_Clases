#include <stdio.h>
int PASCAL (int x, int y);
int main(int argc, char *argv[]) {
	int i,j,x;
	printf("Ingrese la cantidad de filas: ");
	scanf(" %d",&x);
	for (i=0; i<=x; i++){
		for(j=0; j<=i; j++ ){
			printf(" %d", PASCAL(i, j));
		}
		printf("\n");
	}
	
	return 0;
}
int PASCAL (int x, int y){
	if (y == 0|| y == x){
		return 1;
	}else{
		return (PASCAL(x-1, y-1)+PASCAL(x-1, y));
	}
}
