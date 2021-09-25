#include <stdio.h>

#include "Validaciones.h"
#include "EntradasYSalidas.h"

int PedirEnteroYValidarlo (char mensaje [], int minimo, int maximo)
{
	int numero;

	printf("%s El rango permitido es de %d a %d: ", mensaje, minimo, maximo);
	scanf("%d", &numero);

	while(numero < minimo || numero > maximo)
	{
		printf("\n\nERROR. El rango permitido es de %d a %d\nIntente nuevamente: ", minimo, maximo);
		scanf("%d", &numero);
	}

	return numero;
}

float PedirFlotanteYValidarlo (char mensaje [], float minimo, float maximo)
{
	float numero;

	printf("%s \nEl rango permitido es de %.2f a %.2f: ", mensaje, minimo, maximo);
	scanf("%f", &numero);

	while(numero < minimo || numero > maximo)
	{
		printf("¡ERROR!\nEl rango permitido es de %.2f a %.2f\nIntente nuevamente: ", minimo, maximo);
		scanf("%f", &numero);
	}

	return numero;
}

int ExcluirEntero (int numeroIngresado, int numeroExcluido)
{

		while (numeroIngresado == numeroExcluido)
		{
			printf("\nNo se admite el numero %d", numeroExcluido);
			numeroIngresado = PedirEntero("\nIntente nuevamente: ");
		}
	return numeroIngresado;

}

float ExcluirFlotante (float numeroIngresado, float numeroExcluido)
{

		while (numeroIngresado == numeroExcluido)
		{
			printf("\nNo se admite el numero %.2f", numeroExcluido);
			numeroIngresado = PedirFlotante("\nIntente nuevamente: ");
		}
	return numeroIngresado;

}

int ComprobarSiEsEntero (float numeroIngresado)
{
	int parteEntera;
	float parteDecimal;
	int esEntero;

	esEntero = 1;

	parteEntera = numeroIngresado;
	parteDecimal = numeroIngresado - parteEntera;

	if (parteDecimal > 0)
	{
		esEntero = 0;
	}

	return esEntero;
}



