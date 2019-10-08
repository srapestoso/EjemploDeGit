#include "estructuras.h"


void altaActores(eActor listadoDeActores[], int tam)
{
    int opcion;
    int respuesta;
    do
    {
        printf("1.Dar alta\n2.Modificar\n3.Baja\n4.Listar\n5.Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarActor();
            break;
      /*  case 2:

            break;
*/
        case 3:
            darBaja;
        }
    }while(opcion!=5);

}


eActor cargarActor(void)
{
    eActor miActor;

    printf("Ingrese codigo: ");
    scanf("%d", &miActor.codigo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]", miActor.nombre);
    printf("Ingrese apellido: ");
    fflush(stdin);
    scanf("%[^\n]", miActor.apellido);
    printf("Ingrese el sexo");
    scanf("%c", &miActor.sexo);

    return miActor;
}
