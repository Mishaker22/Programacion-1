#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Persona.h"


ePersona damePersona (char* nombre, int edad)
{
    ePersona nuevaPersona;
    nuevaPersona.edad=edad;
    strcpy(nuevaPersona.nombre, nombre);
    printf("\n Puntero nuevaPersona: %d\n", &nuevaPersona);
}
ePersona* damePersonaDinamica (char* nombre, int edad)
{
    ePersona* nuevaPersona;
    nuevaPersona= malloc(sizeof(ePersona));
    nuevaPersona->edad=edad;
    strcpy(nuevaPersona-> nombre, nombre);
}
void mostrarPersona (ePersona listaPersona)
{
   printf("\n t%20s\t\t%2d ",  listaPersona.nombre, listaPersona.edad);
}
int mostrarPersonas (ePersona listaPersonas[], int tam)
{
    int i;
    for(i=0;i<tam;i++){
        if( listaPersonas[i].estado==OCUPADO)
        {
            mostrarPersona(listaPersonas[i], tam);
        }

    }
    printf("\n\n\n");
    return 0;
}
