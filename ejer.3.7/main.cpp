/*programa que toma el valor de un entero como cantidad en dolares y convierte
el valor en el numero menor de billetes equivalente
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
void cambio (int a);

//funcion principal
int main(){
	
	//declaracion de variables
	int x;
	
	printf("ingrese la cantidad de dinero \n\n");
	
	scanf("%d", &x);
	printf("\n");
	
	cambio (x);
	
	
	return 0;
}

//esta es la declaracion de la funcion 
void cambio (int valor){

	int c100; int c50; int c20; int c10; int c5; int c1;
	
	int cantidad;
	cantidad=valor;
	
	c100=valor/100;
	valor%=100;
	
	c50=valor/50;
	valor%=50;
	
	c20=valor/20;
	valor%=20;
	
	c10=valor/10;
	valor%=10;
	
	c5=valor/5;
	valor%=5;
	
	c1=valor/1;
	
	printf("los %d dolares son equivalentes a \n\n", cantidad);
	printf("%d billetes de 100 \n", c100);
	printf("%d billetes de 50 \n", c50);
	printf("%d billetes de 20 \n", c20);
	printf("%d billetes de 10 \n", c10);
	printf("%d billetes de 5 \n", c5);
	printf("%d billetes de 1 \n", c1);
	
}
