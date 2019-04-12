#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_ALUMNOS 4

void getString (char mensaje[], char input[]);
int getStringLetras (char mensaje[], char input[]);
void getStringNumeros (char mensaje[], char input[]);
int esSoloLetras (char palabra[]);
void mostrarAlumnos(char[][50], char [][50], int [], int[], int);
void ordenarAlumnos(char[][50], char [][50], int [], int[], int);


int main()
{

    char nombre[CANTIDAD_ALUMNOS][50]={"Michell", "Oscar", "Daniel", "Nubia" };
    char apellido[CANTIDAD_ALUMNOS][50]={"Quintero", "Munoz", "Ladino", "Hernandez" };
    int edad [CANTIDAD_ALUMNOS]={22,24, 47, 35};
    char mail[][30];
    int nota [CANTIDAD_ALUMNOS]={6, 8, 10, 2};

    int i;
    int j;

    mostrarAlumnos(nombre, apellido, edad, nota, CANTIDAD_ALUMNOS);
    ordenarAlumnos(nombre,apellido,edad,nota,CANTIDAD_ALUMNOS);



    return 0;


    }
    void ordenarAlumnos(char nombre[][50], char apellido [][50], int edad [], int nota [], int tam)
    {
        char auxCadena[50];
        int auxEnteros;
        int i, j;
        for(i=0; i<tam-1; i++)
        {
            for(j=i+1; j<tam; j++)
            {
                if(strcmp(nombre[i], nombre[j])>0)
                {
                    strcpy(auxCadena, nombre[i]);
                    strcpy(nombre[i], nombre[j]);
                    strcpy(nombre[j], nombre[i]);

                    strcpy(auxCadena,apellido[i]);
                    strcpy(apellido[i], apellido[j]);
                    strcpy(apellido[j], apellido[i]);

                    auxEnteros= edad[i];
                    edad[i]=edad[j];
                    edad[j]=edad[i];

                    auxEnteros= nota[i];
                    nota[i]=nota[j];
                    nota[j]=auxEnteros;

                }
            }
        }

    }

    void mostrarAlumnos(char nombre [][50], char apellido [][50], int edad [], int nota[], int TAM)
    {
       int i;

    printf("%10s\t%10s\t%11s\t%11s\n", "Nombre", "Apellido", "Edad", "Nota");

    for (i=0; i<CANTIDAD_ALUMNOS; i++)
    {
        printf("\n%10s\t%10s\t%10d\t%10d\n", nombre[i],apellido[i],edad[i],nota[i]);
    }

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
