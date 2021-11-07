
#include "Controller.h"


/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/



int main()
{
    int option = 1;
    int len;

    LinkedList* listaEmpleados = ll_newLinkedList();
    do{

        switch(option)
        {
            case 1:
                controller_loadFromText("data2.csv",listaEmpleados);
                len = ll_len(listaEmpleados);

                printf("\n largo de lista: %d", len);
                option = 10;

                break;
        }


    }while(option != 10);
    return 0;
}



