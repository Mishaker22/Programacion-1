#include <stdio.h>
#include <stdlib.h>
#define T 5


int main()
{
    int* x;
    int i;
    int aux;

    x=(int*) calloc(sizeof(int),T);

    if(x!= NULL)
    {
        for(i=0; i<T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", x+i);
        }
        for (i=0; i<T ;i++)
        {
            printf("%d\n", *(x+i));
        }
        /*free(x);
        printf("Luwgo de free: \n")
        for (i=0; i<T; i++)
        {
            printf("%d\n", *(x+i));
        }*/
        printf("Agrego 5 mas: \n");

        aux= (int*)realloc(x, sizeof(int)*(T+5));
        if (aux != NULL)
        {
            x=aux;
            for(i=T; i<T+5; i++)
                {
                    printf("Ingrese un numero: ");
                    scanf("%d", x+i);
                }
            for (i=0; i<T+5 ;i++)
                {
                    printf("%d\n", *(x+i));
                }
        printf("QUITO 4: \n");
        x=(int*) realloc(x, sizeof(int)*(T+5-4));
        for (i=0; i<T+5; i++)
        {
            printf("%d\n", *(x+i));
        }
        }
    }
    return 0;
}
