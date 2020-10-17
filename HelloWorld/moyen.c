#include <stdio.h>
int main(void) 

{
    float prixdebase;
    float vingtpourcentduprixdebase;
    float prixfinal;

    printf("Quelle est le prix a payer : \n");
    scanf("%f", &prixdebase);

    vingtpourcentduprixdebase = prixdebase / 5;
    prixfinal = prixdebase + vingtpourcentduprixdebase;

    printf("\n\nLe prix avec la TVA sera donc de : %.2f euros", prixfinal);

    return 0;

}