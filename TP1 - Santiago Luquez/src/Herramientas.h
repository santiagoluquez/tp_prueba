/*
 * Herramientas.h
 *
 *  Created on: 10 abr. 2021
 *      Author: Santiago
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef HERRAMIENTAS_H_
#define HERRAMIENTAS_H_
#define TAM_BUFFER 1000

/**
 * @fn int ValidarNumeroFloat(char*)
 * @brief Valida que el array ingresado no presente irregularidades. Cuenta la cantidad de "." y "," y acepta numeros negativos.
 *
 * @param pData: Es el array ingresado ingresado,
 * @return Devuelve 1, si el array no presenta irregularidades numericas, o un 0 en su defecto
 */
int ValidarNumeroFloat(char* pData);

/**
 * @fn float PedirFloat(char*, char*)
 * @brief Pide un array y lo convierte en un float. Toma el valor retornado de "ValidarNumeroFlotante" 0 o 1 para verificar si el dato es correcto, en su defecto pide que reingrese
 *
 * @param MSJ Mensaje correspondiente a ingresar numero
 * @param ERROR_MSJ En caso de error se presenta el mensaje de error, reingresar
 * @return Retorna el array ingresado convertido a float
 */
float PedirFloat(char* MSJ, char* ERROR_MSJ);

/**
 * @fn void MostrarNumero(int)
 * @brief Muestra el numero ingresado
 *
 * @param numeroIngresado: Es el numero de tipo float validado previamente
 */
void MostrarNumero(int numeroIngresado);

/**
 * @fn int ValidarEntero(float)
 * @brief Verifica si el numero ingresado es correcto para calcular los factoriales. La logica es convertir el tipo float a tipo int y verificar si son iguales y si el numero ingresado es positivo
 *
 * @param x: Es cualquier numero tipo float pertenenciente a R
 * @return Retorna 0 o 1. 0 en caso de poseer decimales o ser negativo, 1 en su defecto.
 */
int ValidarEntero(float x);

#endif /* HERRAMIENTAS_H_ */
