#include <stdio.h>
int fibonacci (int x);
int main(int argc, char *argv[]) {
	int i;
	printf("Suceción Fibonacci\n");
	for (i = 1; i <= 10; i++){
		printf(" %d", fibonacci(i));
	}
	return 0;
}

int fibonacci(int x) {
	if (x == 0){
		return 0;
	}
	if (x == 1){
		return 1;
	}
	else{
		return ( fibonacci(x-1) + fibonacci(x-2));
	}
}
