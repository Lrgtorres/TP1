/*
 * utn_biblioC.c
 *
 *  Created on: 12 sep. 2020
 *      Author: antarc
 */


#include <stdio.h>
#include <stdlib.h>


/**
 * \brief - Le pedimos un numero al usuario.
 * \param - int* pResultado - Puntero para el numero.
 * \param - char* mensaje - muestra mensaje.
 * \param - char* mensajeError - mensaje de error para el usuario en caso de ingresar mal los dato.
 * \param - int intentos - reintentos para ingresar bien los datos.
 * \return - valor 0 en caso de exito con la funcion o -1 en caso de error.
 */
int utn_getNumero(int * pResultado,char * mensaje,char * mensajeError ,int reintentos)
{
	int retorno= -1;
	int resultado;
	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && reintentos >=0)
	{
		while(reintentos>=0)
		{
			printf("%s",mensaje);
			fflush(stdin);
			resultado = scanf("%d",&bufferInt);

			if(resultado !=0)
			{
				*pResultado=bufferInt;
				retorno =0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos --;
			}
		}

	}

	else
	{
		printf("Error, por favor reingrese numeros \n");
	}

	return retorno;
}

/**
 * \brief - Realizamos la funcion para el menu.
 * \param - char* pResultado - Puntero para el numero.
 * \param - char* mensaje - muestra mensaje.
 * \param - char* mensajeError - mensaje de error para el usuario en caso de ingresar mal los dato.
 * \param - int intentos - reintentos para ingresar bien los datos.
 * \return - valor 0 en caso de exito con la funcion o -1 en caso de error.
 */

int utn_Menu (int* pResultado,char * mensaje,char * mensajeError,int reintentos)
{
	int retorno= -1;
	int resultado;
	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && reintentos >=0)
	{
		while(reintentos>=0)
		{
			printf("%s",mensaje);
			fflush(stdin);
			resultado = scanf("%d",&bufferInt);

			if(resultado !=0)
			{
				*pResultado=bufferInt;
				retorno =0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos --;
			}
		}

	}

	else
	{
		printf("Error, por favor reingrese numeros \n");
	}

		printf ("1 - Ingrese numero A \n");
		printf ("2 - Ingrese numero B \n");
		printf ("3 - Operaciones \n");
		printf ("4 - Resultados \n");
		printf ("5 - Salid de la calculadora \n");
	return retorno;
}

/**
 * \brief - Funcion para sumar dos numeros.
 * \param - int operador1 - para tomar el numero 1.
 * \param - int operador2 - para tomar al numero 2.
  * \return - resultado de la suma.
 */

int sumaFuncion(int operador1, int operador2)
{
	int resultado;

	resultado= operador1 + operador2;
	return resultado;
}

/**
 * \brief - Funcion para restar dos numeros.
 * \param - int operador1 - para tomar el numero 1.
 * \param - int operador2 - para tomar al numero 2.
  * \return - resultado de la resta.
 */
int restaFuncion(int operador1, int operador2)
{
	int resultado;

		resultado= operador1 - operador2;
		return resultado;
}

/**
 * \brief - Funcion para multiplicar dos numeros.
 * \param - int operador1 - para tomar el numero 1.
 * \param - int operador2 - para tomar al numero 2.
  * \return - resultado de la operacion.
 */

int multiplicaFuncion(int operador1, int operador2)
{
	int resultado;

	resultado = operador1 * operador2;
	return resultado;

}

/**
 * \brief - Funcion para dividir dos numeros.
 * \param - int operador1 - para tomar el numero 1.
 * \param - int operador2 - para tomar al numero 2.
 * \param - *pResultado - puntero
 * \return - resultado de la diviion.
 */

float divisionFuncion(float* pResultado,float operador1, float operador2)
{
	float resultadoDiv;
	float retorno = -1;

	if(pResultado != NULL && operador2 !=0)
	{
		resultadoDiv = operador1 / operador2;
		*pResultado= resultadoDiv;
		retorno = 0;
	}
	return retorno;
}

/**
 * \brief - Funcion para factorear dos numeros.
 * \param - int *pPresultado -
 * \param - int operador1 - toma numero para el factoreo
  * \return - resultado del factoreo.
 **/

int factoreoFuncion( int* pResultado,int operadorFactor)
{
	int numero = 1;
	int retorno = -1;
	int i;

	if(pResultado !=NULL && operadorFactor > 0)
	{
		for(i=1; i <= operadorFactor; i++)
		{
			numero = numero * i ;
			*pResultado = numero;
			retorno = 0;
		}

	}
	else
	{
	 if(operadorFactor==0)
	 {
		 *pResultado = 1;
		 retorno = 0;
	 }
	 else
	 {
		 printf("Error");
	 }
	}
	return retorno;
}


