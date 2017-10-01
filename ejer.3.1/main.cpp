/*programa que recibe dos numeros en punto flotante los multiplica y muestra el resultado
fecha: 20 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
float mult (float x, float y);

//funcion principal
int main(){
	
	//declaracion de variables
	float a, b, resultado;//la variable resultado es en donde guardamos lo que retorna la funcion 
	
	resultado=mult (a, b);
	
	printf("%f", resultado);//para poder que se muestre en pantalla se debe usar el printf
	
	getch();
	return 0;
}

//esta es la declaracion de la funcion mult
float mult (float x, float y){
	
	float resul;
	printf("ingrese dos numeros\n\n");
	
	scanf("%f", &x);
	scanf("%f", &y);
	
	resul=x*y;
	
	return resul;
}
