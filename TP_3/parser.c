#include "Controller.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
	char id[12];
	char nombre[128];
	char horasTrabajadas[12];
	char sueldo[12];
	int estado;
	Employee* empleado;
	estado = -1;

	fscanf(pFile,"%[^,], %[^,], %[^,], %[^\n]\n",id, nombre, horasTrabajadas, sueldo);

	while (!feof(pFile))
	{
		fscanf(pFile,"%[^,], %[^,], %[^,], %[^\n]\n",id, nombre, horasTrabajadas, sueldo);


		empleado = employee_newParametros(id, nombre, horasTrabajadas, sueldo);

		if (empleado != NULL)
		{
			ll_add(pArrayListEmployee, empleado);
		}

		estado = 0;
	}

    return estado;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}


