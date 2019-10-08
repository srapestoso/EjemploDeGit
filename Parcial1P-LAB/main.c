#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"
#define A 5

int main()
{
    eActor listaDeActores[A];
    eGenero Generos[4] = {1,"Accion",2,"Terror",3,"Romance",4,"Suspenso"};
    int opcion;
    int respuesta;
    do
    {
        printf("1.Gestion de actores\n2.Gestion de elencos\n3.Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            altaActores(listaDeActores, A);
            break;
        /*case 2:

            break;

        }*/

        }
        }while(opcion!=3);


    return 0;


}
