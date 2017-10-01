/*programa que convierte una cantidad de dias en una fecha de dia mes y año contando
apartir del 01/01/2000
fecha: 24 sept 2017
creado por: manuel fernando soto
*/
#include<conio.h>
#include<stdio.h>

//prototipo de funcion
void cal_a (int totalDias);

//funcion principal
int main(){
	
	//declaracion de variables
	int x;
	
	printf("ingrese la cantidad de dias que desea para calcular una fecha \n\n");
	
	scanf("%d", &x);
	
	printf("\n");
	
	cal_a (x);
	
	return 0;
}

//esta es la declaracion de la funcion 
void cal_a (int totalDias){
	
	int d; int m; int a;
	
	d=1;
	m=1;
	a=2000;
	int cuenta=totalDias;
	int bandera=0;
	int mes=0;
	int anio=0;
	
	
	while (cuenta!=0){
		
		for(int i=1; i<=30; i++){
			
			cuenta=cuenta-1;
			bandera=bandera+1;
			
			if(bandera==30){
				
				mes=mes+1;
				bandera=0;
			}
			if(mes==12){
				
				anio=anio+1;
				mes=0;
			}
			if(cuenta==0){
				break;
			}
		}
	
	}
	
	d=d+bandera;
	m=m+mes;
	a=a+anio;
	
	printf("la fecha es %d / %d / %d ", d, m, a);
}
