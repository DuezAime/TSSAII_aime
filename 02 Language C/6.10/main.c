#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    int tableau1[8] = {4,8,7,9,1,5,4,6};
    int tableau2[8] = {7,6,5,2,1,3,7,4};
    int tableau3[8] = {0};

    for (i=0 ; i <= 7 ; i++)
    {
        tableau3[i] = tableau2[i] + tableau1[i];
        printf(" %d ",tableau3[i]);
    }

       printf("\n");

    return 0;
}
