#include <stdio.h>
#include <stdlib.h>

int main()

{
    int age;

    printf("Donnez l'age de l'enfant : ");
    scanf("%d",&age);
    printf("\n");

    switch (age)
    {
    case 6:
    case 7:
        printf("l'enfant est un poussin !");
        break;
    case 8:
    case 9:
        printf("l'enfant est un pupille !");
        break;
    case 10:
    case 11:
        printf("l'enfant est un minime !");
        break;
    case 12:
    case 13:
        printf("l'enfant est un cadet !");
        break;
    default:
        printf("l'enfant est hors categorie");
        break;
    }
    return 0;
}

