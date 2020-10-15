/*
 * main.c
 *
 *  Created on: 26 sep. 2020
 *      Author: Lucasdamiann
 */
#include <stdio.h>
#include <stdlib.h>
#include "electrodomestico.h"
#include "utn_menu.h"
#include "reparacion.h"
#include "utn.h"
#include "fecha.h"


int main()
{
    int dia;
    int mes;
    int anio;
    eFecha auxiliar;
    char fecha[11];
    getFecha(dia, mes, anio, 'Ingrese dia', 'Ingrese mes', 'Ingrese año', 'Ingrese correctamente', 3, fecha);
    //eElectrodomestico auxiliar;
    //inicializarEstructura(auxiliar, LEN);
    //menuOpciones();

return 0;
}


