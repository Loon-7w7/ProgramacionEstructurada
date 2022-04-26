#include <stdio.h>
#include <stdlib.h>

int main()
{


    int optionDoor;

    printf("Existen tres puertas. Solo una de ellas salvara tu vida. Elige con cuidado\n");
    printf("Puerta 1. Esta puerta es de color verde. \n");
    printf("Puerta 2. Esta puerta es de color azul. \n");
    printf("Puerta 3. Esta puerta es de color negro. \n\n");

    printf("Escribe el numero de la puerta que mas te guste: ");
    scanf("%i", &optionDoor);

    switch(optionDoor)
    {
    case 1:
        printf("Haz muerto! Un gas venenoso lleno la habitacion!\n\n");
        break;

    case 2:
        printf("Vas camino al infierno! Haz muerto! La habitacion se ha inundado con agua!\n\n");
        break;

    case 3:
        printf("Te salvaste! Esta es la puerta a la vida! Felicitaciones! \n\n");
        break;

    default:
        printf("Tramposo! Numero invalido! Elige una de las tres opciones! Tienes miedo? \n\n");
    }

    return 0;
}
