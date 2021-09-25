#include <stdio.h>
#include "OperacionesMatematicas.h"

double SumarDosNumeros (double A, double B)
{
	double resultadoSuma;

	resultadoSuma = A + B;

	return resultadoSuma;
}

double RestarDosNumeros (double A, double B)
{
	double resultadoResta;

	resultadoResta = A - B;

	return resultadoResta;
}

double DividirUnNumeroPorOtro (double A, double B)
{
	double resultadoDivision;

	resultadoDivision = A / B;

	return resultadoDivision;
}

double MultiplicarDosNumeros (double A, double B)
{
	double resultadoMultiplicacion;

	resultadoMultiplicacion = A * B;

	return resultadoMultiplicacion;
}

double CalcularFactorialDeUnNumero (double numero)
{
	double resultadoFactorial;
	int i;
	resultadoFactorial = 1;

	if (numero > 0)
	{
		for(i= numero; i > 0; i--)
		{
			resultadoFactorial *=  i;
		}
	}

	return resultadoFactorial;
}

