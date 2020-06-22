#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre1, nombre2 ;


    printf("Donnez un premier nombre : ");
    scanf("%d",&nombre1);
    printf("\n");

    printf("Donnez un deuxime nombre nombre : ");
    scanf("%d",&nombre2);
    printf("\n");


    if ((nombre1 > 0 && nombre2 > 0) || (nombre1 < 0 && nombre2 < 0))
        {
        printf("le produit des deux nombres est positif");
        }
    else
        {
        if (nombre1 == 0 || nombre2 == 0)
            {
            printf("le produit des deux nombres est nul");
            }
        else
            {
            printf("le produit des deux nombres est negatif");
            }
        }
    printf("\n");

    return 0;
}
