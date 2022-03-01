#include <stdio.h>
int main()
{
    float km,m,inch,ft;
    printf("\n enter value in kilometers");
    scanf("%f", &km);
    m= km * 1000;
    inch = m * 2.54;
    ft= inch/12;

    printf("in meters %f\n",m);
    printf("in inches %f\n",inch);
    printf("in feets %f\n",ft);

    return 0;
}