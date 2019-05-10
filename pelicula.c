#include "actor.h"
#include "genero.h"
eFecha crearFechaEstreno()
{
    eFecha nuevaFecha;
   while(funcionGetStringNumeros(nuevaFecha))
    {
        printf("Ingrese el dia:\n");
        fflush(stdin);
        scanf("%d",&nuevaFecha.dia);

        printf("Ingrese el Mes:\n");
        fflush(stdin);
        scanf("%d",&nuevaFecha.mes);

        printf("Ingrese el Año:\n");
        fflush(stdin);
        scanf("%d",&nuevaFecha.anio);
    }
    return nuevaFecha;
}
void cargarGenero(ePelicula generoPelis[])
{
	int idGenero[6] = { 1, 2, 3, 5, 6 };
	char descripcionGenero[6][30] = { "Accion", "Terror", "cienciaFiccion", "comedia", "Romance", "Infantil" };

	int i;
	for (i = 0; i < 6; i++)
	{
		generoPelis[i].idGenero = idGenero[i];
		strcpy(generoPelis[i].genero, generoPelis[i]);

		strcpy(categorias[i].descripcion, descripcion[i]);
	}
}
void cargarPelicula(ePelicula lista[], int tam)
{
    char auxtitulo [51];
    int auxgenero;
    int auxActor;
    int retorno;
    int indice;
    ePelicula nuevaPelicula;


    if(lista != NULL && tam > 0)
    {
        system("cls");
        fflush(stdin);
        indice=dameLugar(lista, tam);
        printf(" --> ALTA DE PELICULA <--\n\n");

        if (indice==-1)
        {
            printf("No hay lugar en el sistema.");
            retorno=-1;
            system("pause");
        }else {

            printf("\n Nuevo Pelicula, ID numero %d \n",indice) ;
            nuevoEmpleado.id = indice ;
            if(!funcionGetStringLetras("Ingrese el titulo de la pelicula: ",auxtitulo))
            {
                printf("El titulo debe tener letras.\n\n") ;
                system("pause");
                system("cls");
            }

			nuevaPelicula.fechaEstreno=crearFechaEstreno();

			printf("Actor:\n 1- Accion\n 2- Terror\n 3- Ciencia Ficcion\n 4- Comedia\n 5- Romance\n 6- Infantil\n");
			printf("Ingrese la categoria: ");
			fflush(stdin);
			scanf("%d", &auxgenero);

			printf("Genero:\n 1- julieta roberto\n 2- Roberto deniro\n 3- Richar darin\n 4- tita merelo\n 5- sandro\n");
			printf("Ingrese El Actor: ");
			fflush(stdin);
			scanf("%d", &auxgenero);

            else
            {
                strcpy(nuevaPelicula.titulo,auxtitulo) ;
                nuevaPelicula.genero ;
                nuevoEmpleado.sector =atoi(auxSector) ;
                nuevoEmpleado.estado = 0;
                lista[indice] = nuevoEmpleado ;
                system("pause");
                system("cls");
                printf("\n\nEMPLEADO DADO DE ALTA CON EXITO:\n\n");
                mostrarEmpleado(lista[indice]);
                printf("\n\n\n");
                system("pause");
                retorno = 0 ;
             }

        }
    }else{
    retorno=-1;}

    return retorno;


}
int dameLugarLibre(ePelicula lista[], int tam)
{
    int i;
    int indice = -1;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            index = i;
            break;
        }
    }
    return indice;
}
