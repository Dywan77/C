
#include <stdio.h>

int main(void) 


{ 
    const int dix = 10;
    float prixHT = 9.99;
    float prixTVA = 11.99;
    float PI = 3.14;
    int moin10 = 5;
    int plus10 = 15;
    int monage = plus10;
    int deux = 2;
    float moyenprix = prixHT + prixTVA;
    float vraismoyenprix = moyenprix / deux;


/*printf("\nLe nombre est %d ou %d.\n", moin10, plus10);
*/printf("\n");
printf("\nLe prix HT est de %.2f euros\n", prixHT);
printf("\n");
/*printf("\nPi = %.2f\n", PI);
printf("\n");
printf("\nMon age est de %d ans\n", monage);
printf("\n");
printf("\nMon age est de %d ans\n", dix);*/
printf("\nLe prix avec TVA est de %.2f euros\n", prixTVA);
printf("\n");
printf("\nCalcule de la moyen...\n");
printf("\n");
printf("\nLa moyen des deux est de :%.2f\n euros", vraismoyenprix );

    
    return 0; 
}

