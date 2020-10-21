/*
 * menu.c
 *
 *  Created on: 26 sep. 2020
 *      Author: Lucasdamiann
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "reparacion.h"
#include "cliente.h"
#include "electrodomestico.h"

int menuOpciones()
    {

    printf("\n<<BIENVENIDO AL MENU>>\n");
    char respuesta = 'r';
    int comando;
    int flag1 = 0;
    int flag2 = 0;
    int identify = 0;
    int identifyRep = 0;
    int identifyCli = 100;
    int index;
    int contadorElectro = 0;
    eCliente cliente[QTY_ELEC];
    eReparacion reparacion[QTY_ELEC];
    eServicio auxServ;
    eServicio servicios[QTY_SRV];
    eMarca auxMarca;
    eMarca marca[QTY_MARCA];
    eElectrodomestico auxElectro;
    eElectrodomestico electro[QTY_ELEC];
    inicializarEstructura(electro, QTY_ELEC);
    inicializarReparacion(reparacion, QTY_ELEC);
    hardcodeoServicio(servicios);
    hardcodeoMarcas(marca);
    hardcodeoCliente(cliente, QTY_ELEC);
    do
	{
	printf(
		"\n#1-ALTA DE ELECTRODOMESTICO.\n#2-MODIFICAR ELECTRODOMESTICO.\n#3-BAJA DE ELECTRODOMESTICO.\n#4-LISTAR ELECTRODOMESTICOS.\n#5-LISTAR MARCAS.\n#6-LISTAR SERVICIOS.\n#7-ALTA DE REPARACION.\n#8-LISTAR REPARACIONES.\n#9-LISTAR CLIENTES.\n#0-SALIR.\n");
	utn_getNumber(&comando, "\nINGRESE OPCION: ", "\nOPCION INCORRECTA\n",
		0, 9, 2);
	switch (comando)
	    {
	case 1:
	    system("cls");
	    printf("\nSECCION DE ALTA DE CLIENTE\n");
	    if ((utn_getNumber(&auxElectro.modelo, "\nINGRESE MODELO: ",
		    "\nALGO SALIO MAL\n", 1900, 2020, 2)) == 0
		    && (utn_getNumber(&auxElectro.numSerie,
			    "\nINGRESE LOS ULTIMOS 4 CARACTERES DEL NUMERO DE SERIE: ",
			    "\nALGO SALIO MAL\n", 0, 9999, 2)) == 0)
		{
		system("cls");
		printMarcas(marca, QTY_MARCA);
		utn_getNumber(&auxMarca.idMarca, "\n\nINGRESE ID DE MARCA: ",
			"ALGO SALIO MAL\n", 1000, 1004, 2);
		get_ID(identify, &identify);
		agregarUsuario(electro, QTY_ELEC, identify, auxElectro.numSerie,
			auxElectro.modelo);
		contadorElectro++;
		index = findElectroById(electro, QTY_ELEC, identify);
		system("cls");
		printf("ELEMENTO ALMACENADO\n");
		printOneElectro(electro, marca, index, auxMarca.idMarca);
		printf("\n\n");
		system("pause");
		system("cls");
		}

	    flag1 = 1;
	    break;
	case 2:
	    if (flag1 == 1)
		{
		system("cls");
		printf("\nMODIFICAR ELECTRODOMESTICO\n\n");
		printf(
			"\n#1-MODIFICAR N° DE SERIE.\n#2-MODIFICAR MODELO.\n#3-SALIR.\n");
		utn_getNumber(&comando, "\nINGRESE OPCION: ",
			"\nOPCION INCORRECTA\n", 1, 3, 2);
		if (comando == 1 && comando == 2 && comando == 3)
		    {
		    printElectros(electro, QTY_ELEC);
		    utn_getNumber(&identify, "\nINGRESE ID:",
			    "\nOPCION INCORRECTA", 1, 3000, 2);
		    index = findElectroById(electro, QTY_ELEC, identify);
		    }
		if (index != -1)
		    {
		    switch (comando)
			{
		    case 1:
			system("cls");
			printf("\nMODIFICACION DE NUMERO DE SERIE\n");
			utn_getNumber(&electro[index].numSerie,
				"INGRESE NUMERO DE SERIE NUEVO: ",
				"ALGO SALIO MAL\n", 0, 100000, 2);
			system("cls");
			printf("\nMODIFICACION REALIZADA\n");
			printOneElectro(electro, marca, index,
				auxMarca.idMarca);
			printf("\n\n");
			system("PAUSE");
			system("cls");
			break;
		    case 2:
			system("cls");
			printf("\nMODIFICACION DE MODELO \n");
			utn_getNumber(&electro[index].modelo,
				"INGRESE MODELO NUEVO: ", "\nALGO SALIO MAL\n",
				1900, 2020, 2);
			system("cls");
			printf("\n¡MODIFICACION REALIZADA!\n");
			printOneElectro(electro, marca, index,
				auxMarca.idMarca);
			printf("\n\n");
			system("PAUSE");
			system("cls");
			break;

		    case 3:
			system("cls");
			printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
			printf("\n\n");
			system("pause");
			system("cls");
			break;
			}
		    }
		else
		    {
		    printf("\nESE ID NO ESTA REGISTRADO O FUE DADO DE BAJA\n");
		    printf("\n\n");
		    system("PAUSE");
		    system("cls");
		    }
		}
	    else
		{
		printf(
			"\nDEBE INGRESAR UN ELECTRODOMESTICO PARA PODER MODIFICARLO\n");
		printf("\n\n");
		system("PAUSE");
		system("cls");
		}

	    break;
	case 3:
	    if (flag1 == 1)
		{
		system("cls");
		printf("\nELIMINAR ELECTRODOMESTICO\n");
		printf("\n#1-ELIMINAR ELECTRODOMESTICO.\n#2-SALIR.\n");
		utn_getNumber(&comando, "\nINGRESE OPCION: ",
			"\nOPCION INCORRECTA\n", 1, 2, 2);
		if (comando != 2)
		    {
		    system("cls");
		    printElectros(electro, QTY_ELEC);
		    utn_getNumber(&identify, "\nINGRESE ID:",
			    "\nOPCION INCORRECTA", 1, 3000, 2);
		    index = findElectroById(electro, QTY_ELEC, identify);
		    }
		if (index != -1)
		    {
		    switch (comando)
			{
		    case 1:
			system("cls");
			printf("\nVA A ELIMINAR A:\n ");
			printOneElectro(electro, marca, index,
				auxMarca.idMarca);
			printf("\n#1-ELIMINAR.\n#2-CANCELAR.\n");
			utn_getNumber(&comando, "\nINGRESE OPCION: ",
				"\nOPCION INCORRECTA\n", 1, 2, 2);
			switch (comando)
			    {
			case 1:
			    system("cls");
			    removeElectro(electro, QTY_ELEC, identify);
			    contadorElectro--;
			    printf("\nELECTRODOMESTICO ELIMINADO\n");
			    printf("\n\n");
			    system("pause");
			    system("cls");
			    break;
			case 2:
			    system("cls");
			    printf("\nELIMINAR CANCELADO.\n");
			    printf("\n\n");
			    system("pause");
			    system("cls");
			    break;
			    }
			break;
		    case 2:
			system("cls");
			printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
			printf("\n\n");
			system("PAUSE");

			system("cls");
			break;
			}
		    }
		else
		    {

		    printf("\nESE ID NO ESTA REGISTRADO O FUE DADO DE BAJA\n");
		    printf("\n\n");
		    system("PAUSE");
		    system("cls");
		    }
		}
	    else
		{

		printf(
			"\nMENSAJE DE ERROR SI NO SE CUMPLE LA CONDICION DEL FLAG\n");
		printf("\n\n");
		system("PAUSE");
		system("cls");
		}

	    break;

	case 4:
	    if (flag1 == 1)
		{
		system("cls");
		printf("\nMOSTRAR ELECTRODOMESTICOS\n");

		printf("\n#1-MOSTRAR ELECTRODOMESTICOS.\n#2-SALIR.\n");

		utn_getNumber(&comando, "\nINGRESE OPCION: ",
			"\nALGO SALIO MAL\n", 1, 2, 2);

		switch (comando)
		    {
		case 1:
		    system("cls");
		    if (contadorElectro > 0)
			{
			printf("SECCION MOSTRAR ELECTRODOMESTICOS\n");
			ordenaElectrosConCriterio(electro, QTY_ELEC, 1);
			printElectros(electro, QTY_ELEC);
			printf("\n\n");
			system("PAUSE");
			system("cls");
			}
		    else
			{

			printf("\nNO HAY ELECTRODOMESTICOS PARA MOSTRAR\n");
			system("PAUSE");
			system("cls");
			}
		    break;
		case 2:
		    system("cls");
		    printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
		    printf("\n\n");
		    system("PAUSE");

		    system("cls");
		    break;
		    }
		}
	    else
		{

		printf(
			"\nDEBE INGRESAR AL MENOS UN ELECTRODOMESTICO PARA PODER MOSTRAR\n");
		printf("\n\n");
		system("PAUSE");
		system("cls");
		}

	    break;
	case 5:
	    system("cls");
	    printf("SECCION MOSTRAR MARCAS\n");
	    printMarcas(marca, QTY_MARCA);
	    printf("\n\n");
	    system("pause");
	    system("cls");
	    break;
	case 6:
	    system("cls");
	    printf("SECCION MOSTRAR SERVICIOS\n");
	    printServicios(servicios, QTY_SRV);
	    printf("\n\n");
	    system("pause");
	    system("cls");
	    break;
	case 7:
	    if (flag1 == 1)
		{
		system("cls");
		printf("\nSECCION ALTA DE REPARACION\n");
		printf("\n#1-ELEGIR ELECTRODOMESTICO.\n#2-SALIR.\n");
		utn_getNumber(&comando, "\nINGRESE OPCION: ",
			"\nALGO SALIO MAL\n", 1, 2, 2);
		system("cls");
		switch (comando)
		    {
		case 1:
		    system("cls");
		    get_ID(identifyRep, &identifyRep);
		    printElectros(electro, QTY_ELEC);
		    utn_getNumber(&auxElectro.idElectro,
			    "\nINGRESE ID DE ELECTRODOMESTICO: ",
			    "\nID INEXISTENTE\n", 1, 3000, 2);
		    system("cls");
		    printServicios(servicios, QTY_SRV);
		    utn_getNumber(&auxServ.idServicio,
			    "\nINGRESE ID DE SERVICIO: ", "\nID INEXISTENTE\n",
			    20000, 20003, 2);
		    system("cls");
		    get_ID(identifyCli, &identifyCli);
		    printf("\nINGRESE FECHA DE ALTA\n");
		    agregarReparacion(reparacion, QTY_ELEC, identifyRep,
			    identifyCli, auxServ.idServicio,
			    auxElectro.idElectro);
		    flag2 = 1;
		    printf("\n\n");
		    system("pause");
		    system("cls");
		    break;
		case 2:
		    system("cls");

		    printf("\nVOLVIENDO AL MENU PRINCIPAL\n");
		    printf("\n\n");
		    system("pause");
		    system("cls");
		    break;
		    }
		}
	    else
		{

		printf(
			"\nDEBE INGRESAR AL MENOS UN ELECTRODOMESTICO PARA PODER REPARAR\n");
		printf("\n\n");
		system("PAUSE");
		system("cls");
		}

	    break;
	case 8:
	    if (flag2 == 1)
		{
		system("cls");
		printReparaciones(reparacion, QTY_ELEC);
		printf("\n\n");
		system("PAUSE");
		system("cls");
		}
	    else
		{
		printf("\nDEBE INGRESAR UNA REPARACION PARA LISTAR\n");
		printf("\n\n");
		system("PAUSE");
		system("cls");
		}
	    break;
	case 9:
	    system("cls");
	    printClientes(cliente, QTY_CL);
	    printf("\n\n");
	    system("PAUSE");
	    system("cls");
	    break;
	case 0:
	    system("cls");
	    printf("\nSALIENDO DEL PROGRAMA\n\n¡HASTA LUEGO!\n");
	    printf("\n\n");
	    system("PAUSE");
	    system("cls");
	    respuesta = 'j';
	    break;
	    }

	}
    while (respuesta == 'r');

    return 0;
    }

