#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int esUnNumero(char*cadena)
//ESTA FUNCION SIRVE PARA VALIDAR SI ES UN NUMERO
{
    int indice=0;
    int retorno=0;
     //printf("\npalabra por parametros %s",cadena);

     while(cadena[indice]!='\0')
     {
         if(cadena[indice]<'0' || cadena[indice]>'9')
         {
             break;
         }else{
         indice++;
         }
     }
     if (cadena[indice]=='\0')
     {
         retorno=1;
     }

     return retorno;
}

int main()
{
    char letra;
    char palabra[10];
    int numero;
    int es;

    scanf("%s",&palabra);
    fflush(stdin);
    printf("\npalabra ingresada \n  %s",palabra);

    es=esUnNumero(palabra);
    if (es==1)
    {
        printf("\nes correcto");

    }else{
    printf("\nno lo es");
    }


   /* int indice=0;

    while(indice<20)
    {
        if(palabra[indice]=='\0')
        {
            printf("el barra cero esta en porcemtaje en %d",indice);
        }
        printf("\npalabra %s",palabra[indice]);
        indice++;
    }
*/
  /*  scanf("%d",&numero);
     fflush(stdin);
    printf("\nletra %d",numero);

    scanf("%c",&letra);
    fflush(stdin);
    printf("\nletra %d",letra);

    scanf("%c",&letra);
    fflush(stdin);
    printf("\nletra %c",letra);*/


   /*int miDato=333;
    cambiarValor(miDato);
    printf("mi dato es :%d",miDato);
    cambiarValorReferencia (&miDato);
    printf("\n mi dato es :%d",miDato);*/
}
