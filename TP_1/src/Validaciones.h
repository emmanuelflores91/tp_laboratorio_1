#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_

#include <stdio.h>

/// @brief = Pide un entero y se asegura que est� en un rango deseado.
/// @param mensaje = El mensaje al pedir el entero.
/// @param minimo = El valor m�nimo aceptado.
/// @param maximo = El valor m�ximo aceptado.
/// @return = Retorna el entero validado.
int PedirEnteroYValidarlo (char mensaje [], int minimo, int maximo);

/// @brief = Pide un flotante y se asegura que est� en un rango deseado.
/// @param mensaje = El mensaje al pedir el flotante.
/// @param minimo = El valor m�nimo aceptado.
/// @param maximo = El valor m�ximo aceptado.
/// @return = Retorna el flotante validado.
float PedirFlotanteYValidarlo (char mensaje [], float minimo, float maximo);

/// @brief = No permite el ingreso de un n�mero entero espec�fico.
/// @param numeroIngresado = El n�mero que se ingresa el cual se va a comparar con el n�mero excluido.
/// @param numeroExcluido = El n�mero que no se permite ingresar
/// @return = Retorna el n�mero ingresado siempre y cuando sea distinto al excluido.
int ExcluirEntero (int numeroIngresado, int numeroExcluido);

/// @brief = No permite el ingreso de un n�mero flotante espec�fico.
/// @param numeroIngresado = El n�mero que se ingresa el cual se va a comparar con el n�mero excluido.
/// @param numeroExcluido = El n�mero que no se permite ingresar
/// @return = Retorna el n�mero ingresado siempre y cuando sea distinto al excluido.
float ExcluirFlotante (float numeroIngresado, float numeroExcluido);

/// @brief = Comprueba si un numero ingresado es un entero o un decimal.
/// @param numeroIngresado = El numero a comprobar.
/// @return = Retorna el valor 1 si el numero es entero, y el valor 0 si el numero es decimal.
int ComprobarSiEsEntero (float numeroIngresado);



#endif /* VALIDACIONES_H_ */
