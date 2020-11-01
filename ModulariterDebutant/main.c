#include <stdio.h>
#include "player.h"

int main(void)
{
    int entrerclient;
    char start[10];
    Commencement();
    scanf("%s", &start);
    
    quizz1();

    scanf("%d", &entrerclient);

    if(entrerclient == 79)
    {
        printf("\nBonne reponse !\n\n");
    }
    else
    {
        printf("\n\nMAUVAISE REPONSE !\n\n");
        return 0;
    }

    return 0;
}