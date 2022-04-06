/*Pyramid Pattern*/
#include <stdio.h>
int main()
{
    int a,b;
    /*loop for rows*/
    for (a=1;a<=5;a++)
    {/*loop for columns*/
        for (b=1;b<=9;b++)
        {/*loop for columns*/
            if(b>=6-a&&b<=4+a)
            printf("*");
            else
            printf(" ");
        }
        /*statement for changing row*/
        printf("\n");
    }
    return 0;
}