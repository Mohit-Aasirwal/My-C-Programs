#include <stdio.h>
#include <math.h>
int main()
{
    float a,s,c,t,cosec,sec,cot;
    printf("input an angle in degree through the keyboard:\n");
    scanf("%f",&a);
    
    s=sin(a);
    printf("sine for given angle is:%f\n",s);
    c=cos(a);
    printf("cosine for given angle is:%f\n",c);
    t=tan(a);
    printf("tangent for given angle is:%f\n",t);
    cosec=1/sin(a);
    printf("cosecant for given angle is:%f\n",cosec);
    sec=1/cos(a);
    printf("secant for given angle is:%f\n",sec);
    cot=1/tan(a);
    printf("cotangent for given angle is:%f\n",cot);

    return 0;
}