/*
 * utn_biblioH.h
 *
 *  Created on: 12 sep. 2020
 *      Author: antarc
 */

#ifndef UTN_BIBLIOH_H_
#define UTN_BIBLIOH_H_

int utn_getNumero(int * pResultado,char * mensaje,char * mensajeError ,int reintentos);
int utn_Menu (char * pResultado,char * mensaje,char * mensajeError,int reintentos);
int sumaFuncion(int operador1, int operador2);
int restaFuncion(int operador1, int operador2);
int multiplicaFuncion(int operador1, int operador2);
float divisionFuncion(float* pResultado,int operador1, int operador2);
int factoreoFuncion( int* pResultado,int operadorFactor);



#endif /* UTN_BIBLIOH_H_ */
