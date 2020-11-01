#include <stdio.h>
int main(void)
{
    const int zero = 0;
    char frase[200];
    char oui_ou_non[20] = "oui";

    char oui[3] = "oui";
    char non[3] = "non";
    /*char yes[3] = "yes";
    char no[2] = "no";
    char y[1] = "y";
    char n[1] = "n";*/

    printf("Choisie la frase a repeter :\n");
    scanf("%s", &frase);
    while(zero == 0)
    printf("%s", frase);

    /*printf("Est tu sur de vouloir le faire ?\n");
    scanf("%s", &oui_ou_non);

if (oui_ou_non == oui || yes || y)
{
    while(zero == 1)
    printf("%s", frase);
}else if 
(oui_ou_non == non || no || n)
{
    printf("Ok et bien casse toi !");
    return 0;
}
else
{
    printf("Tu veut repeter la frase oui ou non ?");
        if (oui_ou_non == oui || yes || y)
        {
            while(zero == 1)
            printf("%s", frase);
        }else if (oui_ou_non == non || no || n)
        {
            printf("Ok et bien casse toi !");
        return 0;
        }else
        {
            printf("Bon tu me gonfle mdr");
        }
        
        
    
}*/

return 0;
}