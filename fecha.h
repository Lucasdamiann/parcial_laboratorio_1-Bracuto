/*
 * fecha.h
 *
 *  Created on: 14 oct. 2020
 *      Author: Lucasdamiann
 */

#ifndef FECHA_H_
#define FECHA_H_
typedef struct
    {
	int dia;
	int mes;
	int anio;
    } eFecha;

int getFecha(int dia, int mes,int anio,char mensaje1[],char mensaje2[],char mensaje3[],char mensajeError[],int reintentos,char fecha[]);


#endif /* FECHA_H_ */
