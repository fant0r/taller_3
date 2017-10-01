/*programa que dice cual es el numero mayor de 3 numeros ingresados
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
float maximo (float x, float y, float z);

//funcion principal
int main(){
	
	//declaracion de variables
	float a, b, c, resultado;
	
	resultado=maximo (a, b, c);
	
	printf("el numero mayor es %f", resultado);
	
	getch();
	return 0;
}

//esta es la declaracion de la funcion
float maximo (float x, float y, float z){
	
	float resul;
	float mayor;
	printf("ingrese tres numeros\n\n");
	
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	
	if(x>y && x>z){
		mayor=x;
	}
	else{
		if(y>x && y>z){
			mayor=y;
		}
		else{
			mayor=z;
		}
	}
	
	resul=mayor;
	return resul;
}
