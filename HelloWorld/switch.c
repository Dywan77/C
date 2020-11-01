#include <stdio.h>
int main(void)
{
    int age;

    printf("Quelle age a tu ?\n");
    scanf("%d", &age);

    switch (age)
    {
        case 0:
        printf("Tu n'est pas née mdr");
        break;

        case 50:
        printf("OHhh ! Tu a le meme age que moi !");
        break;
    
    default:
            if (age <= 5)
            {
            printf("Mdr tu est un bébé");
            }else if (age >= 100)
            {
                printf("Ohhh ! Tu est vieux dit donc !");
            }else
            {
                printf("Hmm ok me raconte pas ta vie :)");
            }
        break;
    }

    return 0;
}