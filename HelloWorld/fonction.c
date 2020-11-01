#include <stdio.h>

int Niveaudedepart(int niveau)
{
    niveau = 0;
    return niveau;
}
int main(void)
{
    int niveau;
    int entrerint;
    //char entrerchar[200];

    niveau = Niveaudedepart(niveau);
    printf("Bienvenue dans le jeu du calcule mentale !\n\n\n");

    printf("combient font 1 + 1 ?\n");
    scanf("%d", &entrerint);

    if(entrerint == 2)
    {
        niveau++;
        printf("\nBonne reponse !\n");
    }
    else
    {
        printf("MAUVAISE REPONSE !");
        return 0;
    }
    printf("\nTu est niveau %d !\n\n", niveau);
    

    printf("combient font 3 + 4 ?\n");
    scanf("%d", &entrerint);

    if(entrerint == 7)
    {
        niveau++;
        printf("\nBonne reponse !\n");
    }
    else
    {
        printf("MAUVAISE REPONSE !");
        return 0;
    }
    
    printf("\nTu est niveau %d !\n\n", niveau);
    



    printf("combient font 65 - 50 ?\n");
    scanf("%d", &entrerint);

    if(entrerint == 15)
    {
        niveau++;
        printf("\nBonne reponse !\n");
    }
    else
    {
        printf("MAUVAISE REPONSE !");
        return 0;
    }
    
    printf("\nTu est niveau %d !\n\n", niveau);
    


    printf("combient font 45 + 12 ?\n");
    scanf("%d", &entrerint);

    if(entrerint == 57)
    {
        niveau++;
        printf("\nBonne reponse !\n");
    }
    else
    {
        printf("MAUVAISE REPONSE !");
        return 0;
    }
    
    printf("\nTu est niveau %d !\n\n", niveau);



    printf("combient font 9 x 9 ?\n");
    scanf("%d", &entrerint);

    if(entrerint == 81)
    {
        niveau++;
        printf("\nBonne reponse !\n");
    }
    else
    {
        printf("MAUVAISE REPONSE !");
        return 0;
    }
    
    printf("\nTu est niveau %d !\n\nTu gagne un vieux chewing-gum qui etait dans ma poche depuis 5 jours !\n", niveau);
    printf("\n\nAppuis sur une touche pour fermer.");
    scanf("%d", entrerint);
    
    
    
    return 0;
}