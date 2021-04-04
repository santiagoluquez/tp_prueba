/*
 * OperacionesMatematicas.h
 *
 *  Created on: 29 mar. 2021
 *      Author: Santiago
 */

#include <stdio.h>
#ifndef OPERACIONESMATEMATICAS_H_
#define OPERACIONESMATEMATICAS_H_

float PedirFloat(char mensaje[]);

void MostrarNumero(int numeroIngresado);

float SumarOperadores(float x , float y);

float RestarOperadores (float x, float y);

float MultiplicarOperadores(float x, float y);

float DividirOperadores(float x, float y);

int ValidarEntero(float x);

int CalcularFactorial(int x);
#endif /* OPERACIONESMATEMATICAS_H_ */
