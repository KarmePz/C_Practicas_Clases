#include <stdio.h>
#include <math.h>
/*3. Determinar la distancia entre dos puntos P y Q (leidos por teclado), con una función cuyo prototipo sea:
float distancia.euclidea (punto P, punto Q);
y que imprima el resultado con una función cuyo prototipo sea
void imprime.distancia (float distancia) ;*/
void imprime_distancia (float distancia) ;
float distancia_euclidea(float xp, float yp, float xq , float yq);

int main(int argc, char *argv[]) {
	/*INGRESO DE DATOS*/
	float distancia, XP,YP,XQ,YQ;
	printf (" Ingrese coordenadas (X,Y) del punto P: \n");
	scanf (" %f %f", &XP, &YP);
	printf (" Ingrese coordenadas (X,Y) del punto Q: \n");
	scanf (" %f %f", &XQ, &YQ);	
	
	/*Se invocan las funciones*/
	distancia = distancia_euclidea(XP,YP, XQ, YQ);
	imprime_distancia (distancia);
	return 0;
}
/*FUNCION PARA CALCULAR DISTANCIA*/
float distancia_euclidea (float xp, float yp, float xq , float yq){
	float distancia;
	/*Mediante un calculo de distancia similar a un calculo de pitagoras se llega a la distancia entre los dos puntos*/
	distancia = sqrt(pow(xp-xq, 2)+ pow(yp-yq,2));
	/*se usan funciones de la libreria math.h y cuando se calcula la distancia se devuelve la misma*/
	return distancia;
}
/*FUNCION PARA IMPRIMIR DISTANCIA*/
void imprime_distancia (float distancia) {
	/*Se imprime la distancia en formato float y con dos decimales*/
	printf (" La Distancia entre el punto P y Q es de unos %.2f ", distancia);
}
