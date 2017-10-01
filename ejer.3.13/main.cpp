/* programa que muestra los elementos impares de un vector
fecha 26 sept 2017
creado por manuel fernando soto
*/

#include<stdio.h>
#include<conio.h>

//declaracion de prototipos
void pedirDatos ();
void impares (int vec[], int);

//variables globales
int vec [100];
int tam;

//funcion principal
int main (){
	pedirDatos ();
	impares (vec, tam);
	
	getch();
	return 0;
}


void impares (int vec[], int tam){
	int vecImpares [100];
	int n=0;
	for(int i=0; i<tam; i++){
		if (vec[i]%2!=0){
			vecImpares[n]=vec[i];
			n++;
		}
	}
	
	printf(" elementos impares  \n ");
	for(int i=0;i<n;i++){
		printf("%d ", vecImpares[i] );
	}
}

void pedirDatos (){
	printf("ingrese el tamaño del vector\n");
	scanf("%d", &tam);
	
	for(int i=0;i<tam;i++){
		printf(" Digite un numero\n");
		scanf("%d", &vec[i]);
	}
}
