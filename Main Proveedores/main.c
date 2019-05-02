#include <stdio.h>
#include <stdlib.h>
#include "proovedores.h"
#define TAM 10

void mostrarArrayProductosConProveedoresElMaximo(eProducto[], int ,eProveedor[], int);
void mostrarArrayProductosConProveedorOrdenado(eProducto[],int, eProveedor[],int, int Desc);
void mostrarArrayProductosConProveedores (eProducto listaProductos[], int tamProd, eProveedor listaProveedores[],int tamProv);
void mostrarArrayProveedoresConProductos(eProveedor listaDeProveedores[], int tamProv, eProducto listadeProducto[], int tamProd);
int main()
{


    eProducto unProducto;
    eProducto listaDeProductos[TAM];
    eProveedor listaDeProveedores[3];
    eProveedor unProveedor;
    //mostrarArrayProductosConProveedores (listaProductos,  10 ,  listaProveedores, 3);


    //eProducto listadoDeProductos[3];


    construirArray(TAM, listaDeProductos);
    mostrarArray(TAM, listaDeProductos);
    return 0;
}
void mostrarArrayProductosConProveedores (eProducto listaProductos[], int tamProd, eProveedor listaProveedores[],int tamProv)
{
    int i;
    int j;

    for (i=0; i<tamProd; i++)
    {
        mostrarProducto(listaProductos[i]);
        for (j=0; j<tamProv; j++)
            {
               if(listaProductos[i].idProveedor == listaProveedores[j].id)
               {
                   mostrarProveedor(listaProveedores[j]);
               }

            }
    }
}
void mostrarArrayProveedoresConProductos(eProveedor listaDeProveedores[], int tamProv, eProducto listadeProducto[], int tamProd)
{
    int i;
    int j;

    for (i=0; i<tamProv; i++)
    {
        mostrarProveedor(listaDeProveedores[i]);
        for (j=0; j<tamProd; j++)
        {
            if (listaDeProveedores[i].id == listadeProducto[j].idProveedor)
            {
                mostrarProducto(listadeProducto[i]);
            }
        }
    }
}
