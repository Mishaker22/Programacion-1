#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//PUNTEROS.
/** \brief permite cargar un caracter.
 *
 * \param char* el char cargar
 * \return int [0]-> si no se pudo cargar el caracter
 *             [1]-> Si pudo cargar el caracter.
 */

void mostrarLetra(char*);
int getCaracter( char* , char* mensaje, char* mensajeError, char, char);

int main()
{

    char variableChar;
    int estado;

    estado= getCaracter(&variableChar);
    if (estado == 1)
    {
        printf("Dato Cargado con exito\n ");
    }else
    {
        printf("El dato no fue cargado\n");

    }

   mostrarLetra(&variableChar);

    return 0;
}
void mostrarLetra(char* pLetra)
{
    if(pLetra!= NULL)
    {
        printf("%c", *pLetra);
    }

}
int getCaracter( char* pLetra )
{
    int cargo = 0;
    if (pLetra != NULL)
    {
        printf("\nIngrese una letra:  ");
        fflush(stdin);
        scanf("%c", pLetra);
        cargo=1;
    }
    return cargo;
}
