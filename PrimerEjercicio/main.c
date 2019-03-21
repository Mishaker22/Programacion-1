#include <stdio.h>
#include <stdlib.h>

void saludar(void);
int dameNumero(void);
float sacarPromedio(int suma,int cantidad);
void esPrimo(int numero);
int main()
{
    int edad;
    int numero;
    int i;
    int suma=0;
    float promedio;
    int limite;


    saludar();

    edad=22;
    float altura;
    altura=1.67;

    printf("\n ingrese su edad \n");
    scanf("%d",&edad);
    printf("\n Ingrese su altura \n");
    scanf("%f",&altura);

    printf("Hello world!\n");
    printf("Michell \t Quintero \n");
    printf(" su edad es  %d",edad);
    printf(" su altura es %f",altura);

    //Manera de hacerlo con while

    //int contador=0;
    //while ( contador<5){
    //contador++;
    // printf("\n Ingrese un numero \n");
        //scanf("%d",&numero);
        //suma=suma+numero;
        limite= dameNumero();

    for ( i=0; i<limite; i++){
            printf("\n Ingrese un numero \n");
        scanf("%d",&numero);
        suma=suma+numero;
    }
    //promedio=(float)suma/5;
    promedio=sacarPromedio(suma, i);
    printf(" el promedio es :%f",promedio);


    return 0;
} void saludar(void){

printf(" Hola mundo c");

} int dameNumero(void){
    int cantidad;
    printf("\n ingrese la cantidad de iteraciones \n");
    scanf("%d",&cantidad);
    return cantidad;
}
float sacarPromedio(int suma,int cantidad){
float promedio;
promedio=(float)suma/cantidad;
return promedio;

}
