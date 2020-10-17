#include <stdio.h>
int main(void)
{
    int nombre;
    char lettre;

    printf("\nChoisie un nombre :\n\n");
    scanf("\n%d", &nombre); 
    printf("\nHmm tres bien tu a choisie le nombre %d\n", nombre);

    printf("\nChoisie une lettre :\n\n");
    scanf("\n%c", &lettre); 
    printf("\nHmm tres bien tu a choisie la lettre %c\n\n", lettre);

    return 0;
}
