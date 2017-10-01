/*programa que recibe un numero real y retorna solo la fraccion
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
float fraccion (float x);

//funcion principal
int main(){
	
	//declaracion de variables
	float a, resultado;
	
	resultado=fraccion (a);
	
	printf("la fraccion es %f", resultado);
	
	getch();
	return 0;
}

//esta es la declaracion de la funcion mult
float fraccion (float x){
	
	float resul;
	int y;
	printf("ingrese un numero\n\n");
	
	scanf("%f", &x);
	
	y=x;
	resul=x-y;
	
	return resul;
}
