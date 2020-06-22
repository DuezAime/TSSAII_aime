#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;


    printf("Donnez un nombre : ");
    scanf("%d",&nombre);
    printf("\n");

    if (nombre >= 0)
    {
        printf("%d est positif",nombre);
    }
    else
    {
        printf("%d est negatif",nombre);
    }

    return 0;
}

