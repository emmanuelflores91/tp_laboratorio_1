
#ifndef MYFUNCTIONS_H_
#define MYFUNCTIONS_H_
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


/// @brief Pide un entero y lo retorna por puntero
///
/// @param numero = puntero que devuelve el numero ingresado.
/// @param mensaje = mensaje al pedir el n�mero.
/// @param mensajeError = mensaje en caso de datos erroneos.
/// @param cantidadReintentos = cantidad de veces que se puede volver a ingresar luego de un error.
/// @return -1 en caso de error, 0 en caso que se haya podido realizar la operaci�n.
int PedirEntero (int* numero, char mensaje[], char mensajeError[], int cantidadReintentos);

int PedirEntero2 (int* numero, char mensaje[], char mensajeError[], int cantidadReintentos, int* contadorErrores);

/// @brief Pide un entero en un rango limitado y lo retorna por puntero
///
/// @param numero = puntero que devuelve el numero ingresado.
/// @param mensaje = mensaje al pedir el n�mero.
/// @param mensajeError = mensaje en caso de datos erroneos.
/// @param minimo = valor m�nimo
/// @param maximo = valor m�ximo
/// @param cantidadReintentos = cantidad de veces que se puede volver a ingresar luego de un error.
/// @return -1 en caso de error, 0 en caso que se haya podido realizar la operaci�n.
int PedirEnteroEnRango (int* numero, char mensaje[], char mensajeError[], int minimo, int maximo, int cantidadReintentos);



/// @brief Pide un entero mayor o igual a cero y lo retorna por puntero
///
/// @param numero = puntero que devuelve el numero ingresado.
/// @param mensaje = mensaje al pedir el n�mero.
/// @param mensajeError = mensaje en caso de datos erroneos.
/// @param cantidadIntentos = cantidad de veces que se puede volver a ingresar luego de un error.
/// @return -1 en caso de error, 0 en caso que se haya podido realizar la operaci�n.
int PedirEnteroPositivo (int* numero, char mensaje[], char mensajeError[], int cantidadIntentos);

/// @brief = Pide un double y lo retorna.
/// @param mensaje = El mensaje deseado para pedir el numero.
/// @return = Retorna el numero ingresado.
int PedirFlotanteGrande (double* numero, char mensaje [], char mensajeError[], int cantidadReintentos);


/// @brief = Pide un caracter que ser� la respuesta que elija el usuario.
/// @param mensaje = El mensaje deseado al pedir la respuesta.
/// @return = Retorna el caracter ingresado convertido a mayusculas.
char PedirCaracter (char mensaje []);

/// @brief lee una cadena y en caso que no supere la longitud indicada, la almacena en el puntero.
///
/// @param cadena = la cadena donde se almacenar�n los caracteres.
/// @param longitud = largo m�ximo de la cadena.
/// @return -1 en caso de error, 0 en caso que se haya podido realizar la operaci�n.
int LeerCadena(char cadena[], int longitud);

/// @brief Pide una cadena de caracteres validando que no supere la longitud l�mite.
/// @param cadena = La variable donde se almacena la cadena.
/// @param longitud = el tama�o m�ximo del vector de caracteres.
/// @param cantidadIntentos = cantidad de veces que se puede volver a ingresar luego de un error.
/// @return = -1 en caso de error, 0 si se pudo realizar.
int PedirCadena(char mensaje[], char mensajeError[], char cadena[], int longitud, int cantidadIntentos);

/// @brief Pide una cadena de caracteres validando que no supere la longitud l�mite y que el largo no sea menor al m�nimo.
/// @param cadena = La variable donde se almacena la cadena.
/// @param longitud = el tama�o m�ximo del vector de caracteres.
/// @param minimo = tama�o minimo de la cadena.
/// @return = -1 en caso de error, 0 si se pudo realizar.
int PedirCadenaEnRango(char mensaje [], char mensajeError, char cadena[], int longitud, int minimo);

/// @brief = Imprime un numero flotante.
/// @param mensaje = El mensaje que se muestra junto con el n�mero.
/// @param flotanteParaImprimir = El n�mero flotante que recibe como parametro.
void ImprimirFlotante (char mensaje [], float flotanteParaImprimir);


/// @brief = Imprime un numero entero.
/// @param mensaje = El mensaje que se muestra junto con el n�mero.
/// @param enteroParaImprimir = El n�mero entero que recibe como parametro.
void ImprimirEntero (char mensaje [], int enteroParaImprimir);

/// @brief = Imprime un caracter.
/// @param mensaje = El mensaje que se muestra junto con el caracter.
/// @param caracterParaImprimir = El caracter que recibe como parametro.
void ImprimirCaracter (char mensaje [], char caracterParaImprimir);

/// @brief Imprime un mensaje u el otro en base a un n�mero que recibe.
/// @param mensajeMenos1 = el mensaje en caso de error.
/// @param mensajeCero = el mensaje en caso de realizar la operaci�n.
/// @param estado = rebibe los valores para mostrar un mensaje o el otro.
void ImprimirDosMensajes( int estado, char mensajeMenos1[], char mensajeCero[]);


