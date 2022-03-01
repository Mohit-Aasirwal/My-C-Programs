#include <stdio.h>
int main()
{
    int yr;
    printf("enter the year to determine whether it is leap year or not\n");
    scanf("%d",&yr);

    if (yr%4==0)
    printf("entered year is a leap year\n");
    else 
    printf("entered year is not a leap year\n");

    return 0;

}