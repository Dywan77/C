#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "redirect.h"

static int createname(void)
{
    int lvl = 0;
    const char createIIIname[256];

    printf("\nEntre un pseudo :\n");
    scanf("%s", createIIIname);
    printf("%s", createIIIname);
    if (strlen(createIIIname) >= 15)
    {
        printf("Ton nom est trop grand !");
        while(1);
    }else if (strlen(createIIIname) <= 4)
    {
        printf("Ton nom est trop petit !");
        while(1);
    }

    return createIIIname;   
}
