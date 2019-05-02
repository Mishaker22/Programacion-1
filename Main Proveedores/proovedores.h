#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

typedef struct
{
  char codigoDeBarra [13];
  float precio;
  char nombre [50];
  char fechaDeVencimiento [50];
  int idProveedor;
  int estado;

} eProducto;
typedef struct
{
int id;
char descripcion[50];
char localidad[50];
char cuit[13];
char duenio[50];

}eProveedor;

eProducto pedirProducto();
void inicializarProveedores (eProveedor lista[], int tam);
void mostrarProducto(eProducto unProducto);
void mostrarArray (int tam, eProducto listado[]);
void cargarArray (int tam, eProducto listado[]);
void construiurArray (int tam, eProducto listado[]);
int inserteProducto (eProducto, eProducto);
int dameLugarLibre (eProducto[]);
int existeProducto (eProducto, eProducto[]);
int borrarProducto (eProducto, eProducto[]);
int editarProducto(eProducto lista[], int tam);
void mostrarProveedores (int tam, eProveedor listado[]);
void mostrarProveedor(eProveedor unProveedor);


#endif // PRODUCTO_H_INCLUDED
