#include <stdio.h>
int main()
{
    int yr;
    printf("enter a year to determine whether it is a leap year or not:\n");
    scanf("%d",&yr);

    (yr%4==0)?printf("entered year is a leap year\n"):printf("entered year is not a leap year\n");

    return 0;
}