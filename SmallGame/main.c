#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "profil.h"

int main(void)
{
    FILE *listNamePlayer = fopen("listNamePlayer.txt", "w");
    char newNameplayer[20];
    char NamePlayer[20];
    char ViewListNewPlayerBefore[1000];
    char ViewListNewPlayerAfter[1000];
    int identificationnumber = 0;
    if(listNamePlayer == NULL)
    exit(1);

    fputs("Ouverture des logs :\n\n", listNamePlayer);

    printf("Quelle est ton pseudo :\n");
    scanf("%s", &newNameplayer);
    fputs("-Pseudo enregistré : ", listNamePlayer);
    fputs(newNameplayer, listNamePlayer);

    ++identificationnumber;
    fputs("\n-Numero d'identification crée : ", listNamePlayer);
    fprintf(listNamePlayer, "%d", identificationnumber);

    


    fclose(listNamePlayer);
    return 0;
}