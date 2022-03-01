#include <stdio.h>
int main()
{
    int year;
    printf("enter an year to find out whether it is a leap year or not\n");
    scanf("%d",&year);

    if (year%4==0)
     printf("entered year is a leap year\n");
    else
     printf("entered year is not a leap year\n");

     return 0;  
}