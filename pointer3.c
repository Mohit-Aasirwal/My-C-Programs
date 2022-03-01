#include <stdio.h>
#include <math.h>
float numerator(float,int);
float denominator(int);
int main()
{
    float a,b,c,x,sum;
    int i,j;
    printf("enter the value of x:\n");
    scanf("%d",&x);
    printf("the sum to ten terms of expansion of sin x is:\n");
    for (i=1,j=1;i<=10;i++,j+=2)
    {
        a=numerator(x,j);
        b=denominator(j);
        c=a/b;
        (i%2==0?sum=sum-c:(sum=sum+c));
        
    }
    printf("%f",sum);
    return 0;
}
float numerator(float x,int j)
{
    float k=1;
    int m;
    for (m=1;m<=j;m++)
    {
        k*=x;
    }
    return (k);
}
float denominator(int j)
{
    int a;
    float b=1;
    for (a=1;a<=j;a++)
    {
        b=b*a;
    }
    return b;
}
