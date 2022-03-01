#include <stdio.h>
#include <math.h>
int main()
{
    float x,a,b;
    printf("enter a number to find sum to first seven terms of its expansion of natural logarithm:\n");
    scanf("%f",&x);

    for (a=1;a<=7;a++)
    {
        if (a==1)
        b=b+pow((x-1.0)/x,a);
        else
        b=b+1/2*pow((x-1.0)/x,a);
    }
    printf("the result is :%f\n",b);
return 0;
}