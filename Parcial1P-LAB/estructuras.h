#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int codigo;
    char descripcion;
    int duracion;
    int idGenero;
} ePelicula;

typedef struct
{

    int id;
    char descripcion[51];
} eGenero;

typedef struct
{

    int codigo;
    char nombre[51];
    char apellido[51];
    char sexo;
} eActor;

typedef struct
{

    int codigoPelicula;
    int codigoActor;
    float valorContrato;
} eElenco;

void altaActores(eActor[], int);
eActor cargarActor(void);
int darBaja(eActor[],int);
