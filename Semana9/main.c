#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#define ARCHIVO ".\\Alumnos.csv"
#define TALUM 50


int main()
{
    eAlumno listaDeAlumnos[TALUM];
    harcodearAlumnos(listaDeAlumnos, TALUM);


    FILE * pArchivo;

    if ((pArchivo=fopen(ARCHIVO, "a"))==NULL)//PUNTERO AL DISCO RIGIDO PARA ESCRIBIR
    {
        printf("No Se Puede abrir el archivo");
        exit(1);
    }else
    {
        printf("Se abrio el archivo");
    }

    //fwrite(&listaDeAlumnos, sizeof(listaDeAlumnos),1,pArchivo);

    char texto[]="Lalala;555;10";
    int largo=strlen(texto);
    fwrite(texto, sizeof(char),largo,pArchivo);
    fclose(pArchivo);

     if ((pArchivo=fopen(ARCHIVO,"r"))==NULL)
     {
         printf("No Se Puede abrir el archivo");
         exit(1);
     }else
     {
         char renglon [70];
          while(!feof(pArchivo))
          {
              int cantidad= fread(renglon, sizeof(char),70,pArchivo);
              printf("\ncantidad %d y texto %s ",cantidad,texto);
            }
          fclose(pArchivo);
     }

    return 0;
}
