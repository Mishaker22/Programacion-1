#ifndef BIBLIOTECA_C_INCLUDED
#define BIBLIOTECA_C_INCLUDED
int cambiarValor (int valor)
{
    valor=999;
    return 1;
}
int saludar()
{
    printf("Hola biblioteca");
}
int cambiarValorReferencia (int* valor)
{
    printf("\n El valor es: %d",*valor);

    *valor=999;

    return 1;
}
int dividirPorReferencia(int datoUno, int datoDos, float*respuesta)
{
    if(datoUno!=0)
    {
        *respuesta=(float)datoUno/datoDos;
        return 1;
    }
    return 0;
}

#include "biblioteca.h"

#include <stdlib.h>



#endif // BIBLIOTECA_C_INCLUDED
