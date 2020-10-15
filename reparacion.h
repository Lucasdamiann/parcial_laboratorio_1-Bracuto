/*
 * reparacion.h
 *
 *  Created on: 14 oct. 2020
 *      Author: Lucasdamiann
 */

#ifndef REPARACION_H_
#define REPARACION_H_
#include "fecha.h";
typedef struct
    {
	int id;
	int serie;
	int idServicio;
	eFecha fecha;
	int isEmpty;
    } eReparacion;


#endif /* REPARACION_H_ */
