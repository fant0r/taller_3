/*programa que ingresa valores por referencia a la funcion
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
void mult (int *x, int *y);

//funcion principal
int main(){
	
	//declaracion de variables
	int a, b;
	
	mult(&a, &b);
	
	printf("%d, %d", a, b);
	
	return 0;
}

//esta es la declaracion de la funcion 
void mult (int *x, int *y){
	
	*x=100;
	*y=200;
	
	
}
