#include <stdio.h>
int main()
{
    int a,b;

    printf("enter the number for which you want to print the table\n");
    scanf("%d",&a);
    for (b=1;b<=10;b++)
    {
        printf("%d*%d=%d\n",a,b,a*b);
    }
    return 0;
}