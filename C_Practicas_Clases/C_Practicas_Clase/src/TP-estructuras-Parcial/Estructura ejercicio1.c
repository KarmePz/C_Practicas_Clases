#include <stdio.h>
#define MAX 2
/*ejercicio 1 realizado;*/
struct alumno {
	int DNI;
	char Nombre[30];
	char Apellido[30];
	int Edad; 
	float Promedio;
	
	
};
void OrdenarDni(struct alumno alumnos[]);
int main(int argc, char *argv[]) {
	int i;
	float PromedioPromedio = 0;
	struct alumno alumnos[MAX];
	
	for(i = 0; i<MAX; i++){
		printf("\n");
		printf( "Escribe el nombre del alumno: " );
		scanf( " %s", &alumnos[i].Nombre );
		
		printf( "Escribe el apellido del alumno: " );
		scanf( " %s", &alumnos[i].Apellido );
		
		printf( "Escribe el DNI del alumno: " );
		scanf( " %i", &alumnos[i].DNI );
		
		printf( "Escribe la edad del alumno: " );
		scanf( " %i", &alumnos[i].Edad );
		
		printf( "Escribe el Promedio del alumno: " );
		scanf( " %.2f", &alumnos[i].Promedio);
	}
	printf("\n\tListado de alumnos\n ");
	printf("DNI \t\tApellido\t\tNombre\n");
	printf("--------------------------------------------------------\n");
	for(i = 0; i<MAX; i++){
		printf("%i\t\t%s\t\t\t%s\n", alumnos[i].DNI, alumnos[i].Apellido, alumnos[i].Nombre);
		PromedioPromedio += alumnos[i].Promedio;
	}
	printf("--------------------------------------------------------\n");
	printf("\n\tTotal de alumnos: %d", MAX);
	printf("\n\tTotal suma promedio: %.2f", PromedioPromedio);
	return 0;
}
void OrdenarDni(struct alumno alumnos[]){
	int i,j, tamaux = MAX-1, auxDNI;
	struct alumno aux;
	
	for(i = 0; i<MAX; i++){
		for(j=0; j<tamaux;j++){
			if(alumnos[j].DNI>alumnos[j+1].DNI){
				aux = alumnos[j];
				alumnos[j] = alumnos[j+1];
				alumnos[j+1] = aux;
			}
		}
	}
}

