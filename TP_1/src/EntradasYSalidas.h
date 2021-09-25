#ifndef ENTRADASYSALIDAS_H_
#define ENTRADASYSALIDAS_H_

#include <stdio.h>

/// @brief = Pide un entero y lo retorna.
/// @param mensaje = El mensaje deseado para pedir el número.
/// @return = Retorna el número ingresado.
int PedirEntero (char mensaje []);

/// @brief = Pide un flotante y lo retorna.
/// @param mensaje = El mensaje deseado para pedir el número.
/// @return = Retorna el número ingresado.
float PedirFlotante (char mensaje []);

/// @brief = Pide un double y lo retorna.
/// @param mensaje = El mensaje deseado para pedir el numero.
/// @return = Retorna el numero ingresado.
double PedirFlotanteGrande (char mensaje[]);


/// @brief = Pide un caracter que será la respuesta que elija el usuario.
/// @param mensaje = El mensaje deseado al pedir la respuesta.
/// @return = Retorna el caracter ingresado convertido a mayusculas.
int PedirCaracter (char mensaje []);


/// @brief = Imprime un numero flotante.
/// @param mensaje = El mensaje que se muestra junto con el número.
/// @param flotanteParaImprimir = El número flotante que recibe como parametro.
void ImprimirFlotante (char mensaje [], float flotanteParaImprimir);


/// @brief = Imprime un numero entero.
/// @param mensaje = El mensaje que se muestra junto con el número.
/// @param enteroParaImprimir = El número entero que recibe como parametro.
void ImprimirEntero (char mensaje [], int enteroParaImprimir);

/// @brief = Imprime un caracter.
/// @param mensaje = El mensaje que se muestra junto con el caracter.
/// @param caracterParaImprimir = El caracter que recibe como parametro.
void ImprimirCaracter (char mensaje [], char caracterParaImprimir);







#endif /* ENTRADASYSALIDAS_H_ */
