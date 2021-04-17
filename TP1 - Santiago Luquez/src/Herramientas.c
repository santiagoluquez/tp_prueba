/*
 * Herramientas.c
 *
 *  Created on: 10 abr. 2021
 *      Author: Santiago
 */

#include "Herramientas.h"

int ValidarNumeroFloat(char* pData){
	int contadorComa = 0;
	int rtn = 1;

	if(strlen(pData) > 0){
		if (pData[0] == '-'){
			for(int i = 1; i < strlen(pData); i++){
				if(pData[i]=='.' || pData[i]==','){
					if(isdigit(pData[i+1]) == 0){
					contadorComa++;
					rtn = 0;
					break;
					}
				}
			}
		}
		else{
			for(int i = 0; i < strlen(pData); i++){

				if(pData[i] == '.'|| pData[i] == ','){
				contadorComa++;
			}
			else{
				if(isdigit(pData[i]) == 0){
					rtn = 0;
					break;
				}
			}
		}

		if(contadorComa > 1){
			rtn = 0;
			}
		}

	}else{
		rtn = 0;
	}

	return rtn;
}

float PedirFloat(char* MSJ, char* ERROR_MSJ){
	char buffer[TAM_BUFFER];
	float rtn;

	printf("%s", MSJ);
	fflush(stdin);
	gets(buffer);

	while(ValidarNumeroFloat(buffer) == 0){
		printf("%s", ERROR_MSJ);
		fflush(stdin);
		gets(buffer);
	}
	rtn = atof(buffer);

	return rtn;
}

void MostrarNumero(int numeroIngresado){

	printf("El numero ingresado es: %d\n", numeroIngresado);
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
