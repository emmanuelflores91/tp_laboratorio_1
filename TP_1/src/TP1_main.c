// Flores Emmanuel David - 1° F

#include <stdio.h>
#include <stdlib.h>
#include "OperacionesMatematicas.h"
#include "EntradasYSalidas.h"
#include "Validaciones.h"

int main()
{
	setbuf(stdout,NULL);
    int opcionIngresada;
    double operandoA;
    double operandoB;
    int banderaA; // Permite identificar si se ingreso el primer operando.
    int banderaB; // Permite identificar si se ingreso el segundo operando.
    int banderaCalculo; // Permite identificar cuando se actualizaron los valores.
    char respuesta;
    double suma;
    double resta;
    double division;
    double multiplicacion;
    double factorialA;
    double factorialB;
    int AesEntero; // Si el primero operando es entero esta variable vale cero, de lo contrario vale uno.
    int BesEntero; // Si el segundo operando es entero esta variable vale cero, de lo contrario vale uno.
    char salir;

    banderaA = 0;
    banderaB = 0;
    banderaCalculo = 0;

    printf("C A L C U L A D O R A \n\n");
    do
    {
		printf("\n.........................................");

		// Este bloque de condicionales identifica si los operandos ya recibieron valores y en dicho caso reemplaza esos valores en pantalla.
		if (banderaA)
		{
			printf("\n1. Ingresar 1er operando (A = %g)\n", operandoA);
		}
		else
		{
			printf("\n1. Ingresar 1er operando (A = x)\n");
		}

		if (banderaB)
		{
			printf("2. Ingresar 2do operando (B = %g)\n", operandoB);
		}
		else
		{
			printf("2. Ingresar 2do operando (B = y)\n");
		}
		printf("3. Calcular todas las operaciones\n");
		printf("4. Informar resultados.\n");
		printf("5. Salir\n");
		printf(".........................................");

		opcionIngresada = PedirEnteroYValidarlo("\nIngrese la opcion deseada.", 1, 5);

		switch (opcionIngresada)
		{
			case 1:
				system ("cls");

				// Comprueba si el operando A ya tiene un valor y le pregunta al usuario si desea reemplazarlo.
				// Si la respuesta es no, sale del switch y vuelve al menu.
				if (banderaA)
				{
					printf("\nEl operando A ya tiene el valor %g, ", operandoA);
					respuesta = PedirCaracter("Desea reemplazarlo? S/N: ");

					if (respuesta != 'S')
					{
						break;
					}
				}

				operandoA = PedirFlotanteGrande ("\nIngrese un valor para A: ");
				banderaCalculo = 0; // Se establece en cero para indicar que se actualizo un valor.
				AesEntero = ComprobarSiEsEntero(operandoA);
				banderaA = 1; // Se establece en uno para indicar que se ingreso un valor.

				/*En caso que el valor para el operando A no cumpla con las limitaciones,
				  se le pregunta al usuario si desea conservar el valor o reemplazarlo */
				while (operandoA < 0 || operandoA > 10 || AesEntero == 0)
				{
					system ("cls");
					respuesta = PedirCaracter("\nNo podra calcular el factorial de decimales, negativos o valores mayores a 10.\nDesea conservar el valor? S/N: ");

					if (respuesta != 'S')
					{
						operandoA = PedirFlotanteGrande ("\nIngrese un valor para A: ");
						banderaCalculo = 0;
						AesEntero = ComprobarSiEsEntero(operandoA);
					}
					else
					{
						break;
					}
				}

			break;

			case 2:
				system ("cls");
				// Comprueba si el operando B ya tiene un valor y le pregunta al usuario si desea reemplazarlo.
				// Si la respuesta es no, sale del switch y vuelve al menu.
				if (banderaB)
				{
					printf("\nEl operando B ya tiene el valor %g, ", operandoB);
					respuesta = PedirCaracter("Desea reemplazarlo? S/N: ");

					if (respuesta != 'S')
					{
						break;
					}
				}
				operandoB = PedirFlotanteGrande ("\nIngrese un valor para B: ");
				banderaCalculo = 0; // Se establece en cero para indicar que se actualizo un valor.
				BesEntero = ComprobarSiEsEntero(operandoB);

				/*En caso que el valor para el operando B no cumpla con las limitaciones,
				se le pregunta al usuario si desea conservar el valor o reemplazarlo */
				while (operandoB < 0 || operandoB == 0 || operandoB > 10 || BesEntero == 0)
				{
					system ("cls");
					if(operandoB < 0 || BesEntero == 0 || operandoB > 10)
					{
						respuesta = PedirCaracter("\nNo podra calcular el factorial de decimales, negativos o valores mayores a 10.\nDesea conservar el valor? S/N: ");
					}
					else
					{
						respuesta = PedirCaracter("\nNo podra calcular la division por cero.\nDesea conservar el valor? S/N: ");
					}

					if (respuesta != 'S')
					{
						operandoB = PedirFlotanteGrande ("\nIngrese un valor para B: ");
						banderaCalculo = 0;
						BesEntero = ComprobarSiEsEntero(operandoB);
					}
					else
					{
						break;
					}
				}
				banderaB = 1; // Se establece en uno para indicar que se ingreso un valor.

			break;

			case 3:
				system ("cls");

				// Si cualquiera de las banderas de los operandos tienen el valor cero es porque falta ingresar un valor.
				if (!banderaA || !banderaB)
				{
					printf("\nERROR. Faltan operandos para poder realizar los calculos.\nDebe ingresar ambos numeros\n");
					break;
				}

				printf("\n\n.........................................");
				printf("\na) Calcular la suma (%g + %g)", operandoA, operandoB);
				printf("\nb) Calcular la resta (%g - %g)", operandoA, operandoB);
				printf("\nc) Calcular la division (%g / %g)", operandoA, operandoB);
				printf("\nd) Calcular la multiplicacion (%g * %g)", operandoA, operandoB);
				printf("\ne) Calcular el factorial (%g!)(%g!)\n", operandoA, operandoB);
				printf(".........................................");


				suma = SumarDosNumeros(operandoA, operandoB);

				resta = RestarDosNumeros(operandoA, operandoB);

				// Solo se realiza la division cuando el operando B no tenga el valor cero.
				if (operandoB != 0)
				{
					division = DividirUnNumeroPorOtro(operandoA, operandoB);
				}

				multiplicacion = MultiplicarDosNumeros(operandoA, operandoB);

				/* Los factoriales se van a calcular solo cuando los valores cumplan con las restricciones.
				 Deben ser enteros positivos menores o iguales a 10. El cero si esta admitido*/
				if (operandoA >= 0 && operandoA <= 10 && AesEntero == 1)
				{
					factorialA = CalcularFactorialDeUnNumero(operandoA);
				}

				if (operandoB >= 0 && operandoB <= 10 && BesEntero == 1)
				{
					factorialB = CalcularFactorialDeUnNumero(operandoB);
				}

				banderaCalculo =1; // Se establece en uno para indicar que se realizaron los calculos con los valores actualizados

			break;

			case 4:
				system ("cls");

				if (!banderaA || !banderaB)  // Si falta alguno de los operando muestra el primer error.
				{
					printf("\nERROR. Faltan operandos para poder informar los resultados.\n");
					break;
				}
				if (!banderaCalculo) // Solo informa los resultados si comprueba que previamente se realizo el calculo.
				{
					printf("\nERROR. Debe calcular antes de informar los resultados.\n");
					break;
				}
				if (banderaA && banderaB)
				{
					printf("\n\n.........................................");
					printf("\na) El resultado de %g + %g es: %g", operandoA, operandoB, suma);
					printf("\nb) El resultado de %g - %g es: %g", operandoA, operandoB, resta);

					if (operandoB == 0)
					{
						printf("\nc) ERROR. No es posible dividir por cero.");
					}
					else
					{
						printf("\nc) El resultado de %g / %g es: %g", operandoA, operandoB, division);
					}

					printf("\nd) El resultado de %g * %g es: %g", operandoA, operandoB, multiplicacion);

					if (operandoA >= 0 && operandoA <= 10 && AesEntero == 1 && operandoB >= 0 && operandoB <= 10 && BesEntero == 1)
					{
						printf("\ne) El factorial de %g es: %g y El factorial de %g es: %g\n", operandoA, factorialA, operandoB, factorialB);
					}
					else
					{
						printf("\ne) ERROR. No se pudo calcular los factoriales.\n");
					}
					printf(".........................................");
				}

			break;

			case 5:
				system ("cls");
				printf("\nHasta pronto. Que tenga un lindo dia.");
			break;
		}

    }while (opcionIngresada != 5);

    salir = PedirCaracter("\n\nToque una tecla para salir: "); //Esta linea es para dejar la consola a la espera y que no se cierre automaticamente
    ImprimirCaracter("", salir); //Esta linea es para evitar el warning por no utilizar la variable "salir".

    return 0;
}
