#include <stdio.h>
int main(void)
{
    int age;

    printf("Quelle age a tu ?\n");
    scanf("%d", &age);

    (age >= 100) ? printf("Pourquoi tu ment ?") : printf("Ok Ok je voulais etre sur :)");
// pour un double, au temps faire un if ou un switch :)

    return 0;

}