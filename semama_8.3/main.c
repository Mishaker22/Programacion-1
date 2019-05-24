#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#define T 5

eEmpleado* fantasma(int, char*, float);

int main()
{

    eEmpleado* unEmpleado=fantasma(100, "juan", 1000);

    //unEmpleado= nuevoEmpleadoParametros(1001, "Juan", 15000);

    mostrarEmpleado(unEmpleado);
    //destructorEmpleado(unEmpleado);

    /*

    if(getLegajo(unEmpleado)==1001)
    {
        mostrarEmpleado(unEmpleado);
    }

*/
    //unEmpleado= (eEmpleado*) malloc(sizeof(eEmpleado)); //Para asignar espacio a un solo empleado

   /* eEmpleado* otroEmpleado;

    otroEmpleado= nuevoEmpleado();
    //otroEmpleado= (eEmpleado*) malloc(sizeof(eEmpleado)); //Para asignar espacio a un solo empleado

    otroEmpleado->legajo=101;
    strcpy(otroEmpleado->nombre, "Michael");
    otroEmpleado->sueldo=15000;


    mostrarEmpleado(otroEmpleado);
     //printf("%d--%s--2.f", otroEmpleado->legajo, otroEmpleado->nombre, otroEmpleado->sueldo);
     */

    return 0;
}
eEmpleado* fantasma(int legajo, char*nombre, float sueldo)
{
    eEmpleado empleado;
    empleado.legajo=legajo;
    strcpy(empleado.nombre, nombre);
    empleado.sueldo= sueldo;
// Solo se puede ver el empleado creado en esta funcion no en el main.
    return &empleado;
}
//getter y setter
//en el main crear un array de personas,

