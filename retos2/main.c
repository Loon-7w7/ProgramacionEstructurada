#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nombre[20];
int cal;

int Evalua()
{
    printf("El alumo ");
    puts(nombre);

    if(cal <= 10 && cal >= 7)
    {
        printf(" ha sido aprobado.");
    }else if(cal < 7 && cal >0)
            {
                printf(" no aprobo.");
            }
            else
            {
                printf("ingreso un numero fuera de rango.");
                exit(-1);
            }
}

int main()
{
    printf("\tCalificacion: \n\n");
    printf("Ingrese el nombre:\n");
    gets(nombre);

    printf("Ingrese la calificacion:\n\n");
    scanf(" %i", &cal);

    Evalua();

    return 0;
}
