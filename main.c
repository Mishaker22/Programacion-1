#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num;
    int contNeg=0;
    int contPos=0;
    int contCeros=0;
    int contPares=0;
    int sumaPos=0;
    int promedioPos;
    int numMax;
    int numMin;
    int flagMax;
    int flagMin;
    int sumaNeg=0;
    int diferenciaNeg;
    int contEntreNumeros=0;
    int posicionIngreso=0;
    char continuar;

     do{
        printf("Ingrese un numero entero entre -500 y 500\n");
        scanf("%d",&num);
        fflush(stdin);

        while (num<-500 || num>500){

            printf("Error. ingrese nuevamente el numero entre -500 y 500");
            scanf("%d",&num);
            fflush(stdin);
        }
        posicionIngreso++;

        if (num>0){
            contPos++;
            sumaPos=sumaPos+num;
        } else if (num<0){
            contNeg++;
            sumaNeg=sumaNeg+num;
        }else if (num==0){
             contCeros++;
             }
        if ((num % 2)==0){
            contPares++;
        }
        if (num>= -239 && num<=5 ){
            contEntreNumeros++;
        }
        if (posicionIngreso==1){
            numMax=num;
            numMin=num;
            flagMax=posicionIngreso;
            flagMin=posicionIngreso;
        }else if (num<numMin){
            numMin=num;
            flagMin=posicionIngreso;
            }else if (num>numMax){
            numMax=num;
            flagMax=posicionIngreso;
            }
        printf("Desea continuar? s o n\n");
        scanf("%c",&continuar);
        fflush(stdin);

     }
     while (continuar=='s');
     promedioPos=sumaPos/contPos;
     diferenciaNeg=sumaPos-sumaNeg;

     printf("La cantidad de numeros pares es de: %d",contPares);
     printf("\n La cantidad de positivos es de: %d",contPos);
     printf("\n La cantidad de negativos de: %d",contNeg);
     printf("\n La cantidad de ceros es de: %d",contCeros);
     printf("\n La suma de negativos es de: %d",sumaNeg);
     printf("\n El promedio de positivos es de: %d",promedioPos);
     printf("\n numero maximo es: %d",numMax);
     printf("\n y su posicion es: %d",flagMax);
     printf("\n numero minimo es: %d",numMin);
     printf("\n y su posicion es: %d",flagMin);
     printf("\n La cantidad de numeros entre -239 y 5: %d",contEntreNumeros);
     printf("\n La diferencia entre negativos es de: %d",diferenciaNeg);


}






