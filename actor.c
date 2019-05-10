void harcodearActores(eActor lista[],int tam)
{

    int id[5]={1,2,3,4,5}
    char nombre[5][50]={"Julieta","Roberto","Richard","tita", "sandro"};
    char Apellido[5][50]={"Roberto","Deniro","Darin","Merelo" ,"  - "};
    char PaisDeOrigen [5][50]={"EEUU","EEUU","EEUU"};

    int i;

    for(i=0;i<5;i++)
    {
        lista[i].id=id[i];
        strcpy(lista[i].nombre,nombre[i]);
        strcpy(lista[i].apellido,Apellido[i]);
        strcpy(lista[i].paisDeOrigen, PaisDeOrigen[i]);

    }



}
void mostrarActor(eActor lista)
{
    printf("%2d %15s %16s %16.2f %15d\n",lista.id , lista.nombre, lista.apellido, lista.paisDeOrigen);
}
void mostrarActores(eActor lista[], int tam)
{
    system("cls");
    printf("\n\nID\t\tNOMBRE\t\tAPELLIDO\tPAIS\n");

    for(int i=0; i<tam; i++)
    {
        if(lista[i].estado == 0)
        {
            mostrarActor(lista[i]) ;
        }
    }
}
