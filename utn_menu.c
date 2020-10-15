/*
 * menu.c
 *
 *  Created on: 26 sep. 2020
 *      Author: Lucasdamiann
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int menuOpciones()
    {

    printf("\n<<BIENVENIDO AL MENU>>\n");
    char respuesta = 'r';
    int comando;
    int flag1 = 0;

    //ACA FUNCION DE INICIALIZAR ARRAY initEmployees();
    do
	{
	printf(
		"\n#1-OPCION.\n#2-OPCION.\n#3-OPCION.\n#4-OPCION.\n#5-OPCION.\n");
	utn_getNumber(&comando, "\nINGRESE OPCION: ", "\nMENSAJE DE ERROR\n", 1,
		6, 2);
	switch (comando)
	    {
	case 1:
	    system("cls");
	    printf("\nNOMBRE DE SECCION DE CASE 1\n");
	    if ('CONDICION DE VALIDACION DE DATOS DE ENTRADA')
		{
		'HACER ALGO';
		}
	    else
		{
		printf("\nMENSAJE DE ERROR\n");
		}

	    flag1 = 1;
	    break;
	case 2:
	    if (flag1 == 1)
		{
		system("cls");
		printf("\nNOMBRE DE SECCION DE CASE 2\n");

		if ('CONDICION DE VALIDACION DE DATOS')
		    {

		    'HACER ALG0';

		    }
		else
		    {
		    printf("\nMENSAJE DE ERROR\n");
		    break;
		    }
		utn_getNumber(&comando, "\nINGRESE OPCION: ",
			"\nMENSAJE DE ERROR\n", 1, 5, 2);
		switch (comando)
		    {
		case 1:
		    printf("\nNOMBRE DE SECCION SE SUBMENU\n");
		    'HACRE ALGO';

		    break;
		case 2:
		    printf("\nNOMBRE DE SECCION DOS DE SUBMENU \n");
		    'HACER ALGO';
		    break;
		case 3:
		    printf("\nNOMBRE DE SECCION TRES DE SUBMENU\n");
		    'HACER ALGO';
		    break;
		case 4:
		    printf("\nNOMBRE DE SECCION CUATRO DE SUBMENU\n");
		    'HACER ALGO';
		    break;
		case 5:
		    printf("\nAVISO DE RETORNO A MENU PRINCIPAL\n");
		    system("pause");
		    break;
		    }

		}
	    else
		{
		printf(
			"\nMENSAJE DE ERROR SI NO CUMPLIO CON LA CONDICION DEL FLAG\n");
		}

	    break;
	case 3:
	    if (flag1 == 1)
		{
		system("cls");
		printf("\nNOMBRE DE SECCION DE CASE 3\n");
		'FUNCION DE VALIDACION DE DATO INGRESADO';
		if ('CONDICION DE DATO')
		    {
		    'HACER ALGO';
		    utn_getNumber(&comando, "\nINGRESE OPCION PARA EL SUBMENU: ",
			    "\nMENSAJE DE ERROR\n", 1, 6, 2);
		    }
		else
		    {
		    printf("\nMENSAJE DE ERROR DEL DATO OBTENIDO\n");
		    break;
		    }

		switch (comando)
		    {
		case 1:
		    'HACER ALGO';
		    break;
		case 2:
		    'HACER ALGO';
		    break;
		    }
		}
	    else
		{
		printf(
			"\nMENSAJE DE ERROR SI NO SE CUMPLE LA CONDICION DEL FLAG\n");
		}
	    break;

	case 4:
	    if (flag1 == 1)
		{
		system("cls");
		printf("\nNOMBRE DE SECCION CASE 4\n");
		utn_getNumber(&comando, "\nOPCION A INGRESAR EN SUBMENU: ",
			"\nMENSAJE DE ERROR\n", 1, 2, 2);
		switch (comando)
		    {
		case 1:
		    if ('CONDICION DE COMPROBACION DE DATO')
			{
			'HACER ALGO';
			}
		    else
			{
			printf("\nMENSAJE DE ERROR\n");
			}
		    break;
		case 2:

		    if ('CONDICION DE COMPROBACION DE DATO')
			{
			'HACER ALGO';
			}
		    else
			{
			'HACER ALGO';

			}

		    break;
		    }

		break;
		case 5:
		printf("\nMENSAJE DE SALIDA DEL MENU\n");
		system("pause");
		respuesta = 'j';
		break;
		default:
		printf(
			"\nMENSAJE DE ERROR SI SELECCIONA UNA OPCION FUERA DEL SWITCH PRINCIPAL\n");
		break;
		}
	    else
		{
		printf("\nMENSAJE DE ERROR SI NO SE CUMPLE EL FLAG\n");
		}
	    }

	}
    while (respuesta == 'r');

    return 0;
    }

