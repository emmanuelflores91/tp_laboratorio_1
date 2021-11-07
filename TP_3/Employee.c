#include "Controller.h"

Employee* employee_new()
{
	Employee* defaultEmployee;

	defaultEmployee = (Employee*) malloc (sizeof(Employee));


	if (defaultEmployee != NULL)
	{
		employee_setId(defaultEmployee,0);
		employee_setNombre(defaultEmployee, "\0");
		employee_setHorasTrabajadas(defaultEmployee, 0);
		employee_setSueldo(defaultEmployee, 0);
	}

	return defaultEmployee;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldo)
{
	Employee* oneEmployee;

	oneEmployee = employee_new();

	if (oneEmployee != NULL)
	{
		employee_setId(oneEmployee, atoi(idStr));
		employee_setNombre(oneEmployee, nombreStr);
		employee_setHorasTrabajadas(oneEmployee, atoi(horasTrabajadasStr));
		employee_setSueldo(oneEmployee, atoi(sueldo));
	}

	return oneEmployee;
}



int employee_setId(Employee* this, int id)
{
	int estado;
	estado = -1;

	if(this != NULL)
	{
		this->id = id;
		estado = 0;
	}

	return estado;
}

int employee_setNombre(Employee* this, char* nombre)
{
	int estado;
	estado = -1;

	if (this != NULL)
	{
		strcpy(this->nombre, nombre);
		estado = 0;
	}

	return estado;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
	int estado;
	estado = -1;

	if (this != NULL)
	{
		this->horasTrabajadas = horasTrabajadas;
		estado = 0;
	}

	return estado;
}

int employee_setSueldo(Employee* this,int sueldo)
{
	int estado;
	estado = -1;

	if (this != NULL)
	{
		this->sueldo = sueldo;
		estado = 0;
	}

	return estado;
}

int employee_getId(Employee* this,int* id)
{
	int estado;
	estado = -1;

	if (this != NULL)
	{
		*id = this->id;
		estado = 0;
	}

	return estado;
}

int employee_getNombre(Employee* this,char* nombre)
{
	int estado;
	estado = -1;

	if (this != NULL)
	{
		strcpy(nombre, this->nombre);
		estado = 0;
	}

	return estado;
}


int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
	int estado;
	estado = -1;

	if (this != NULL)
	{
		*horasTrabajadas = this->horasTrabajadas;
		estado = 0;
	}

	return estado;
}

int employee_getSueldo(Employee* this,int* sueldo)
{
	int estado;
	estado = -1;

	if (this != NULL)
	{
		*sueldo = this->sueldo;
		estado = 0;
	}

	return estado;

}













