#include <stdio.h>
int av(int*a,int*b,int*c);
int per(int*a,int*b,int*c);
int main()
{
    int a,b,c,avg;
    float percentage;
    printf("enter the marks of student to calculate average and percentage\n");
    scanf("%d%d%d",&a,&b,&c);
    avg=av(&a,&b,&c);
    percentage=per(&a,&b,&c);
    printf("the average marks and percentage respectively are:%d\n%f\n",avg,percentage);
    return 0;
}
int av(int*a,int*b,int*c)
{
    int av;
    av=(*a+*b+*c)/3;
    return av;
}
int per(int*a,int*b,int*c)
{
    float perc;
    perc=(*a+*b+*c)/3;
    return perc;
}