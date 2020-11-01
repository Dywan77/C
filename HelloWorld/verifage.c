#include <stdio.h>
int main(void)
{
int age;

printf("\nQuelle age a tu ?\n");
scanf("%d", &age);

if (age >= 100)
{
    printf("Je sais que tu ment sinon tu serais dead chacal");
} else if (age <= 4)

{
    printf("Je sais que tu ment sinon tu serais pas nee chacal");
}else

{
    printf("D accord tu a %d", age);
}
return 0;
}