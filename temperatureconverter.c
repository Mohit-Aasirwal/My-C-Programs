#include <stdio.h>
int main()
{
    float c,f;
    printf("\n input your temperature in degree celcius and get answer in farenheit\n");
    scanf("%f",&c);
    f=9/5*c+32;
    printf("the temperature in farenheit is--->%f \n",f);
    return 0;
}