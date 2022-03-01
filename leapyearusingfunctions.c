#include <stdio.h>
int leap ();
int main()
{
    int yr,b;
    printf("enter an year to know it is a leap year or not:\n");
    scanf("%d",&yr);
    leap(yr);
    return 0;
}
int leap(int yr)
{
    if (yr%4==0)
    printf("entered year is a leap year\n");
    else 
    printf("entered year is not a leap year\n");
}