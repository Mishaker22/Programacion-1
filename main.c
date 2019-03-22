#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;
    char palabra[10];


    printf("Hello world!\n");

    printf("ingrese una palabra: ");
    fflush(stdin);
    scanf("%s",&palabra);

    printf("La palabra es: %s\n,",palabra);

    // se usa para mostrar en la consola sin abrir este programa.

   /* printf("Ingrese un numero: ");
    scanf("%d",&numero);

    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c",&letra);

    printf("el numero es :%d\n La letra es: %c\n", numero, letra  );
     system("pause");*/
    return 0;
}
