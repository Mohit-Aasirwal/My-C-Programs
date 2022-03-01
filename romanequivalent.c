#include <stdio.h>
int roman(int,int,char);
int main()
{
    int a,b;
    printf("enter any number to convert it into roman equivalent\n");
    scanf("%d",&a);
    b=roman(a,1,'i');
    b=roman(a,5,'v');
    b=roman(a,10,'x');
    b=roman(a,50,'l');
    b=roman(a,100,'c');
    b=roman(a,500,'d');
    b=roman(a,1000,'m');
    printf("the roman equivalent of the given number is:%c\n",b);
    return 0;
}
int roman (int a,int b,char ch)
{
    int i,j;

    if (a==9)
    {
        printf("ix");
        return (a%9);
    }
    if (a==4)
    {
        printf("iv");
        return (a%4);
    }
    j=a/b;
    for (i=1; i<=j ;i++)
    printf("%c",ch);
    return (a-b*j);

}