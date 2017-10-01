/*programa que convierte una cantidad de segundos en su equivalente de horas
minutos y segundos
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
void tiempo (int totalSeg);

//funcion principal
int main(){
	
	//declaracion de variables
	int x;
	
	printf("ingrese la cantidad de segundos que desea convertir en formato h:m:s \n\n");
	
	scanf("%d", &x);
	
	printf("\n");
	
	tiempo(x);
	
	return 0;
}

//esta es la declaracion de la funcion 
void tiempo (int totalSeg){
	
	int h; int m; int s; int tiemp;
	
	tiemp=totalSeg;
	
	h=totalSeg/3600;
	totalSeg%=3600;
	
	m=totalSeg/60;
	totalSeg%=60;
	
	s=totalSeg;
	
	printf(" %d horas : %d minutos : %d segundos ", h, m, s);
}
