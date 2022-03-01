#include <stdio.h>
int sd(int*,int*,int*,int*,int*);
int sum(int*,int*,int*,int*,int*);
int avg(int*,int*,int*,int*,int*);

int main()
{
    int a ,b,c,d,e,s,av,std;
    printf("enter the 5 numbers to get its sum ,average and standard deviation respectively:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=sum(&a,&b,&c,&d,&e);
    av=avg(&a,&b,&c,&d,&e);
    std=sd(&a,&b,&c,&d,&e);
    printf("results are:%d\n%d\n%d\n",s,av,std);
    return 0;
}
int sum(int*a,int*b,int*c,int*d,int*e)
{
    int su;
    su=*a+*b+*c+*d+*e;
    return su;
}
int avg(int*a,int*b,int*c,int*d,int*e)
{
    int av;
    av=(*a+*b+*c+*d+*e)/5;
    return av;
}
int sd(int*a,int*b,int*c,int*d,int*e)
{
    int std;
    return 0;
}