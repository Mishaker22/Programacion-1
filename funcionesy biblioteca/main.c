#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"



int main()
{
   int miDato=333;
    cambiarValor(miDato);
    printf("mi dato es :%d",miDato);
    cambiarValorReferencia (&miDato);
    printf("\n mi dato es :%d",miDato);
}
