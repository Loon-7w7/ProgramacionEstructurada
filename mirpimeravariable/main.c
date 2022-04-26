#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int valorx ;
    int valory ;
    int valorz;

    printf("ingresa el valor del entero X:" );
    scanf("%i", &valorx);
    printf("ingresa el valor del entero Y:" );
    scanf("%i", &valory);

    printf("\nel entero X es: %i \n",valorx);
    printf("el entero Y es: %i \n \n",valory);
    valorz = valorx;
    valorx = valory;
    valory = valorz;


    printf("el entero X es: %i \n",valorx);
    printf("el entero Y es: %i \n",valory);





    return 0;
}
