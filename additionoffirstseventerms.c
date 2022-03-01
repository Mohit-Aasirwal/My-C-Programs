#include <stdio.h>
int main()
{
    int a=1,b;
    float fact,d=0.0;
    while (a==1)
    {   fact=1.0;
    for (b=1;b<=a;b++)
    {fact=fact *b;}
    d=d+a/fact;
    a++;
    }
    printf("%f\n",d);

    return 0;
}