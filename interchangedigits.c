#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first value i.e.-a:\n");
    scanf("%d",&a);
    printf("enter the second value i.e.-b:\n");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("boom the values are interchanged:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;
}