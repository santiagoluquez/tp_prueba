/*
 * OperacionesMatematicas.c
 *
 *  Created on: 29 mar. 2021
 *      Author: Santiago
 */
#include "OperacionesMatematicas.h"

float PedirFloat(char mensaje[]){

	float numeroIngresado;

	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);

	return numeroIngresado;
}

void MostrarNumero(int numeroIngresado){

	printf("El numero ingresado es: %d\n", numeroIngresado);
}
float SumarOperadores(float x , float y){

	float sumar;

	sumar = x + y;

	return sumar;

}

float RestarOperadores (float x, float y){
	float restar;

	restar = x - y;

	return restar;
}

float DividirOperadores(float x, float y){
	float dividir;

	if (y!=0){
		 dividir = x / y;
	}
	else{
		dividir = 0;
	}
	return dividir;
}

float MultiplicarOperadores(float x, float y){
	float multiplicar;

	multiplicar = x * y;

	return multiplicar;
}

int ValidarEntero(float x){

	int entero;
	int aux;

	aux = (int) x;

	if(x == aux && x >= 0){
		entero = 1;
	}
	else {
		entero = 0;
	}

	return entero;
}

int CalcularFactorial(int x){

	int i;
	int factorial;

	factorial = 1;

	for(i=1; i<=x; i++){

		factorial *= i;
	}

	return factorial;
}
