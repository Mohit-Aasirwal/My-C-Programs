#include <stdio.h>
int main()
{
    char a;
    printf("enter a character to determine whether it is a lower case alphabet or not\n");
    scanf("%c",&a);

    (a>=97 && a<=122)?printf("the character entered is a lower case alphabet\n"):printf("the character entered is not a lower case alphabet\n");
    
    return 0;
}