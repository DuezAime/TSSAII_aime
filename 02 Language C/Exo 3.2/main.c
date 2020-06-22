#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;

    fflush(stdin);
    printf("Donnez un nombre : ");
    scanf("%d",&nombre);
    printf("\n");

    if (nombre > 0)
    {
        printf("%d est positif",nombre);
    }
    else
    {
        if (nombre < 0)
        {
            printf("%d est negatif",nombre);
        }
        else
        {
            printf("%d est nul",nombre);
        }
    }
    printf("\n");

    return 0;
}

