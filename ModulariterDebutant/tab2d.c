#include <stdio.h>
#define NOMBRE_DE_LIGNES 3
#define NOMBRE_DE_COLONNES 3
int main(void)
{
    int damier[NOMBRE_DE_LIGNES][NOMBRE_DE_COLONNES] = 
    {
        {1, 2, 3},
        {7, 8, 9},
        {13, 14, 15}
    };

    int i, j;

    for(i = 0 ; i < NOMBRE_DE_LIGNES ; i++)
        for(j = 0 ; j < NOMBRE_DE_COLONNES ; j++)
            printf("Element indice [%d][%d] = %d\n", i, j, damier[i][j]);


    return 0;
}