#include <stdio.h>
int main(void)
{
    int niveau;
    char pays[20];

printf("Choisie le niveaux de depart :\n");
scanf("%d", &niveau);
printf("Tu est Niveau %d !\n", niveau);
printf("Quelle est ton pays prefere ?\n");
scanf("%s", &pays);
if(pays == "France")
{
    printf("Tu a bien raison vive la france hehe !");
    }
    else

    {
        printf("Hmmm le %s est pas mal c'est vrais\n", pays);
        niveau++;
        printf("Tu est Niveau %d !\n", niveau);
        
    }
    


return 0;
}