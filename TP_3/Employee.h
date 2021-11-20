#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldo);

void employee_delete(Employee* this);

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);

int printOneEmployee (Employee* empleado);

int getAll (Employee* empleado, int* id, char* nombre, int* horasTrabajadas, int* sueldo);

int IdCompare (void* empleadoA, void* empleadoB);

int NameCompare (void* empleadoA, void* empleadoB);

int HourCompare (void* empleadoA, void* empleadoB);

int SalaryCompare (void* empleadoA, void* empleadoB);

int PedirDatosEmpleados (char nombre[], int tamNOmbre, char horas[], char sueldo[]);










#endif // employee_H_INCLUDED
