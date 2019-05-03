#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "proovedores.h"


void inicializarProveedores (eProveedor listado[], int tam)
{
    int id[3]={1,2,3};
    char descripcion [3] [50]={"petrolera", "petrolera", "petrolera"};
    char localidad [3] [50]={"avellaneda", "bahia blanca", "rio negro"};
    char cuit [3][13]={"444", "555", "666"};
    char duenio [3] [50]={"ypf", "axion", "shell"};

    int i;
}

void inicializarProducto (eProducto lista[], int tam)
{
    float precio [10]={42, 43, 44, 40, 41 ,42,35 ,36 ,37, 38};
    char nombre [10] [50]={"Infinia", "Axion power", "vi Power","Infinia diesel", "Axion diese ", "vi Power diesel",
                          "super","axion super", "normal ", "kerosene"};
    int idProveedor [10] ={1, 2, 3,1, 2, 3,1, 2, 3, 1};
    char codigoDeBarra [10][50]={"122", "222", "322","422", "522", "622","722", "822", "922", "962"};
    char fechaDeVencimiento [10] [50]={"01/01/2020", "01/02/2020", "01/03/2020","01/04/2020", "01/05/2020",
                                       "01/06/2020","01/07/2020", "01/08/2020", "01/09/2020", "01/100/2020"};

    int i;
    for (i=0; i<10; i++)
    {
        strcpy(lista[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(lista[i].nombre,nombre[i]);
        strcpy(lista[i].fechaDeVencimiento ,fechaDeVencimiento[i]);
        lista[i].idProveedor=idProveedor[i];
        lista[i].precio=precio[i];


    }
}//copiar y pegar para el examen
int dameLugarLibre(eProducto listado[], int tam)
{
   int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

}
//int existeProducto(eProducto elProducto, eProducto listado[])
//{

//}
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
    return loEncontro;
}
void mostrarArray (int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }


    }
}
void mostrarProveedor(eProveedor unProveedor)
{
    printf("%15d %15s %10s %10s %10s \n", unProveedor.id, unProveedor.descripcion, unProveedor.localidad, unProveedor.cuit, unProveedor.duenio);
}
void mostrarProveedores (int tam, eProveedor listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {

    mostrarProveedor(listado[i]);



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
   gets(retorno.idProveedor);
   fflush(stdin);




return retorno;
}
void mostrarProducto(eProducto unProducto)
{
    printf("%15s %15s %10s %10s %10f %5d\n", unProducto.nombre, unProducto.idProveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
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
      strcpy(listado[i].idProveedor," ");

      listado[i].precio=0;
    }
}

int editarProducto(eProducto lista[], int tam)
{
   int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
           printf("Ingrese el nuevo precio: ");
           scanf("%f", &lista[i].precio);
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

   return 0;
}




