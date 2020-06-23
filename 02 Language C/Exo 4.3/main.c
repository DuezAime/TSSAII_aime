#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secondes, minutes, heures ;

    printf("donner l'heure : ");
    scanf("%d",&heures);
    printf("\n");

    printf("donner les minutes : ");
    scanf("%d",&minutes);
    printf("\n");

    printf("donner les secondes : ");
    scanf("%d",&secondes);
    printf("\n");

    secondes = secondes + 1;

    if (secondes == 60)
    {
        secondes = 0;
        minutes = minutes + 1;
        if (minutes == 60)
        {
            minutes = 0;
            heures = heures + 1;
            if (heures == 24)
            {
                heures = 0;
            }
        }
    }
    printf("Dans une minutes, il sera %d heures %d minutes %d secondes ",heures, minutes, secondes);
    printf("\n");

    return 0;
}

