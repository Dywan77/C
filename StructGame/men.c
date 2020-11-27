#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verifage(int *age)
{
    int verifage;
    verifage = *age;
    
    if (verifage >= 100)
    {
        printf("Tu est trop vieux !");
        while(1);
    }else if (verifage <= 5)
    {
        printf("Tu est trop jeune !");
        while(1);
    }else
    {
        *age = verifage;
        printf("Tres bien, tu a %d ans\n", verifage);
    }
    
}
int main(void)
{

    
    int choix;
    int age;
    int un = 1;
    int deux = 2;
    printf("\n\n\nLancement du programme...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("New Game : 1     |     Stats : 2\n");
    scanf("%d", choix);
    if(choix == un)
    {
        printf("\nQuelle age as tu :\n");
        scanf("%d", age);
        verifage(&age);
        return 0;

    }else if (choix == deux)
    {
        printf("Late2");
        return 0;
    }else
    {
        return 0;
    }


    return 0;
}