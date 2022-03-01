#include <stdio.h>
int fact (int);
int main()
{
    int a,b;
    printf("enter a number to find its factorial:\n");
    scanf("%d",&a);
    b=fact(a);
    printf("the factorial value of the given number is:%d\n",b);
    return 0;
}
int fact (int a)
{
    int b,c=1;
    for (b=2;b<=a;b++)
    {
        c=c*b;
    }
    return c;
}