#include <stdio.h>
int main()
{
    char i;

    printf("enter any character through the keyboard to recognise it:\n");
    scanf("%c",&i);
    
    if(i>=65 && i<=90)
    printf("the entered character is a capital alphabet\n");

    else if(i>=97 && i<=122)
    printf("the entered character is a small alphabet\n");

    else if(i>=48 && i<=57)
    printf("the entered character is a number\n");

    else if ((i>=0 && i<=47) || (i>=58 && i<=64) || (i>=91 && i<=96) || (i>=123 && i>=127))
    printf("the entered character is a special symbol\n");

    return 0;

}