#include <stdio.h>
#include <stdlib.h>
mostrarArray(int* int);
int main()
{
    int variable[5]={5,9,7,8,1};
    //int * puntero;
    int i;

    mostrarArray(variable)

    // puntero=&variable;
    puntero= variable;//esta es la que funciona la opcion 1 y 3 es redundante.
    //puntero= &variable[0];


    printf("%d\n", puntero);// variable //Manejamos la disreccion de memoria
    printf("%d\n", puntero+0);// direccion de memoria de variable en la direccion [0]
    printf("%d\n", puntero+1);//direccion de memoria de variable en la direccion [1]
    printf("%d\n", puntero+2);//direccion de memoria de variable en la direccion [2]

    printf("%d\n", *puntero); //manejamos la svariables
    printf("%d\n", *(puntero+0));
    printf("%d\n", *(puntero+1));
    printf("%d\n", *(puntero+2));
    /*int valor == 99;
    int* q;
    int* p;

    p=&valor;
    q=p;
    printf("%d", *p);*/
    return 0;
}
mostrarArray(int* pArray int tam)
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d\n", *(puntero+i));//variable[i]*
    }
}

//Cargar enteros
//mostrar
//ordenar
//calculeMaximo
//Promedio
//todo con notacion de punteros
