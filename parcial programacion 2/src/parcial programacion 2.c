/*
 ============================================================================
 Name        : parcial.c
 Author      : Pazos Ezequiel
 Description : recuperatorio parcial de programacion
 ============================================================================

1. Crear una función llamada aplicarDescuento que reciba como
parámetro el precio de un producto y devuelva el valor del
producto con un descuento del 5%. Realizar la llamada desde el main. *

2. Crear una función que se llame contarCaracteres que reciba
una cadena de caracteres como primer parámetro y un carácter
como segundo y devuelva la cantidad de veces que ese carácter
aparece en la cadena *

3. Dada la estructura Notebook(id, procesador, marca, precio)
generar una función que permita ordenar un array de dicha
estructura por marca. Ante igualdad de marca deberá ordenarse
por precio. Hardcodear datos y mostrarlos desde el main. *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

float aplicarDescuento(int precio);
int contarCaracteres(char cadena[], char caracter);

typedef struct{
	int id;
	char procesador[20];
	char marca[20];
	float precio;
}eNotebook;

int main(void) {

	setbuf(stdout, NULL);

	int precio = 100;
	float precioConDescuento;
	int repeticiones = 0;
	char cadena[20] = "Pruebaaa";
	char caracter = 'a';

	struct eNotebook notebookAux;

	precioConDescuento = aplicarDescuento(precio);
	printf("El precio original era de: %d\n", precio);
	printf("El precio con descuento es de: %.2f", precioConDescuento);

	repeticiones = contarCaracteres(cadena, caracter);

	printf("\n\nEl caracter  '%c' se repitio en la cadena '%d' veces", caracter, repeticiones);
	return EXIT_SUCCESS;
}

float aplicarDescuento(int precio)
{
	float descuento;
	float precioConDescuento;

	descuento = (float) (5 * precio)/100;
	precioConDescuento = precio - descuento;

	return precioConDescuento;
}

int contarCaracteres(char cadena[], char caracter)
{
	int cantidadRepeticiones = 0;
	int largo;

	largo = strlen(cadena);

	for(int i=0; i<largo; i++)
	{
		if(cadena[i] == caracter)
		{
			cantidadRepeticiones++;
		}
	}

	return cantidadRepeticiones;
}

int ordenarPorMarcaPrecio(eNotebook notebookAux, int TAM, int orden)
{
	int TAM

	for(int i=0;i<TAM-1;i++)
	{
		for(int j=i+1;j<TAM;j++)
		{
			if(vec[i]>vec[j])
			{
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
			}
		}
	}
}
