#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int i = 0, defaut = 0, nombre = 0;

    do
    {
        fflush(stdin);
        printf("Donner un nombre : ");
        defaut = scanf("%d",&nombre);
        printf("\n");
    }
    while(defaut == 0 );

    for (i=1; i<=10; i++)
    {
        printf("%d\n",nombre + i);
    }

    return 0;
}
