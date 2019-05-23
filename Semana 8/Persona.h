#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#define TAM_CAD 50
#define LIBRE 1
#define OCUPADO 0

 typedef struct
{
    char nombre[TAM_CAD];
    int edad;
    int estado;

}ePersona;

#endif // PERSONA_H_INCLUDED

int damePersona (ePersona listaPersona[], int tam);
void mostrarPersona (ePersona listaPersona);
int mostrarPersonas (ePersona listaPersonas[], int tam);

