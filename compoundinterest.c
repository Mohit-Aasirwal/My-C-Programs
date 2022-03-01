#include <stdio.h>
#include <math.h>
int main()
{
    float p,n,r,q,a=1,b;

    for (a>0;a<=10;a++)
    {
        printf("enter the principal amount:\n");
        scanf("%f",&p);
        printf("enter the no. of years:\n");
        scanf("%f",&n);
        printf("enter the rate of interest:\n");
        scanf("%f",&r);
        printf("enter the no of times in a year the interest compounds:\n");
        scanf("%f",&q);

        //formula
        b=p*(pow((1+r/q),n*q));
        printf("the amount is:%f\n",b );
        }
        return 0;
}