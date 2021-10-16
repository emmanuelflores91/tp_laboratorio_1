#include "ArrayEmployees.h"
#include "myFunctions.h"
#define L 1000

int main()
{
	setbuf(stdout, NULL);
	int opcion;
	char salir;
	double promedioSalario;
	double totalSalario;
	int cantidadMayorAlPromedio;
	int idBuscado;
	char respuesta[2];

	eEmployee employeeList[L];/* =
	{{1, "Carlos", "Perez", 65500, 5, 0},{2, "Pedro", "Gomez", 90500, 4, 0},
	{3, "Luis", "Gomez", 90500, 3, 0},{4, "Miguel", "Gomez", 66500.5, 2, 0},{5, "Alfredo", "Rodriguez", 70500, 1, 0},
	{6, "Alfredo", "Gomez", 89500, 14, 0},{7, "Alfredo", "Chilavert", 78500, 20, 0}};*/


	if(InitEmployees(employeeList,L)!=1)
	{
		do
		{
			opcion = MostrarMenuDeOpciones();

			switch (opcion)
			{
				case 1: // OPCION 1 - ALTA
					system("cls");

					ImprimirConOpciones (LoadEmployee(employeeList, L),"\nERROR. No se puede cargar el empleado.","\nEmpleado cargado con exito.");
					opcion = PedirEnteroEnRango("\n\n 1 - Volver al menu principal."
												"\n 2 - Salir"
												"\n\n Ingrese una opcion: ",1,2);

					if(opcion == 2)
					{
						opcion = 5;
					}

					system("cls");
				break;

				case 2: // OPCION 2 - MODIFICAR
					if (ExistEmployee(employeeList, L)==1)
					{
						system("cls");

						PrintEmployees(employeeList, L);
						idBuscado = PedirEnteroPositivo("\n\n Ingrese ID del empleado que desear modificar: ");
						system("cls");
						printf("\t\tMODIFICACION DE EMPLEADO\n"
								"___________________________________________________________________\n\n");

						ImprimirConOpciones(PrintEmployeeById(employeeList, L, idBuscado), "\n Error en ID", "");

						ImprimirConOpciones(EditEmployee(employeeList, L, FindEmployeeById(employeeList, L, idBuscado)),
														"\n No se pudo editar.", "\n Datos actualizados.");

					}
					else
					{
						if(ExistEmployee(employeeList, L)==0)
						{
							printf("\n No hay cargas realizadas");
						}
						else
						{
							printf("\n Error");
						}
					}
					opcion = PedirEnteroEnRango("\n\n 1 - Volver al menu principal."
												"\n 2 - Salir"
												"\n\n Ingrese una opcion: ",1,2);
					if(opcion == 2)
					{
						opcion = 5;
					}

					system("cls");

				break;

				case 3: // OPCION 3 - BAJA
					system("cls");
					if (ExistEmployee(employeeList, L)==1)
					{
						PrintEmployees(employeeList, L);

						idBuscado = PedirEnteroPositivo("\n\n Ingrese ID del empleado que desear eliminar: ");

						PedirCadena("\n Seguro desea eliminar el empleado?. Ingrese S para confirmar: ", respuesta, sizeof(respuesta));


						if (stricmp(respuesta, "S")==0)
						{
							ImprimirConOpciones(RemoveEmployee(employeeList, L, idBuscado), "\n No se pudo eliminar.", "\n Empleado eliminado.");
						}
						else
						{
							printf("\n Baja cancelada");

						}

					}
					else
					{
						if(ExistEmployee(employeeList, L)==0)
						{
							printf("\n No hay cargas realizadas");
						}
						else
						{
							printf("\n Error");
						}
					}
					opcion = PedirEnteroEnRango("\n\n 1 - Volver al menu principal."
												"\n 2 - Salir"
												"\n\n Ingrese una opcion: ",1,2);
					if(opcion == 2)
					{
						opcion = 5;
					}

					system("cls");


				break;

				case 4: // OPCION 4 - INFORMAR
					if (ExistEmployee(employeeList, L)==1)
					{
						system("cls");

						printf("\n 1. Listado de los empleados ordenados alfabeticamente por Apellido y Sector."
								"\n 2. Total y promedio de los salarios, y cuantos empleados superan el salario promedio.");
						opcion = PedirEnteroEnRango("\n\n Ingrese una opcion: ",1,2);

						system("cls");

						if(opcion == 1)
						{
							printf("\n 0. Orden Descendente."
									"\n 1. Orden Ascendente.");
							opcion = PedirEnteroEnRango("\n\n Ingrese una opcion: ",0,1);

							system("cls");

							ImprimirConOpciones(SortEmployees(employeeList, L, opcion),"\nNo se pudo ordenar.\n","\nSe ordeno correctamente.\n");
							PrintEmployees(employeeList, L);

						}
						else
						{
							if(CalcularTotalYPromedioSalarios(employeeList, L, &promedioSalario, &totalSalario)!=-1)
							{
								cantidadMayorAlPromedio = ContarEmpleadosqQueSuperanPromedio(employeeList, L, promedioSalario);

								printf("\n El total de los salarios es: %.2f"
										"\n El promedio de los salarios es: %.2f"
										"\n Cantidad de empleados que superan el promedio: %d", totalSalario, promedioSalario,
										cantidadMayorAlPromedio);
							}
							else
							{
								printf("\n No se pudo calcular.");

							}
						}
					}
					else
					{
						if(ExistEmployee(employeeList, L)==0)
						{
							printf("\n No hay cargas realizadas");
						}
						else
						{
							printf("\n Error");
						}
					}

					opcion = PedirEnteroEnRango("\n\n 1 - Volver al menu principal."
												"\n 2 - Salir"
												"\n\n Ingrese una opcion: ",1,2);

					if(opcion == 2)
					{
						opcion = 5;
					}
					system("cls");


				break;
			}

		}while(opcion!=5);
		system ("cls");
		printf("\n Hasta pronto. Que tenga un lindo dia.");

		salir = PedirCaracter("\n\n Toque una tecla para cerrar la ventana: "); //Esta linea es para dejar la consola a la espera y que no se cierre automaticamente
		ImprimirCaracter("", salir); //Esta linea es para evitar el warning por no utilizar la variable "salir".
	}
	printf("\n No se pudo inicializar");
	return 0;
}
