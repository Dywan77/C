#include <stdio.h>

int main(void)
{
    int nombreA = 15;
    int nombreB = 28;

    printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);

    /*int *nombreAA = &nombreA;
    int *nombreBB = &nombreB;*/

    printf("APRES : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}