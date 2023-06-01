#include <stdio.h>
/*Ejercicio 3 :
Dada un arreglo numérico de 10 elementos repetidos se pide:
1)	Cargar el arreglo en etapa de declaración.
2)	Ingresar un elemento por pantalla e indicar:
	a.	Si se encuentra en el arreglo.
	b.	En el caso de que se encuentre el elemento en el arreglo:
	i.	Indicar cuantas veces aparece y en qué posición.
	c.	En caso de no hallar el elemento emitir el mensaje correspondiente por pantalla.
	d.	Para realizar la búsqueda usar una función.
	e.	Eliminación: En el caso de que el elemento aparezca más de una vez eliminar el que aparece último. Si aparece una sola vez eliminarlo directamente. 
	f.	Usar una función para mostrar por pantalla el arreglo luego de la eliminación.
*/
void Mostrar(int Arreglo[], int tamanio);
void buscar(int Arreglo[], int busca);
void eliminar(int Arreglo[], int valor, int contador);


int main(int argc, char *argv[]) {
	int Arreglo[10]={10,60,30,40,50,60,60,60,90,50}, valor = 0;
	int contador = 0;
	printf("\n Ingrese el valor para el Arreglo: ");
	scanf(" %d", &valor);
	Mostrar(Arreglo,10);
	buscar(Arreglo, valor);
	eliminar(Arreglo, valor, contador);
	
	return 0;
}

void Mostrar(int Arreglo[], int tamanio){
	int i;
	printf("\nARREGLO\n");
	printf(" ( ");
	for(i=0; i<tamanio; i++){
		printf(" %d ", Arreglo[i]);
	}
	printf(" ) ");
}
void buscar(int Arreglo[], int busca){
	int i, cont = 0;
	for(i=0; i<10; i++){
		if(Arreglo[i]==busca){
			printf("\n Se encontro el valor %d en la posicion %d\n", busca, i);
			cont++;
		}
	}
	if(cont == 0){printf("\n NO se encontro el valor %d en el arreglo\n", busca);}
	else{printf("El valor se encontro %d veces", cont);}
}
void eliminar(int Arreglo[], int valor, int contador){ 
	int i, j, nuevotamanio;
	nuevotamanio = 10;

	for (i = 0; i < nuevotamanio; i++) {
		if (valor == Arreglo[i]) {
			contador++;
		}
	}
	
	// Si el valor aparece más de una vez, eliminar solo el último
	if (contador > 1) {
		for (i = nuevotamanio - 1; i >= 0; i--) {
			if (Arreglo[i] == valor) {
				for (j = i; j < nuevotamanio - 1; j++) {
					Arreglo[j] = Arreglo[j + 1];
				}
				nuevotamanio--;
				break;
			}
		}
	}
	// Si el valor aparece solo una vez, eliminarlo directamente
	else if (contador == 1) {
		for (i = 0; i < nuevotamanio; i++) {
			if (Arreglo[i] == valor) {
				for (j = i; j < nuevotamanio - 1; j++) {
					Arreglo[j] = Arreglo[j + 1];
				}
				nuevotamanio--;
				break;
			}
		}
	}
	Mostrar(Arreglo, nuevotamanio);
}

