/*
 * fecha.c
 *
 *  Created on: 14 oct. 2020
 *      Author: Lucasdamiann
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int getFecha(int dia, int mes,int anio,char mensaje1[],char mensaje2[],char mensaje3[],char mensajeError[],int reintentos,char fecha[])
    {
    int ret=-1;
    char buffer[11];
    if(fecha != NULL && mensaje1 !=NULL && mensaje2 !=NULL && mensaje3 !=NULL && mensajeError != NULL)
	{
	    printf('%s',mensaje1);
	    printf('%s',mensaje2);
	    printf('%s',mensaje3);

	    if ((dia> 0 && dia < 32) && (mes> 0 && mes < 13) && (anio> 1900 && anio < 2021 ))
		{

		sprintf(buffer, '%d', dia);
		sprintf(buffer, '%d', mes);
		sprintf(buffer, '%d', anio);
		strncpy(fecha,buffer,11);



		ret = 0;

		}
	}

    return ret;
    }
