#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int nombre, defaut, i, j;
    float moyenne;
    int tableau1[MAX]= {0} ;
    int tableau2[MAX]= {0} ;
    moyenne = 0;
    j = 0;

    do
    {
        fflush(stdin);
        printf("entrer le nombre de note a saisir :");
        defaut = scanf("%d",&nombre);
        printf("\n");
    }
    while(defaut == 0 || nombre < 1 );

    for (i=0 ; i <= nombre-1 ; i++)
    {
        do
        {
            fflush(stdin);
            printf("entrer la note %d : ",i+1);
            defaut = scanf("%d",&tableau1[i]);
            printf("\n");
        }

        while(defaut == 0);
        moyenne = moyenne + tableau1[i];
    }

    moyenne = moyenne / nombre;
    printf("\nLa moyenne est de %f\n\n",moyenne);

    for (i=0 ; i <= nombre-1 ; i++)
    {
        if (tableau1[i] >=  moyenne)
        {
            tableau2[j] = tableau1[i];
            j = j+1;
        }
    }

    if (j==1)
    {
        printf("la note suivante est superieur a la moyenne ");
    }
    else
    {
        printf("les notes suivante sont superieurs a la moyenne ");
    }

    for (i=0 ; i <= j-1 ; i++)
    {
        printf(": %d ",tableau2[i]);
    }

    printf("\n");

    return 0;
}
