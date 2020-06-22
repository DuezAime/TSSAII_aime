#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    double resultat;
    int i, defaut,nombre;
    resultat = 1;

    do
    {
        fflush(stdin);
        printf("Donner un nombre :");
        defaut = scanf("%d",&nombre);
        printf("\n");
    }
    while(defaut == 0 );


    for (i=1; i<=nombre;i++)
    {
        resultat = resultat * i;
    }

    printf("%lf\n",resultat);

return 0;
}

