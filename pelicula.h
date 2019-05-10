#define PELICULAS 1000

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int idPelicula=1000;
    char titulo[51];
    eFecha fechaEstreno;
    char genero[51];
    char actor [51];
    int estado;
    int idGenero;

}ePelicula;

int dameLugarLibre(ePelicula lista[], int tam);
void cargarPelicula(ePelicula lista[], int tam);
