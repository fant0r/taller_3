/*programa que dice si un vector esta ordenado crecientemente
fecha 25 sept 2017
creado por manuel fernando soto
*/

#include<stdio.h>
#include<conio.h>

//prototipo de funcion
void pedir_datos();

int vec[100], tam;
	
//funcion principal
int main(){
	
	pedir_datos();
   
	
	getch();
	return 0;
}

//declaracion de funcion

void pedir_datos(){
	bool ordenado;
	int tam;
	printf("ingrese el numero de elementos que tendra el vector\n");
	
	scanf("%d", &tam);
	
	for(int i=0; i<tam; i++){
		printf("ingrese un numero\n");
		scanf("%d", &vec [i]);
	}
	
	for (int i=0; i<=tam; i++){
		printf("%d", vec[i] );
	}
	int contador=0;
	for(int j=0;j<tam;j++){
		if(vec[j] > vec[j+1]){
			ordenado=false;
		}
		else {
			contador=contador+1;
		}
		if(contador==tam-1){
			ordenado=true;
		}
	}
	
	if(ordenado==true){
		printf(" el vector esta ordenado\n");
	}else{
		printf(" el vector no esta ordenado\n");
	}
}
	
	
	







