#include <stdio.h>
#define TAILLE_TAB 5

int *creer_tableau(void);
void afficher_tableau(int tab[], int taille);

//--------------------------------------------------------------------/

int main(void)
{
    int i;
    int *tableau = creer_tableau();
    afficher_tableau(tableau, TAILLE_TAB);
    printf("\n\n");
    tableau[2] = -5;
    afficher_tableau(tableau, TAILLE_TAB);
    return 0;
}


//--------------------------------------------------------------------/


int *creer_tableau(void)
{
    static int tableau_entiers[5];
    int i;
    for(i = 0 ; i < 5 ; i++)
    tableau_entiers[i] = i * 3;
    return tableau_entiers;
}


//--------------------------------------------------------------------/


void afficher_tableau(int tab[], int taille)
{
    int i;
    for(i = 0 ; i < taille ; i++)
    printf("[%d]", tab[i]);
}