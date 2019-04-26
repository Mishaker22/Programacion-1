#include <stdio.h>
#include <stdlib.h>
#include "../Producto.h"

int main()
{
    eProducto unProducto;

    //unProducto=pedirProducto();

    //mostrarProducto(unProducto);
    eProducto listadoDeProductos[3];

    construirArray(3, listadoDeProductos);
    mostrarArray(3, listadoDeProductos);


    return 0;
}
