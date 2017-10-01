/*programa que calcula el cuadrado de un valor flotante
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
float al_cuadrado (float x);

//funcion principal
int main(){
	
	//declaracion de variables
	float a, resultado;//la variable resultado es en donde guardamos lo que retorna la funcion 
	
	resultado=al_cuadrado (a);
	
	printf("%f", resultado);
	
	getch();
	return 0;
}

//esta es la declaracion de la funcion al_cuadrado
float al_cuadrado (float x){
	
	float resul;
	printf("ingrese un numero\n\n");
	
	scanf("%f", &x);
	
	
	resul=x*x;
	
	return resul;
}
