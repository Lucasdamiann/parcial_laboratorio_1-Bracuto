/*
 * electrodomestico.h
 *
 *  Created on: 14 oct. 2020
 *      Author: Lucasdamiann
 */

#ifndef ELECTRODOMESTICO_H_
#define ELECTRODOMESTICO_H_
#define DESC 10
#define QTY_ELEC 3000
#define QTY_MARCA 5

typedef struct
    {
	int idMarca;
	char descripcion[DESC];
	int isEmpty;
    } eMarca;

typedef struct
    {
	int idElectro;
	int numSerie;
	int idMarca; //validar
	int modelo;
	int isEmpty;
    } eElectrodomestico;

int inicializarElectros(eElectrodomestico *list, int len);
int agregarElectro(eElectrodomestico *list, int len, int id, int serie,
	int modelo);
void hardcodeoMarcas(eMarca *lista);
int printElectros(eElectrodomestico *list, int len);
int printMarcas(eMarca *lista, int len);
int printOneElectro(eElectrodomestico *list, eMarca *lista, int index,int id);
int removeElectro(eElectrodomestico *list, int len, int id);
int ordenaElectrosConCriterio(eElectrodomestico *list, int len, int order);
#endif /* ELECTRODOMESTICO_H_ */
