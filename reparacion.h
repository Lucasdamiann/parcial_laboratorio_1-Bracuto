/*
 * reparacion.h
 *
 *  Created on: 14 oct. 2020
 *      Author: Lucasdamiann
 */
#include "electrodomestico.h"

#ifndef REPARACION_H_
#define REPARACION_H_
#define LEN_TIEMPO 4
#define LEN_SERVICIO 25
#define LEN_FECHA 4
#define QTY_SRV 4
#define LRG_NAME 51
#define QTY_CL 6

typedef struct
    {
	int dia;
	int mes;
	int anio;
    } eFecha;

typedef struct
    {
	int idCliente;
	char nombreCliente[LRG_NAME];
	char apellidoCliente[LRG_NAME];
	int isEmpty;
    } eCliente;

typedef struct
    {
	int idServicio;
	char descServicio[LEN_SERVICIO];
	int precio;
    } eServicio;

typedef struct
    {
	int id;
	int idCliente;
	int numSerieElectro; //validar
	int idServ; //validar
	eFecha fecha;
	int isEmpty;
    } eReparacion;
int inicializarReparacion(eReparacion *list, int len);
void hardcodeoServicio(eServicio *list);
int printServicios(eServicio *list, int len);
int agregarReparacion(eReparacion *list, int len, int idRep, int cliente,
	int servicio, int numSerieElectro);
int get_FreeSpaceR(eReparacion *list, int len);
void hardcodeoCliente(eCliente *list, int len);
int printClientes(eCliente *lista, int len);
int printReparaciones(eReparacion *lista, int len);
int validaFecha(eReparacion *list,int index,int len);
#endif /* REPARACION_H_ */

