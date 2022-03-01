#include <stdio.h>
#include <math.h>
int main()
{
    int p=100000 ,yrs,pop;
    float r=10;

    for (yrs=1;yrs<=10;yrs++)
    {
        pop=p/(pow(1+r/100,yrs));
        printf("the population in %d years ago:%d\n",yrs,pop);
    }
    return 0;
}