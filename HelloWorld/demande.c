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
    printf("\nTu a choisie la lettre %c et le nombre %d\n\n", lettre, nombre);

    return 0;
}
