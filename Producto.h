#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
  char codigoDeBarra [13];
  float precio;
  char nombre [50];
  char fechaDeVencimiento [50];
  char proveedor [50];
  int estado=0;

} eProducto;

eProducto pedirProducto();
void mostrarProducto (eProducto unProducto);
void mostrarArray (int tam, eProducto listado[]);
void cargarArray (int tam, eProducto listado[]);
void construiurArray (int tam, eProducto listado[]);
int inserteProducto (eProducto, eProducto);
int dameLugarLibre (eProducto[]);
int existeProducto (eProducto, eProducto[]);
int borrarProducto (eProducto, eProducto[]);
int editarProducto (eProducto, eProducto[]);


#endif // PRODUCTO_H_INCLUDED
