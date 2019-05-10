#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "validaciones.h"

int funcionSoloLetras(char letra[])
{
    int i=0;
    while(letra[i] != '\0')
    {
        if((letra[i] != ' ') && (letra[i] < 'a' || letra[i] > 'z') && (letra[i] < 'A' || letra[i] > 'Z'))
            return 0;
        i++;
    }
    return 1;
}
void FuncionGetString (char mensaje[],char input[])
{
    printf("%s",mensaje);
    fflush(stdin) ;
    gets(input) ;
}
int funcionGetStringLetras(char mensaje[],char input[])
{
    char aux[256];
    FuncionGetString(mensaje,aux);
    if(funcionSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0 ;
}
int funcionEsNum(char letra[])
{
     int i=0;
    while(letra[i] != '\0')
    {
        if(letra[i] < '0' || letra[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

int funcionGetStringNumeros(char mensaje[],char input[])
{
   char aux[256];
   FuncionGetString(mensaje,aux);
   if(funcionEsNum(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}
