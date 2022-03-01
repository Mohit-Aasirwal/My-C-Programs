#include <stdio.h>
int main()
{
    int a,b,c,i=1;
    printf("here are all the armstrong numbers between 0-500\n");
    while(i<=500)
    {a=i%10;
    b=i%100;
    b=(b-a)/10;
    c=i/100;
    if ((a*a*a)+(b*b*b)+(c*c*c)==i)
    printf("%d",i);
    i++;
    }

return 0;
}