/// @brief Pide un flotante y lo retorna por puntero
///
/// @param numero = puntero que devuelve el numero ingresado.
/// @param mensaje = mensaje al pedir el n�mero.
/// @param mensajeError = mensaje en caso de datos erroneos.
/// @param cantidadReintentos = cantidad de veces que se puede volver a ingresar luego de un error.
/// @return -1 en caso de error, 0 en caso que se haya podido realizar la operaci�n.
float PedirFlotante (float* numero, char mensaje [], char mensajeError[], int cantidadReintentos);

/// @brief Pide un flotante en un rango limitado y lo retorna por puntero
///
/// @param numero = puntero que devuelve el numero ingresado.
/// @param mensaje = mensaje al pedir el n�mero.
/// @param mensajeError = mensaje en caso de datos erroneos.
/// @param minimo = valor m�nimo
/// @param maximo = valor m�ximo
/// @param cantidadReintentos = cantidad de veces que se puede volver a ingresar luego de un error.
/// @return -1 en caso de error, 0 en caso que se haya podido realizar la operaci�n.
int PedirFlotanteEnRango (float* numero, char mensaje[], char mensajeError[], float minimo, float maximo, int cantidadReintentos);

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
int DistinguirEnteroDeFlotante (float numeroIngresado);

/// @brief verifica que un numero sea un entero v�lido.
/// @param datoIngresado = el n�mero ingresado.
/// @return = 1 en caso verdadero, 0 si es falso.
int ComprobarSiEsEntero (char datoIngresado[]);

/// @brief verifica que un numero sea un decimal v�lido.
/// @param datoIngresado = el n�mero ingresado.
/// @return = 1 en caso verdadero, 0 si es falso.
int ComprobarSiEsFlotante (char datoIngresado[]);

/// @brief Verifica que el nombre ingresado no contenga caracteres especiales, n�meros, s�lo espacios o s�lo enters
///
/// @param datoIngresado = el nombre ingresado
/// @return = 1 en caso verdadero, 0 si es falso.
int ComprobarSiEsNombre (char datoIngresado[]);


/// @brief = Realiza la suma de dos numeros y retorna el resultado.
/// @param A = El primer numero ingresado.
/// @param B = El segundo numero ingresado.
/// @return = El resultado de la suma.
double SumarDosNumeros (double A, double B);

/// @brief = Realiza la resta de dos numeros y retorna el resultado.
/// @param A = El primer numero ingresado.
/// @param B = El segundo numero ingresado.
/// @return = El resultado de la resta.
double RestarDosNumeros (double A, double B);

/// @brief = Realiza la divisi�n de un numero por otro y retorna el resultado.
/// @param A = El primer numero ingresado.
/// @param B = El segundo numero ingresado.
/// @return = El resultado de la divisi�n.
double DividirUnNumeroPorOtro (double A, double B);

/// @brief = Realiza la multiplicaci�n de dos n�meros y retorna el resultado.
/// @param A = El primer numero ingresado.
/// @param B = El segundo numero ingresado.
/// @return = El resultado de la multiplicaci�n.
double MultiplicarDosNumeros (double A, double B);

/// @brief = Calcula el factorial de un numero y lo retorna.
/// @param numero = El numero ingresado.
/// @return = Retorna el resultado del factorial.
double CalcularFactorialDeUnNumero (double numero);

/// @brief = Asigna valor a todos las posiciones de un vector.
/// @param vector = El nombre del vector que se quiere inicializar.
/// @param longitud = La cantidad de posiciones del vector anterior.
/// @param valorParaInicializar = El valor deseado que se le quiere asignar a cada posici�n del vector.
void InicializarVectorDeEnteros (int vector[], int longitud, int valorParaInicializar);


/// @brief = Permite cargar un vector con numeros enteros de forma secuencial.
/// @param vector = La variable de tipo array que se desea cargar.
/// @param longitud = La longitud del vector a cargar.
/// @param mensaje = El mensaje que se muestra al pedir los valores.
void CargaSecuencialVectorDeEnteros (int vector[], int longitud, char mensaje[]);


/// @brief = Permite cargar un vector con numeros racionales de forma secuencial.
/// @param vector = La variable de tipo array que se desea cargar.
/// @param longitud = La longitud del vector a cargar.
/// @param mensaje = El mensaje que se muestra al pedir los valores.
void CargaSecuencialVectorDeFlotantes (float vector[], int longitud, char mensaje[]);


/// @brief = Permite eligir posici�n del vector y luego asiganarle un valor a dicha posici�n.
/// @param vector = El nombre del vector que se desea cargar.
/// @param longitud = La cantidad de posiciones del vector.
void CargaAleatoriaVectorDeEnteros (int vector [], int longitud);

/// @brief = Imprime todas las posiciones y valores de un vector.
/// @param vector = El nombre del vector que se desea imprimir.
/// @param longitud = La cantidad de posiciones del vector.
void ImprimirVectorDeEnteros (int vector [], int longitud);

/// @brief = Permite eligir posici�n del vector y luego asiganarle un valor validado en un rango, a dicha posici�n.
/// @param vector = El nombre del vector que se desea cargar.
/// @param longitud = La cantidad de posiciones del vector.
/// @param minimo = El valor m�nimo aceptado.
/// @param maximo = El valor m�ximo aceptado.
void CargaAleatoriaVectorDeEnterosLimitada (int vector [], int longitud, int minimo, int maximo);








#endif /* MYFUNCTIONS_H_ */
