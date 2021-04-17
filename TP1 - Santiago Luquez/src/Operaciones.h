/*
 * Operaciones.h
 *
 *  Created on: 9 abr. 2021
 *      Author: Santiago
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#define TAM_BUFFER 1000


/**
 * @fn float SumarOperadores(float, float)
 * @brief Realiza la operacion de sumar con los operadores de la variable x e y ingresados previamente.
 *
 * @param x: Es cualquier numero tipo float pertenenciente a R
 * @param y: Es cualquier numero tipo float pertenenciente a R
 * @return El valor sumado
 */
float SumarOperadores(float x , float y);

/**
 * @fn float RestarOperadores(float, float)
 * @brief Realiza la operacion de restar con los operadores de la variable x e y ingresados previamente.
 *
 * @param x: Es cualquier numero tipo float pertenenciente a R
 * @param y: Es cualquier numero tipo float pertenenciente a R
 * @return El valor restado
 */
float RestarOperadores (float x, float y);

/**
 * @fn float DividirOperadores(float, float)
 * @brief Realiza la operacion de dividir con los operadores de la variable x e y ingresados previamente.
 *
 * @param x: Es cualquier numero tipo float pertenenciente a R
 * @param y: Es cualquier numero tipo float pertenenciente a R, excepto el 0
 * @return El valor producto de la dividion de los factores
 */

float DividirOperadores(float x, float y);

/**
 * @fn float MultiplicarOperadores(float, float)
 * @brief Realiza la operacion de multiplicar con los operadores de la variable x e y ingresados previamente.
 *
 * @param x: Es cualquier numero tipo float pertenenciente a R
 * @param y: Es cualquier numero tipo float pertenenciente a R
 * @return El valor multiplicado por los factores
 */
float MultiplicarOperadores(float x, float y);

/**
 * @fn int CalcularFactorial(int)
 * @brief Realiza la operacion de calcular factorial
 *
 * @param x: Es un numero positivo y entero.
 * @return El valor de haber realizado el factorial de un numero
 */
int CalcularFactorial(int x);

#endif /* OPERACIONES_H_ */
