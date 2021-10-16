
#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;

}eEmployee;

/// @brief muestra el menú que ve el usuario para elegir opciones.
/// @return = la opcion elegida
int MostrarMenuDeOpciones ();

/// @brief cuenta la cantidad de empleados.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int CountEmployees (eEmployee list[], int len);

/// @brief comprueba que exista un espacio vacío en la estructura.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int ExistEmpty (eEmployee list[], int len);

/// @brief comprueba que exista al menos un empleado en la estructura.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @return 1 en caso afirmativo, 0 en caso negativo.
int ExistEmployee (eEmployee list[], int len);

/// @briefinicializa el estado en 1 y el Id en 0 del listado completo.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int InitEmployees(eEmployee list[], int len);

/// @brief le pide al usuario los valores que luego se cargarán en la estructura.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int LoadEmployee (eEmployee list[], int len);

/// @brief añade en la estructura todos los datos que recibe como parametro
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @param id
/// @param name
/// @param lastName
/// @param salary
/// @param sector
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int AddEmployee(eEmployee list[], int len, int id, char name[], char lastName[], float salary, int sector);

/// @brief busca un empleado por id.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @param id = el id a buscar
/// @return la posición correspondiente al id.
int FindEmployeeById(eEmployee list[], int len, int id);

/// @brief permite editar datos del empleado seleccionado.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @param index = la posicion del vector donde se encuentra el empleado.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int EditEmployee(eEmployee list[], int len, int index);

/// @brief le cambia el estado a un empleado de 0 a 1, para marcarlo como inactivo.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @param id = el id del empleado deseado.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int RemoveEmployee(eEmployee list[], int len, int id);

/// @brief ordenar empleados por un criterio dado.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @param order = indica si el orden es descendiente o ascendente.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int SortEmployees(eEmployee list[], int len, int order);

/// @brief imprime un sólo empleado
/// @param employee = el empleado a imprimir.
void PrintOneEmployee (eEmployee employee);

/// @brief imprime listado de todos los empleados.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int PrintEmployees(eEmployee list[], int len);

/// @brief imprimi un empleado en base a su id
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @param id = id del empleado que se desea imprimir.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int PrintEmployeeById (eEmployee list[], int len, int id);

/// @brief encuentra el id con el valor más alto.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @return 0 sino encuentra el id y el numero en caso de encontrarlo.
int FindLastId(eEmployee list[], int len);

/// @brief ordena estructura de forma ascendente.
/// @param list = el listado de la estructura de empleados.
/// @param pos1 = el valor de la posición 1.
/// @param pos2 = el valor de la posición  2.
/// @param len = longitud del vector.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int SortUp (eEmployee list[], int pos1, int pos2 , int len);

/// @brief ordena estructura de forma descendiente.
/// @param list = el listado de la estructura de empleados.
/// @param pos1 = el valor de la posición 1.
/// @param pos2 = el valor de la posición  2.
/// @param len = longitud del vector.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int SortDown (eEmployee list[], int pos1, int pos2 , int len);


/// @brief intercambia posiciones de una estructura.
/// @param list = el listado de la estructura de empleados.
/// @param pos1 = el valor de la posición 1.
/// @param pos2 = el valor de la posición  2.
/// @param len = longitud del vector.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int SwapStruct (eEmployee list[], int pos1, int pos2, int len);

/// @brief calcula total y promedio de todos los salarios.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @param promedio = el promedio de todos los salarios.
/// @param total = acumulador de salarios.
/// @return -1 en caso de error, 0 si pudo realizar la operación.
int CalcularTotalYPromedioSalarios (eEmployee list[], int len, double* promedio, double* total);

/// @brief cuenta la cantidad de empleados cuyo salario es mayor al promedio.
/// @param list = el listado de la estructura de empleados.
/// @param len = longitud del vector.
/// @param promedio = promedio de todos los salarios.
/// @return -1 en caso de error y la cantidad si pudo realizar la operacion
int ContarEmpleadosqQueSuperanPromedio(eEmployee list[], int len, double promedio);











#endif /* ARRAYEMPLOYEES_H_ */
