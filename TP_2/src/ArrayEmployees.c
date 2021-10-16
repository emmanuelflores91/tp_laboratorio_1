#include "myFunctions.h"
#include "ArrayEmployees.h"

int MostrarMenuDeOpciones ()
{
	int opcion;

		printf("\n.......................................................\n");
		printf(" 1 - ALTAS\n"
				" 2 - MODIFICAR\n"
				" 3 - BAJA\n"
				" 4 - INFORMES\n"
				" 5 - SALIR");
		printf("\n.......................................................\n");

		opcion = PedirEnteroEnRango("\n Ingrese una opcion: ", 0, 5);

		return opcion;
}

int CountEmployees (eEmployee list[], int len)
{
	int count = -1;

	if (list != NULL && len > 0)
	{
		count = 0;
		for(int i = 0; i < len; i++)
			{
				if(!list[i].isEmpty)
				{
					count++;

				}
			}
	}

	return count;
}

int ExistEmpty (eEmployee list[], int len)
{
	int exist;
	exist = -1;
	if(list != NULL && len > 0)
	{
		exist = 0;
		for (int i = 0; i < len; i++)
		{
			if(list[i].isEmpty)
			{
				exist = 1;
				break;
			}
		}
	}
	return exist;
}

int ExistEmployee (eEmployee list[], int len)
{
	int exist;
	exist = 0;
	if(list != NULL && len > 0)
	{
		for (int i = 0; i < len; i++)
		{
			if(!list[i].isEmpty)
			{
				exist = 1;
				break;
			}
		}
	}
	return exist;
}



int InitEmployees(eEmployee list[], int len)
{
	int estado;
	estado = -1;

	if (list != NULL && len > 0)
	{
		for(int i=0; i<len; i++)
		{
			list[i].isEmpty = 1;
			list[i].id = 0;
		}
		estado = 0;
	}

	return estado;
}


int FindLastId(eEmployee list[], int len)
{
	int lastId;
	lastId = 0;

	if (list != NULL && len > 0 && ExistEmployee(list, len))
	{
		for(int i=0; i<len; i++)
		{
			if(list[i].id > lastId)
			{
				lastId = list[i].id;
			}
		}
	}
	return lastId;
}

int LoadEmployee (eEmployee list[], int len)
{
	int estado;
	estado = -1;

	if (list != NULL && len > 0 && ExistEmpty(list, len))
	{
		int id;
		char name[51];
		char lastName[51];
		float salary;
		int sector;

		system("cls");
		printf("\tALTA DE EMPLEADO\n"
				"_________________________________\n\n");

		id = FindLastId(list, len) + 1;

		while(PedirCadena(" Ingrese nombre: ", name, sizeof(name))==-1)
		{
			system("cls");
			printf("\n Nombre invalido\n");
		}
		while (PedirCadena(" Ingrese apellido: ", lastName, sizeof(lastName))==-1)
		{
			system("cls");
			printf("\n Apellido invalido\n");
		}

		salary = PedirFlotante(" Ingrese salario: ");
		sector = PedirEntero(" Ingrese sector: ");

		if (AddEmployee(list, len, id, name, lastName, salary, sector) == 0)
		{
			estado = 0;
		}
	}
		system("cls");

	return estado;
}


int AddEmployee(eEmployee list[], int len, int id, char name[], char lastName[], float salary, int sector)
{
	int estado;
	estado = -1;

	if (list != NULL && len > 0)
	{
		for(int i = 0; i< len; i++)
		{
			if(list[i].isEmpty)
			{
				list[i].id = id;
				strcpy(list[i].name, name);
				strcpy (list[i].lastName, lastName);
				list[i].salary = salary;
				list[i].sector = sector;
				list[i].isEmpty = 0;

				estado = 0;
				break;
			}
		}

	}

	return estado;
}

int FindEmployeeById(eEmployee list[], int len, int id)
{
	int indexID;
	indexID = -1;

	if (list != NULL && len > 0 && ExistEmployee(list, len))
	{
		for(int i = 0; i < len; i++)
		{
			if(!list[i].isEmpty && list[i].id == id)
			{
				indexID = i;
			}
		}
	}
	return indexID;
}
int EditEmployee(eEmployee list[], int len, int index)
{
	int estado;
	estado = -1;
	int opcion;


	if (list != NULL && len > 0 && ExistEmployee(list, len))
	{
		estado = 0;

		do
		{
			opcion = PedirEnteroEnRango("\n 1 - Nombre."
										"\n 2 - Apellido."
										"\n 3 - Salario."
										"\n 4 - Sector."
										"\n\n Ingrese la opcion que desea editar: ", 1, 4);

			switch (opcion)
			{
				case 1:
					while(PedirCadena("\n Ingrese nombre: ", list[index].name, sizeof(list[index].name))==-1)
					{
						system("cls");
						printf("\n Nombre invalido\n");
					}
				break;

				case 2:
					while(PedirCadena("\n Ingrese apellido: ", list[index].lastName, sizeof(list[index].lastName))==-1)
					{
						system("cls");
						printf("\n Nombre invalido\n");
					}
				break;

				case 3:
					list[index].salary = PedirFlotante("\n Ingrese salario: ");

				break;

				case 4:
					list[index].sector = PedirEntero("\n Ingrese sector: ");
				break;
			}

		opcion = PedirEnteroPositivo("\n Ingrese 0 para modificar otro dato o cualquier numero para salir: ");

		}while(opcion == 0);
	}
	return estado;
}

