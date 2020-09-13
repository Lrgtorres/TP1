/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioH.h"


int main(void)
{
	setbuf(stdout,NULL);

	int opciones;
	int numeroA;
	int numeroB;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	float resultadoDivision;
	int resultadoFactoreo1;
	int resultadoFactoreo2;

	while(opciones !=5)
	{
	 utn_getMenu(&opciones,"Opciones?\n","Error, eso no es una opcion\n",2);

		switch(opciones)
		{
			case 1:
				numeroA = utn_getNumero(numeroA);
				break;
			case 2:
				numeroB = utn_getNumero(numeroB);
				break;
			case 3:
				resultadoSuma= sumaFuncion(numeroA,numeroB);
				resultadoResta = restaFuncion(numeroA,numeroB);
				resultadoMultiplicacion = multiplicaFuncion(numeroA,numeroB);
				resultadoDivision = divisionFuncion(numeroA,numeroB);
				resultadoFactoreo1 = factoreoFuncion(numeroA);
				resultadoFactoreo2 = factoreoFuncion(numeroB);

				break;

			case 4:
				printf("El resultado de la suma A+B : %d\n",resultadoSuma);
				printf("el resultado de la resta A-B es :%d\n",resultadoResta);
				printf("el restulado de la multiplicacion A*B es : %d\n",resultadoMultiplicacion);
				printf("el resultado de la division A/B es : %2f\n",resultadoDivision);
				printf("el resultado del factoreo A es : %d\n",resultadoFactoreo1);
				printf("el resultado del factoreo B es : %d\n",resultadoFactoreo2);

				break;

		}



	}

	return EXIT_SUCCESS;
}
