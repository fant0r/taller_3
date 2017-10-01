/*programa que cambia el signo de los elementos de un vector
fecha: 25 sept 2017
creado por manuel fernando soto
*/

#include<stdio.h>
#include<conio.h>


//Prototipos de Funcion

void cambiarSigno (int vec[],int);
void mostrarVector (int vec[],int);
void pedirDatos ();
int vec [100];
int tam;

//funcion principal
int main(){
	pedirDatos ();
	cambiarSigno (vec, tam);	
	mostrarVector (vec, tam);
	
	getch();
	return 0;
}
void mostrarVector (int vec [], int tam){
	printf("vector con signos cambiados\n\n ");
	for(int i=0; i<tam; i++){
		printf("%d ", vec[i]);
	}
}
void cambiarSigno (int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] *= -1;
	}
}

void pedirDatos (){
	printf ("\n ingrese el tamaño del vector\n ");
	scanf ("%d", &tam);
	
	for(int i=0; i<tam; i++){
		printf ("ingrese un numero\n ");
		scanf ("%d", &vec[i]);
	}
}