int RemoveEmployee(eEmployee list[], int len, int id)
{
	int estado;
	estado = -1;

	if (list != NULL && len > 0 && ExistEmployee(list, len))
	{
		for(int i = 0; i < len; i++)
		{
			if(!list[i].isEmpty && list[i].id == id)
			{
				list[i].isEmpty = 1;
				estado = 0;
			}
		}
	}
	return estado;
}


int SortEmployees(eEmployee list[], int len, int order)
{
	int estado;
	estado = -1;
	if (list != NULL && len > 0 && CountEmployees(list, len) > 1)
	{

		for(int i = 0; i < len - 1; i++)
		{
			if(!list[i].isEmpty)
			{
				for(int j = i+1; j < len; j++)
				{
					if(!list[j].isEmpty)
					{
						if (order && SortUp(list, i, j, len)!=1)
						{
							estado = 0;
						}
						else
						{
							if (SortDown(list, i, j, len) != 1)
							{
								estado = 0;
							}
						}
					}
				}
			}
		}
}
	return estado;

}

int SortUp (eEmployee list[], int pos1, int pos2 , int len)
{
	int estado;
	estado =-1;

	if(list != NULL && len > 0)
	{
		if (stricmp(list[pos1].lastName, list[pos2].lastName) > 0 ||
			(stricmp(list[pos1].lastName, list[pos2].lastName) == 0 && list[pos1].sector > list[pos2].sector))
		{
			estado = SwapStruct(list, pos1, pos2, len);
		}

	}

	return estado;
}

int SortDown (eEmployee list[], int pos1, int pos2 , int len)
{
	int estado;
	estado =-1;

	if(list != NULL && len > 0)
	{
		if (stricmp(list[pos1].lastName, list[pos2].lastName) < 0 ||
			(stricmp(list[pos1].lastName, list[pos2].lastName) == 0 && list[pos1].sector < list[pos2].sector))
		{
			estado = SwapStruct(list, pos1, pos2, len);

		}

	}

	return estado;
}

int SwapStruct (eEmployee list[], int pos1, int pos2, int len)
{
	int estado;
	estado = -1;
	eEmployee auxiliar;

	if(list != NULL && len > 0)
	{
		auxiliar = list[pos1];
		list[pos1] = list[pos2];
		list[pos2] = auxiliar;

		estado = 0;
	}

	return estado;
}

int CalcularTotalYPromedioSalarios (eEmployee list[], int len, double* promedio, double* total)
{
	int estado;
	estado = -1;
	double auxTotal = 0;
	double auxPromedio;

	if (list != NULL && len > 0 && ExistEmployee(list, len))
	{
		for(int i = 0; i < len; i++)
		{
			if(!list[i].isEmpty)
			{
				auxTotal += list[i].salary;
			}
		}

		auxPromedio = auxTotal / CountEmployees(list, len);

		*promedio = auxPromedio;
		*total = auxTotal;

		estado = 0;
	}
	return estado;
}

int ContarEmpleadosqQueSuperanPromedio(eEmployee list[], int len, double promedio)
{
	int cantidad;
	cantidad = -1;

	if (list != NULL && len > 0 && ExistEmployee(list, len))
	{
		cantidad = 0;
		for ( int i = 0; i < len; i++)
		{
			if(!list[i].isEmpty && list[i].salary > promedio)
			{
				cantidad ++;
			}
		}
	}

	return cantidad;
}

void PrintOneEmployee (eEmployee employee)
{
	printf("\t%-7d %-15s %-15s $%-13.2f %-5d\n", employee.id, employee.name, employee.lastName, employee.salary, employee.sector);
}

int PrintEmployeeById (eEmployee list[], int len, int id)
{
	int estado;
	estado = -1;

	if (list !=NULL && len > 0 && FindEmployeeById(list, len, id)!=-1)
	{

		printf("\n\tID\tNOMBRE\t\tAPELLIDO\tSALARIO\t   SECTOR\n"
		"___________________________________________________________________\n");

		for(int i = 0; i < len; i++)
		{
			if (list[i].id == id)
			{
				PrintOneEmployee(list[i]);
				estado = 0;
				break;
			}
		}
	}
	return estado;
}

int PrintEmployees(eEmployee list[], int len)
{
	int estado;
	estado = -1;

	if (list !=NULL && len > 0 && ExistEmployee(list, len))
	{
		for(int i = 0; i < len; i++)
		{
			if(i==0)
			{
				printf("\n\tID\tNOMBRE\t\tAPELLIDO\tSALARIO\t   SECTOR\n"
				"___________________________________________________________________\n");
			}
			if(!list[i].isEmpty)
			{
				PrintOneEmployee(list[i]);
				estado = 0;
			}
		}
	}

	return estado;
}
