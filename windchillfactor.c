#include <stdio.h>
#include <math.h>
int main()
{
    float t,v,wcf;
    printf("enter the value of temperature of surrounding:\n");
    scanf("%f",&t);
    printf("enter the value of velocity of wind:\n");
    scanf("%f",&v);

    wcf=35.74+0.6215*t+(0.4275*t -35.75)*pow(v,0.16);
    printf("the wind chill factor of the given data is:%f\n",wcf);

    return 0;

}