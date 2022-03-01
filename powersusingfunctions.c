#include <stdio.h>
int power(int,int);
int main()
{
    int a ,b ,c;
    printf("enter the exponent and power respectively\n");
    scanf("%d%d",&a,&b);
    c=power(a,b);
    printf("answer=%d\n",c);
    return 0;
}
int power(int a,int b)
{
    int c=1;
    int p=1;
    for (c;c<=b;c++)
    p*=a;
    return p;
}