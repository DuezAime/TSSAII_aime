#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre ;
    float prix;


    printf("nombre de photocopies : ");
    scanf("%d",&nombre);
    printf("\n");

    if (nombre <= 0)
        {
        nombre = 0;
        printf("Facturation impossible");
        printf("\n");
        }
     else
        {
        if (nombre <= 10)
            {
            prix = nombre * 0.1;
            printf("le prix total est de %f Euro(s) à 0.1 Euro la photocopie",prix);
            }
         else
            {
            if (nombre <= 30)
                {
                prix = 1 + (nombre-10.0) * 0.09;
                printf("le prix total est de %f Euro(s) dont 10 photocopie pour 1 Euro",prix);
                }
            else
                {
                prix = 2.8 + (nombre-30) * 0.08;
                printf("le prix total est de %f Euro(s) dont 10 photocopie pour 1 Euros et 20 photocopie pour 1.8 Euros",prix);
                }
            }
        }
    printf("\n");
    printf("\n");

return 0;
}
