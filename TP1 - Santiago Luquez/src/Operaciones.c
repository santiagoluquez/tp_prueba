/*
 * Operaciones.c
 *
 *  Created on: 9 abr. 2021
 *      Author: Santiago
 */
#include "Operaciones.h"



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


int  CalcularFactorial(int x){

	int i;
	int long factorial;

	factorial = 1;

	for(i=1; i<=x; i++){

		factorial *= i;
	}

	return factorial;
}
