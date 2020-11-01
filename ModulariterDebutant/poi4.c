#include <stdio.h>

void revers(int *nombre1, int *nombre2)
{
    int temp;

    temp = *nombre1;
    *nombre1 = *nombre2;
    *nombre2 = temp;

}



int main(void)
{
    int nombre1 = 15;
    int nombre2 = 28;

    printf("\n\n\n\n\n\n\n\n\nAVANT : Nombre1 = %d et Nombre2 = %d\n", nombre1, nombre2);
    revers(&nombre1, &nombre2);
    printf("APRES : Nombre1 = %d et Nombre2 = %d", nombre1, nombre2);

}