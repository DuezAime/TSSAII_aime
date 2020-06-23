#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nombre, rang, resultat, defaut;
    do
    {
        fflush(stdin);
        printf("Donner le premier nombre : ");      //demande aquisition du premier nombre
        defaut = scanf("%d",&nombre);               //aquisition du premier nombre
        printf("\n");                               //asaut de ligne
    }
    while(defaut == 0 );                            //reboucle si defaut sur le scanf

    resultat = nombre;
    rang = 1;

    for (i=2; i<=20;i++)
    {
        do
        {
            fflush(stdin);
            printf("Donner le nombre numero %d : ",i);
            defaut = scanf("%d",&nombre);
            printf("\n");
        }
        while(defaut == 0 );                        //reboucle si defaut sur le scanf

        if (nombre > resultat)                      //detection du plus grand
        {
            resultat = nombre;
            rang = i;
        }
    }
    //Affichage du plus grand
    printf("le plus grand est %d c est le numero de rang : %d \n", resultat, rang);

return 0;

}

