#include <stdio.h>
#include <string.h>
#include "../Producto.h"
void inicializarProducto (eProducto lista[], int tam)
{
    float precio [3] [50]=(55, 44.95, 149.32);
    char nombre [3] [50]=("Budin", "Galletas rellenas", "papas fritas");
    char proveedor [3] [50]=("Noe", "Oreo", "Lays");
    char codigoDeBarra [3][50]=("56478936", "98745632", "98745464");
    char fechaDeVencimiento [3] [50]=("22/05/2019", "18/04/2020", "27/02/2020");

    int i;
    for (i=0; i<3; i++)
    {
        strcpy(lista[i].codigoDeBarra,codigoDeBarra[i]);

    }
}//copiar y pegar para el examen
int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index=-1;

    for (i=0; i<tam, i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index=i;
            break;
        }
        return index;
    }

}
int existeProducto(eProducto elProducto, eProducto listado[])
{
    int i;
    int valor=0;
    for (i=0; i<listado[i]; i++)
    {

    }
}
int insertarProducto( eProducto listado[], int tam)
{
    int indice;
    indice=dameLugarLibre(listado, tam);
    if(indice!=-1)
    {
        listado[indice]=pedirProducto();
    }
    return indice;
}
int borrarProducto(eProducto lista[], int tam)
{
     int i;
    char codigo [50];
    int loEncontro=0; //falso es o
    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);
    for (i=0; i<tam; i++)
    {
        if (strcmp(lista[i].codigoDeBarra, codigo)==0)
        {

            lista[i].estado = LIBRE;
            loEncontro==1;
            break;
        }

    }
    if (loEncontro==0)
    {
        printf("codigo inexistente");
    }
}
void mostrarArray (int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarProducto(listado[i]);
    }
}
void cargarArray (int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i]=pedirProducto();
    }
}
//ALTA
eProducto pedirProducto()
{
   eProducto retorno;


   printf(" Ingrese el nombre del producto: \n");
   gets(retorno.nombre);
   fflush(stdin);

   printf(" Ingrese el codigo de barras del producto: \n");
   gets(retorno.codigoDeBarra);
   fflush(stdin);

   printf(" Ingrese el precio del producto: \n");
   scanf("%f", &retorno.precio);

   printf(" Ingrese la fecha de vencimiento del producto: \n");
   gets(retorno.fechaDeVencimiento);
   fflush(stdin);

   printf(" Ingrese el nombre del proveedor: \n");
   gets(retorno.proveedor);
   fflush(stdin);




return retorno;
}
void mostrarProducto (eProducto unProducto)
{
    printf("\n Nombre del producto: %s", unProducto.nombre);
    printf("\n Codigo de barra: %s", unProducto.codigoDeBarra);
    printf("\n Precio: %f", unProducto.precio);
    printf("\n Fecha de vencimiento: %s", unProducto.fechaDeVencimiento);
    printf("\n proveedor: %s", unProducto.proveedor);
}
void construirArray (int tam, eProducto listado[])
{
    int i;
    for (i=0 ; i< tam; i++)
    {
      listado[i].estado=0;
      strcpy(listado[i].nombre," ");
      strcpy(listado[i].codigoDeBarra," ");
      strcpy(listado[i].fechaDeVencimiento," ");
      strcpy(listado[i].proveedor," ");

      listado[i].precio=0;
    }
}
//Modificacion
int editarProducto(eProducto lista[], int tam)
{
    int i;
    char codigo [50];
    int loEncontro=0; //falso es o
    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);
    for (i=0; i<tam; i++)
    {
        if (strcmp(lista[i].codigoDeBarra, codigo)==0)
        {

            printf("Ingrese el nuevo precio: ");
            scanf("%f",&lista[i].precio);
            loEncontro==1;
            break;
        }

    }
    if (loEncontro==0)
    {
        printf("codigo inexistente");
    }
}


