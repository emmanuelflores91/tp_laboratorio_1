
#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "Employee.h"
#include "LinkedList.h"
#include "myFunctions.h"
#include "Parser.h"

int controller_loadFromText(char* path , LinkedList* pArrayListEmployee);
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee);
int controller_addEmployee(LinkedList* pArrayListEmployee);
int controller_editEmployee(LinkedList* pArrayListEmployee);
int controller_removeEmployee(LinkedList* pArrayListEmployee);
int controller_ListEmployee(LinkedList* pArrayListEmployee);
int controller_sortEmployee(LinkedList* pArrayListEmployee);
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee);
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee);
int ShowMenu (int* opcion );
int NewID(char* NewID);
int SaveNewID(char* newID);
void BorrarEmpleados (LinkedList* listaEmpleados);
int ObtenerEmpleadoPorID (LinkedList* pArrayListEmployee, int idBuscado);







#endif // controller_H_INCLUDED
