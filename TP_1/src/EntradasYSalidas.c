#include <stdio.h>
#include <ctype.h>

#include "EntradasYSalidas.h"



int PedirEntero (char mensaje [])

{
	int numero;
	printf("%s", mensaje);
	scanf("%d", &numero);
	return numero;
}

float PedirFlotante (char mensaje [])

{	float numero;
	printf("%s", mensaje);
	scanf("%f", &numero);
	return numero;
}

double PedirFlotanteGrande (char mensaje[])
{
    double numero;
	printf("%s", mensaje);
	scanf("%lf", &numero);
	return numero;
}

int PedirCaracter (char mensaje [])
{
	char caracter;
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%c", &caracter);
	caracter = toupper(caracter);
	return caracter;
}

void ImprimirFlotante (char mensaje [], float flotanteParaImprimir)
{
	printf("%s %.2f", mensaje, flotanteParaImprimir);
}

void ImprimirEntero (char mensaje [], int enteroParaImprimir)
{
	printf("%s %d", mensaje, enteroParaImprimir);
}

void ImprimirCaracter (char mensaje [], char caracterParaImprimir)
{
	printf("%s %c", mensaje, caracterParaImprimir);
}


