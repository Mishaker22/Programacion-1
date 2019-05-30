#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "alumno.h"

void harcodearAlumnos(eAlumno listaAlumnos[], int tamA){

    int legajo[]= {1};
    char nombre[][50]= {"Michell"};
    int nota[]= {7};

    int i;
    for(i=0;i<3;i++){

        listaAlumnos[i].legajo= legajo[i];
        strcpy(listaAlumnos[i].nombre, nombre[i]);
        listaAlumnos[i].nota= nota[i];
        listaAlumnos[i].estado= 0;
    }
}
