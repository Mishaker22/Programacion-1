#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dameEdad(int *edad,char *mensaje);
int dameEdadDos(int *edad,char *mensaje);
int dameEdadTres(int *edad,char *mensaje);
int dameEdadConIntentos(int *edad, char *mensaje, int intentos);
int main()
{
  int edad;
  //int sePudo;
  int seCargo;

  seCargo=dameEdadConIntentos(&edad, "\n Que edad tienes? : ",3);
  if (seCargo==0)
  {
    printf("Valor incorrecto");
  }else
  {
    printf("La edad es :%d",edad);
  }

 /* do
  {
      seCargo=dameEdadTres(&edad,"\n que edad tienes? : ");

  }while (seCargo==0);
  printf("La edad ingresada es :%d",edad);

  //sePudo=dameEdadDos(&edad, "ingrese edad :");
  //sePudo=dameEdadTres(&edad, "ingrese edad :");*/

/* if (dameEdadTres(&edad,"dame la edad")==1)
  {
     printf("La edad es es %d",edad);
  }else{
      printf("no se pudo");

  /*if (dameEdadDos(&edad,"dame la edad")==1)
  {
     printf("La edad es es %d",edad);
  }else{
      printf("no se pudo");
*

  }*/



  /*if (dameEdad(&edad,"dame la edad")==1)
  {
     printf("La edad es es %d",edad);
  }else{
      printf("no se pudo");}*/




  return 0;

}
int dameEdadConIntentos(int *edad, char *mensaje, int intentos)
{
    int seCargo;
    int contador=0;
    int retorno;

   do
   {
       seCargo=dameEdadTres(edad, mensaje);
       contador++;
   }while(seCargo==0 && contador<intentos);
   if (contador<3)
   {
       return 1;
   }else
   {
       return 0;

   }
   return retorno;

}
/** \brief
 * en esta funcion valido un entero
 * \param edad int*
 * \param mensaje char*
 * \return si se pudo se muestra en pantalla
 *
 */
int dameEdad(int *edad,char *mensaje)
{
    int sePudo=0;
    int aux;
    printf(mensaje);
    sePudo=scanf("%d",&aux);
    if (sePudo==1)
    {
        *edad=aux;
    }
    return sePudo;
}

int dameEdadDos(int *edad,char *mensaje)
{
    char cadenaCargada[20];
    int sePudo=1;
    printf(mensaje);
    scanf("%s",cadenaCargada);
    *edad=atoi(cadenaCargada);

    return sePudo;
}

int dameEdadTres(int *edad,char *mensaje)
{
    char cadenaCargada[20];
    int sePudo=1;
    int i;
    printf(mensaje);
    scanf("%s",cadenaCargada);
    int cantidadCaracteres= strlen(cadenaCargada);


    for (i=0; i<cadenaCargada[20]; i++)
    {
        if (cadenaCargada[i]<"0"  || cadenaCargada[i]>"9")
        {
            if(cadenaCargada[i]<'0'  ||  cadenaCargada[i]>'9')
            {
                sePudo==0;
            }
        }
    }
    if (sePudo==1)
    {
        *edad=atoi(cadenaCargada);
    }
    return sePudo;

}
