#include <stdio.h>
int main(void)
{
    char lettre;
    char lettre1;
    char lettre2;
    char lettre3;
    char lettre4;
    char lettre5;

    printf("\nChoisie les lettres qui constiturons le mot :\n\n");
    scanf("\n%c", &lettre);
    scanf("\n%c", &lettre1); 
    scanf("\n%c", &lettre2); 
    scanf("\n%c", &lettre3); 
    scanf("\n%c", &lettre4); 
    scanf("\n%c", &lettre5);  
    

    printf("\nVoici le mot final :\n");
    printf("\n%c%c%c%c%c%c\n\n", lettre, lettre1, lettre2, lettre3, lettre4, lettre5);

    return 0;
}
