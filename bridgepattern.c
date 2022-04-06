/*bridge pattern*/
#include <stdio.h>
int main()
{
    int a,b;

    for(a=1;a<=5;a++)
    {
        for(b=1;b<=9;b++)
        {
            if(b<=6-a||b>=4+a)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}