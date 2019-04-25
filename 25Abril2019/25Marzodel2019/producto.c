#include <stdio.h>
#include <string.h>
#include "../Producto.h"
int dameLugarLibre(eProducto listado[])
{
    int tam
    int i;
    for (i=0; i<tam ; i++)
    {
        if
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
int insertarProducto(eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=dameLugarLibre(listado);
    if(indice!=-1)
    {
        listado[indice]=elProducto;
    }
    return indice;
}
int borrarProducto(eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=existeProducto(elProducto,listado);
    if (indice!=-1)
    {
        listado[indice].estado=-1;
    }
    return indice;
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


