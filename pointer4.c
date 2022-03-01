#include <stdio.h>
#include <math.h>
int ar(int,int,int);
int main()
{
    int a,b,c;
    int area;
    printf("enter the sides of the triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    area=ar(a,b,c);
    printf("the calculated area of triangle is:%d\n",area);
    return 0;
}
int ar(int a,int b,int c)
{
    int s,area,m;
    s=(a+b+c/2);
    m=(s*(s-a)*(s-b)*(s-c));
    area=sqrt(m);
    return (area);
}
