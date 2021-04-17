/*
 ============================================================================
 Name        : Tp1
 Author      : Santiago Luquez
 Version     :
 Copyright   : Your copyright notice
 Description : Calculadora, realiza suma, resta division, multiplicacion y factorial.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Operaciones.h"
#include "Herramientas.h"

int main(void) {


	setbuf(stdout, NULL);

	int opcion;
	float numeroA;
	int numeroAEntero;
	float numeroB;
	int numeroBEntero;
	int flagPrimerOperador;
	int flagSegundoOperador;
	float suma;
	float resta;
	float division;
	float producto;
	int validacion;
	int factorialA;
	int factorialB;
	int flagSeguir;

	flagPrimerOperador = 0;
	flagSegundoOperador = 0;
	flagSeguir = 0;

	do {
	system("cls");
	printf("MENU PRINCIPAL\n");
	printf("1. Ingresar 1er operando \n");
	printf("2. Ingresar 2do operando \n");
	printf("3. Calcular todas las operaciones \n");
	printf("4. Informar resultados \n");
	printf("5. Salir \n\n");
	printf("Ingrese una opcion (1-5): \n\n");
	fflush(stdin);
	scanf("%d", &opcion);

	switch(opcion){
	    case 1:
	    	system("cls");
	        numeroA = PedirFloat("Ingrese un numero A: \n", "Error. Reingrese numero A: \n");
	        MostrarNumero(numeroA);
		    flagPrimerOperador = 1;
	        break;
        case 2:
        	system("cls");
	        numeroB = PedirFloat("Ingrese un numero B: \n", "Error. Reingrese numero A: \n");
	        MostrarNumero(numeroB);
		    flagSegundoOperador = 1;
	        break;
        case 3:
        	system("cls");
        	if(flagPrimerOperador != 0 && flagSegundoOperador != 0){

        		printf("Los numero se ingresaron correctamente, pulse 4 para mostrar resultados\n");
        		suma = SumarOperadores(numeroA, numeroB);
        		resta = RestarOperadores(numeroA, numeroB);
        		division = DividirOperadores(numeroA, numeroB);
        		producto = MultiplicarOperadores(numeroA, numeroB);
        		validacion = ValidarEntero(numeroA);
        		flagSeguir = 1;
        			if(validacion == 1){
        				numeroAEntero = numeroA;
        				factorialA = CalcularFactorial(numeroAEntero);
        			}
        			else{
        				factorialA = 0;
        			}
				validacion = ValidarEntero(numeroB);
					if(validacion == 1){
						numeroBEntero = numeroB;
						factorialB = CalcularFactorial(numeroBEntero);
					}
					else{
						factorialB = 0;
					}
        	}
        	else if(flagPrimerOperador == 0 && flagSegundoOperador != 0){
				printf("Aun no ha ingresado el operador A\n");

			}
			else if ((flagPrimerOperador != 0 && flagSegundoOperador == 0)){
				printf("Aun no ha ingresado el operador B\n");
			}
			else{
				printf("Aun no ha ingresado ningun operador\n");
        	        	}
	        break;
        case 4:
        	system("cls");
        	if ((flagSeguir == 1)&&(flagPrimerOperador != 0 && flagSegundoOperador != 0)){
        		printf("El resultado de A+B es: %f\n", suma);
        		printf("El resultado de A-B es: %f\n", resta);

        		if(division != 0){
        			printf("El resultado de A/B es: %f\n", division);
        		}
        		else{
        			printf("No es posible dividir por cero\n");
        		}

        		printf("El resultado de A*B es: %f\n", producto);

        		if(factorialA != 0 && factorialB !=0){
        			printf("El factorial de A es: %d y el factorial de B es: %d\n", factorialA, factorialB);
        		}
        		else if(factorialA == 0 && factorialB !=0){
					printf("El factorial de A no se puede calcular por ser un numero decimal, negativo o muy grande para el programa y el factorial de B es: %d\n", factorialB);
				}
				else if(factorialA != 0 && factorialB ==0){
					printf("El factorial de A es: %d y el factorial de B no se puede calcular por ser un numero decimal, negativo o muy grande para el programa\n", factorialA);
				}
				else{
					printf("No se pueden calcular el factorial de A ni de B por ser numeros decimales, negativos o muy grandes para el programa\n");
        		}
        	}
        	else if((flagSeguir == 0)&&(flagPrimerOperador != 0 && flagSegundoOperador != 0)){

        		printf("Primero debe seleccionar la opcion 3 para realizar todas las operaciones\n");
        	}

        	else if((flagSeguir == 0)&&(flagPrimerOperador == 0 && flagSegundoOperador != 0)){
				printf("Primero debe ingresar el operador A y luego seleccionar la opcion 3 para realizar todas las operaciones\n");

			}
			else if ((flagSeguir == 0)&&(flagPrimerOperador != 0 && flagSegundoOperador == 0)){
				printf("Primero debe ingresar el operador B y luego seleccionar la opcion 3 para realizar todas las operaciones\n");
			}
			else{
				printf("Primero debe ingresar operador A y operador B y luego seleccionar la opcion 3 para realizar todas las operaciones\n");
        	        	}

	        break;
        case 5:

	        break;
        default:
	        printf("Opcion invalida\n");
	        break;
	}

	} while(opcion != 5);

	printf("Saludos, gracias por usar este programa");

	return EXIT_SUCCESS;
}
