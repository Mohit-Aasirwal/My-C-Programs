#include <stdio.h>
int main()
{
    float a,b,c;
    printf("enter the three sides of the triangle\n");
    scanf("%f%f%f",&a,&b,&c);

    /*for equilateral triangle*/
    if (a==b && a==c)
    printf("the sides indicate that the given triangle is an equilateral triangle\n");

    /*for isosceles triangle*/
    if ((a==b && a!=c)||(b==c && b!=a)||(c==a && c!=b))
    printf("the sides indicate that the given trianlge is an isosceles triangle\n");

    /*for scalene triangle*/
    if(a!=b && b!=c)
    printf("the sides indicate that the given triangle is a scalene triangle\n");

    /*for right angle triangle*/
    if((a*a==b*b+c*c) || (b*b==c*c+a*a) || (c*c==a*a+b*b))
    printf("the sides indicate that the given triangle is a right angle triangle\n");

    return 0;


}