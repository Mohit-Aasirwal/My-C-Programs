#include <stdio.h>
int main()
{
    char a;
    printf("enter a character to determine it is a special symbol or not:\n");
    scanf("%c",&a);

    ((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))?printf("the entered character is a special symbol\n"):
    printf("the entered character is not a special symbol\n");

    return 0;
}