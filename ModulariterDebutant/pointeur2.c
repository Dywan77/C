#include <stdio.h>

void inversion(int *valeura, int *valeurb)
{
    int provisoir;

    provisoir = *valeurb;
    *valeurb = *valeura;
    *valeura = provisoir;
}

int main(void)
{
    int valeura;
    int valeurb;

    printf("Quelle est la valeur de A ?\n");
    scanf("%d", &valeura);
    printf("Quelle est la valeur de B ?\n");
    scanf("%d", &valeurb);
    printf("\n\n\nAvant : A = %d et B = %d", valeura, valeurb);
    inversion(&valeura, &valeurb);
    printf("\n\n\nApres : A = %d et B = %d", valeura, valeurb);

    return 0;
}