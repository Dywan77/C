#include <stdio.h>

int main(void)
{
    int nombre = 5;


    printf("Choisie un nombre :\n");
    scanf("%d", &nombre);
     

    if (nombre > 10)
    {
        printf("\n\n\n%d est superieur a 10 ! \n", nombre);
    } else 
    {
         printf("\n\n\n%d est inferieur a 10 ! \n", nombre);
    }

    return 0;
    
}