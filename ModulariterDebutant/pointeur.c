#include <stdio.h>

void inverser_nombres(int *pt_nb1, int *pt_nb2)
{
    int temporaire = 0;

    temporaire = *pt_nb2;
    *pt_nb2 = *pt_nb1;
    *pt_nb1 = temporaire;
}

int main(void)
{
    int nombreA = 15;
    int nombreB = 28;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNom du fichier : %s\nNumero de la ligne : %d\nDate de compilation : %s\nHeure de compilation : %s\n", __FILE__, __LINE__, __DATE__, __TIME__);
    printf("Adresse NombreB = %p\n\n\n", &nombreB);

    printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);
    inverser_nombres(&nombreA, &nombreB);//ptnb1 et 2 / nombreA et B
    printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}