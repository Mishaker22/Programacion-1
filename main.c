#include <stdio.h>
#include <stdlib.h>
int pedirOpcionMenu(char texto);
int main()
{
    int opcion;
    char seguir= 's';

    do{

    opcion= pedirOpcionMenu("1. Alta\n1.2. baja\n2.3. modificacion\n3.4. informes\n4.5. salir\n5.1. Elija una opcion: \n6.");

    switch(opcion)
    {
    case 1:
        printf("Estoy dando de alta\n");
        break;
    case 2:
        printf("Estoy dando de baja\n");
    case 3:
        printf("Estoy en modificando\n");
        break;
    case 4:
        printf("Estoy en informes.");
        break;
    case 5:
        seguir='n';
        break;
    default:
    printf("opcion incorrecta\n");
    break;
    }

    system("pause");
    system("cls");
    }while(seguir=='s');



    return 0;

}
int pedirOpcionMenu( char texto){

    int opcion;

    printf("1. Alta\n1.2. baja\n2.3. modificacion\n3.4. informes\n4.5. salir\n5.1. Elija una opcion: \n6.");

    scanf("%d",&opcion);

    return opcion;


}
