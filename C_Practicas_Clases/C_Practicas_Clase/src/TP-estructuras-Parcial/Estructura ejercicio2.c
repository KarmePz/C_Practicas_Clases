
#include <stdio.h>
#define MAX 3
/*ejercicio 1 realizado;*/
struct alumno {
	int DNI;
	char Nombre[30];
	char Apellido[30];
	int Edad; 
	float Promedio;
	
	
};
void CargarListado(struct alumno alumnos[]);
void MostrarListado(struct alumno alumnos[]);
int Mayor(struct alumno alumnos[]);
int Menor(struct alumno alumnos[]);
void OrdenarDni(struct alumno alumnos[]);
int main(int argc, char *argv[]) {
	
	struct alumno alumnos[MAX];
	
	CargarListado(alumnos);
	OrdenarDni(alumnos);
	MostrarListado(alumnos);
	
	printf("\n\tMayor : %d\n\tMenor: %d ", Mayor(alumnos), Menor(alumnos));
	return 0;
}




void CargarListado(struct alumno alumnos[]){
	int i;
	for(i = 0; i<MAX; i++){
		printf("\nAlumno %d\n",i);
		printf( "Escribe el nombre del alumno:\n" );
		scanf("%s", &alumnos[i].Nombre);
		
		printf( "Escribe el apellido del alumno:\n" );
		scanf("%s", &alumnos[i].Apellido);
		
		printf( "Escribe el DNI del alumno:\n" );
		scanf("%d", &alumnos[i].DNI);
		
		printf( "Escribe la edad del alumno:\n" );
		scanf("%d", &alumnos[i].Edad);
		
		printf( "Escribe el Promedio del alumno:\n" );
		scanf("%f", &alumnos[i].Promedio);
		printf("\n");
	}
}
void MostrarListado(struct alumno alumnos[]){
	int i;
	float PromedioPromedio = 0;
	
	printf("\n\tListado de alumnos\n ");
	printf("DNI \t\tApellido\t\tNombre\t\tEdad\n");
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	for(i = 0; i<MAX; i++){
		printf("%i\t\t%s\t\t\t%s\t\t\t%i\n", alumnos[i].DNI, alumnos[i].Apellido, alumnos[i].Nombre, alumnos[i].Edad);
		PromedioPromedio += alumnos[i].Promedio;
	}
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\tTotal de alumnos: %d", MAX);
	printf("\n\tTotal promedio general alumnos: %.2f", PromedioPromedio/MAX);
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
int Mayor(struct alumno alumnos[]){
	int i, edadmayor=0;
	for(i = 0; i<MAX; i++){
		if (edadmayor<alumnos[i].Edad){
			edadmayor = alumnos[i].Edad;
		}
	}
	return edadmayor; 
}
int Menor(struct alumno alumnos[]){
	int i, edadmenor=0;
	for(i = 0; i<MAX; i++){
		if (edadmenor>alumnos[i].Edad||edadmenor==0){
			edadmenor = alumnos[i].Edad;
		}
	}
	return edadmenor; 
}
