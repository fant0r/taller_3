/*programa que recibe dos numeros enteros, y eleva el primer numero ingresado a
la potencia que el segundo numero indique
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
int funpot (int x, int y);

//funcion principal
int main(){
	
	//declaracion de variables
	int a, b, resultado;
	
	resultado=funpot (a, b);
	printf("\n");
	printf("el resultado de la potencia es %d", resultado);
	getch();
	return 0;
}

//esta es la declaracion de la funcion 
int funpot (int x, int y){
	int memo;
	int resul;
	printf("ingrese dos numeros\n\n");
	
	scanf("%d", &x);
	scanf("%d", &y);
	memo=x;
	if (y==1){
	resul=x;	
	}
	else{
		
		for(int i=1; i<y; i++){
		memo=memo*x;
		resul=memo;
		}
	}
	

	
	return resul;
}
