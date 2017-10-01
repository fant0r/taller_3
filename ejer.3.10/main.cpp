/*programa que recibe dos numeros en punto flotante los multiplica y muestra el resultado
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
void pedir_datos();
int vec[100], tam;
int calcularSuma(int vec[], int tam);

//funcion principal
int main(){
	
	pedir_datos();
	
	printf("la suma de los elementos es %d", calcularSuma(vec, tam));

	return 0;
}

//esta es la declaracion de la funcion 

void pedir_datos(){
	printf("ingrese el numero de elementos que tendra el vector\n");
	
	scanf("%d", &tam);
	
	for(int i=0; i<tam; i++){
		printf("ingrese un numero\n");
		scanf("%d", &vec [i]);
	}
}

int calcularSuma(int vec[], int tam){
	
	int suma=0;
	
	for(int i=0; i<tam; i++){
		
		suma=suma+vec[i];
	}
	return suma;
}
