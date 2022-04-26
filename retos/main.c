#include <stdio.h>
#include <stdlib.h>

int main()
{

    char string [50];
    int size;

    printf("Escribe tu nombre y te lo mostrare de forma invertida\n\n");
    gets(string);
    size = strlen(string);

    printf("\nTu nombre invertido es:\n");
    for(int i = size-1; i >= 0; i--) {
        printf("%c",string[i]);
    }



    return 0;
}
