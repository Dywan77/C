#include <stdio.h>

int main(void)
{
    int entrerclient;
    int ageplayer;
    char authplayer[20];
    char nameplayer[20];
    char non[3] = "non";
    char oui[3] = "oui";


    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBONJOUR ET BIENVENUE !\n\nComment t'apelle t-u ?\n");
    scanf("%s", &nameplayer);
    /*printf("Quelle age a t-u ?\n");
    scanf("%d", &ageplayer);*/
    printf("\nHEY ! %s est un tres jolie prenom ;)\n\n");
    printf("COMMENCEMENT, est tu prêt ?\n");
    scanf("%s", &authplayer);
    
if (authplayer == non)
{
    printf("\nEt bien casse toi !");
    return 0;
}else if (authplayer == oui)
{}else
{
    printf("IL FAUT REPONDRE PAR OUI OU PAR NON !");
    return 0;
}


    printf("%s Combien font 2 + 2 :\n");
    scanf("%d", entrerclient);
    if (entrerclient == 4)
    {
        printf("hi");
    }



     


    return 0;
}