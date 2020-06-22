#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prix = 0;
    int nombre = 0;
    int taux_tva = 0 ;

    printf("Donnez le prix HT de l'article : ");
    scanf("%d",&prix);
    printf("\n");

    printf("donnez le nombre d'article : ");
    scanf("%d",&nombre);
    printf("\n");

    printf("Donnez le taux de TVA : ");
    scanf("%d",&taux_tva);
    printf("\n");

    printf("Le prix total TTC est de : %f",(((taux_tva / 100.0) * prix) + prix) * nombre);

    return 0;
}
