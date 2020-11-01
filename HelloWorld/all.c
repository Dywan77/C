#include <stdio.h>
int main(void)
{
    int nombre = 0;
    char caractere = 0;
    float HT = 0;
    float TVA = 0;
    float TTC = 0;

    
printf("\nHello World !\n\n\nChoisie un nombre :\n");
scanf("%Ld", &nombre);
printf("Enregistre !\nChoisie une lettre :\n");
scanf("%Lc", &caractere);
      

printf("Enregistré !\nMaintenant nous allons calculer un un prix TTC !\nChoisie un prix Hors Taxes :\n");
           
          
/*scanf("%f", &HT);
TVA = HT / 5;
TTC = HT + TVA;
printf("Enregistre !\n\n\nLe prix TTC sera donc de : %.2f euros\n\n\n\nEt tu avais choisie le nombre '%d' et la lettre '%c'\n\n", TTC);
  */             
        
    return 0;

}