#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,ar,s;
    /*getting input by user*/
    printf("please input first side");
    scanf("%f",&a);
    printf("please input second side");
    scanf("%f",&b);
    printf("please input third side");
    scanf("%f",&c);

    /*formulae*/
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));

    /*printing output*/
    printf("the area of the above triangle is%f\n",ar);

    return 0;

}