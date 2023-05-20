#include <stdio.h>
int MCD (int x, int y);
int main(int argc, char *argv[]) {
	int x, y;
	
	printf("Ingrese los dos numeros (X,Y): ");
	scanf (" %d %d", &x, &y);
	
	printf("MCD: %d", MCD(x,y));
	return 0;
}

int MCD(int x, int y) {
	if (y == 0){
		return x;
	}
	else{
		return MCD(y, x % y);
	}
}
