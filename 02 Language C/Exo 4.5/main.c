#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int age, defaut;
    char genre[5];

    do
    {
        fflush(stdin);
        printf("Quel est votre genre homme/femme ?");
        defaut = scanf("%s",genre);
        printf("\n");
    }
    while((strcmp(genre,"homme")!= 0 && strcmp(genre,"femme")!= 0) || defaut == 0);

    do
    {
        fflush(stdin);
        printf("Quel est votre age ?");
        defaut = scanf("%d",&age);
        printf("\n");
    }
    while( age <= 0 || defaut == 0 );

    if ((genre[0] == 'h' && age >= 20) || (genre[0] == 'f' && age >= 18 &&  age <= 35))
    {
        printf("Individu imposable");
        printf("\n");
    }
    else
    {
        printf("Individu non-imposable");
        printf("\n");
    }
    return 0;
}

