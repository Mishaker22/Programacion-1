#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_ALUMNOS 4
void getString (char mensaje[], char input[]);
int getStringLetras (char mensaje[], char input[]);
int esSoloLetras (char palabra[]);


int main()
{

    char nombre[CANTIDAD_ALUMNOS][50]={"Michell", "Oscar", "Daniel", "Nubia" };
    char apellido[CANTIDAD_ALUMNOS][50]={"Quintero", "Muñoz", "Ladino", "Hernandez" };
    int edad [CANTIDAD_ALUMNOS]={22,24, 47, 35};
    int nota [CANTIDAD_ALUMNOS]={6, 8, 10, 2};

    int i;

    for (i=0; i<CANTIDAD_ALUMNOS; i++)
    {
        if (nombre[i] != -1)
        {
            printf("\nEl nombre es: %s apellido:  %s  edad: %d  nota: %d", nombre[i],apellido[i],edad[i],nota[i]);
        }
    }
    char unNombre[50];
    getString("\n\n Ingrese el nombre: ",&unNombre);

    strcpy(nombre[0], unNombre);

    //getString("\n\nIngrese el nombre: ",nombre[i]);

    for (i=0; i<CANTIDAD_ALUMNOS; i++)
    {
        getString("\n\nIngrese Nombre: ",nombre[i]);
        getString("\n\n Ingrese Apellido: ",apellido[i]);


    }
    for (i=0; i<CANTIDAD_ALUMNOS; i++)
    {
         printf("\nEl nombre es: %s apellido:  %s  edad: %d  nota: %d", nombre[i],apellido[i],edad[i],nota[i]);

    }

    return 0;

    }
    void getString (char mensaje[], char input[])
    {

        printf("%s",mensaje);
        scanf("%s", input);

    }
    int getStringLetras (char mensaje[], char input[])
    {
        char aux[50];
        getString(mensaje,aux);

    }
    int esSoloLetras (char palabra[])
    {
       int i;
        for (i=0; palabra[i]!='\0'; i++)
        {
            if(palabra[i]!=' ')
            {
                if(palabra[i]<'a'&& palabra[i]>'z')
                {
                    if (palabra[i]<'A' && palabra[i]>'z')
                        return 0;
                }
            }
        }
        return 1;
    }
