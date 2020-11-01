#include <stdio.h>
#define TVA 20
#define wesh printf("Wesh !\n")

#define LONGUEUR 2
#define LARGEUR 2
#define AIR (LONGUEUR * LARGEUR)

/*
constante de bases:

__FILE__   : NOM DE FICHIER
__LINE__   : LIGNE DE FICHIER
__DATE__   : DATE DE COMPILATION
__TIME__   : HEURE DE COMPILATION
*/


int main(void)
{
    int ht = 100;
    int ttc;
    ttc = ht + (ht * TVA / 100);
    wesh;
    printf("%d\n", AIR);
    printf("%d\n\n\n\n", ttc);
    


    printf("Nom du fichier : %s\nNumero de la ligne : %d\nDate de compilation : %s\nHeure de compilation : %s\n\n", __FILE__, __LINE__, __DATE__, __TIME__);



return 0;
}