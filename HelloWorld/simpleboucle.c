#include <stdio.h>
int main(void)
{
    int i = 0;

    while(i < 5/*a combient de ligne on arrete la boucle*/)
    {
        printf("Texte a repeter\n");
        i++;
    }

    return 0;
}