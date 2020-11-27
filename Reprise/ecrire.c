#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fic = fopen("profil.save", "w");
    char name[255];
    if(fic == NULL)
    exit(1);

    printf("Quelle est ton pseudo :\n");
    scanf("%s", &name);


    fputs(name, fic);

fclose(fic);

return 0;

}