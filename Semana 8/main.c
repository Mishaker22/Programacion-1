#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

#define TAM_PER 54
int main()
{
    int i;
    int auxNuevaLongitud;
    int longitudPersonas =1;
    int i;
    int auxNuevaLongitud;
    int longitudPersonas =1;

    ePersona* pArrayPersona;
    ePersona* pArrayPersonaDos;
    ePersona* pAuxPersona;
    ePersona arrayPersonas[10];

    for(i=0;i<10;i++)
    {
        arrayPersonas[i]=damePersona("nn", i+10);
    }



    mostrarPersonas(listaDePersonas, TAM_PER);

    // Creamos El Array de Personas

    pArrayPersona= malloc(sizeof(listaDePersonas));

    if(pArrayPersona == NULL)
    {
        printf("\n No hay lugar en la memoria compa. \n");
        exit(0);
    }
    pArrayPersona->nombre;
    int i;
    for (i=0; i<10 ; i++)
    {
        (pArrayPersona+i)->edad=i;
        auxNuevaLongitud=sizeof(listaDePersonas)*(i+2);

        //auxNuevaLongitud =sizeof (listaDePersonas)+sizeof(pArrayPersona);
        //printf("\n %d %d\n",sizeof (listaDePersonas),sizeof(pArrayPersona));
        pAuxPersona= realloc(pArrayPersona, auxNuevaLongitud);
         if(pAuxPersona == NULL)
            {
                printf("\n No hay lugar en la memoria!!. \n");
                break;
            }
        pArrayPersona=pAuxPersona;

    }

  void mostrarUnaPersona (listaDePersonas *unaPersona)
  {
      printf("\n t%20s\t\t%2d ",  listaDePersonasPersona.nombre, listaDePersonasPersona.edad);
  }
  void mostrarListaDePersonas (listaDePersonas *listado int tam)
  {
      int i;
    for(i=0;i<tam;i++){
        if( listaDePersonas[i].estado==OCUPADO)
        {
            mostrarUnaPersona(*unaPersona);
        }
  }

    return 0;
}
