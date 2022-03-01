#include <stdio.h>
#include <math.h>
int main()
{/*taking input*/
    float x,y,r,theta;
    printf("enter the x coordinate ");
    scanf("%f",&x);
    printf("enter the y coordinate");
    scanf("%f",&y);
/*formulae*/
    r=sqrt(x*x+y*y);
    theta=atan2(y,x);
    theta= theta*180/3.14;
    /*taking output*/
    printf("the coordinates you entered can be represented in polar format in following order:\n");
    printf("radius%f\n",r);
    printf("argument%f\n",theta);

    return 0;
}