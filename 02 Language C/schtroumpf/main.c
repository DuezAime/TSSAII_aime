#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int tab1eau1[MAX]= {0} ;
    int tab1eau2[MAX]= {0} ;
    int i, j, schtroumpf, defaut, nombre1, nombre2;

    schtroumpf = 0;

    do
    {
        fflush(stdin);
        printf("entrer le nombre de valeurs que vous comptez saisir dans le tableau 1 : ");
        defaut = scanf("%d",&nombre1);
        printf("\n");
    }
    while(defaut == 0 || nombre1 < 1);

    printf("Pour le premier tableau \n");

    for (i=0 ; i <= nombre1-1 ; i++)
    {
        do
        {
            fflush(stdin);
            printf("entrer une valeur : ");
            defaut = scanf("%d",&tab1eau1[i]);
            printf("\n");
        }
        while(defaut == 0);
    }

    do
    {
        fflush(stdin);
        printf("entrer le nombre de valeurs que vous comptez saisir dans le tableau 2 : ");
        defaut = scanf("%d",&nombre2);
        printf("\n");
    }
    while(defaut == 0 || nombre2 < 1);

    printf("Pour le deuxieme tableau \n");

    for (i=0 ; i <= nombre2-1 ; i++)
    {
        do
        {
            fflush(stdin);
            printf("entrer une valeur : ");
            defaut = scanf("%d",&tab1eau2[i]);
            printf("\n");
        }
        while(defaut == 0);
    }

    for (i=0 ; i <= nombre1-1 ; i++)
    {
        for (j=0 ; j <= nombre2-1 ; j++)
        {
            schtroumpf = schtroumpf + tab1eau1[i] * tab1eau2[j];
        }

    }

    printf("Le schtroumpf vaut : %d", schtroumpf);

    return 0;
}
