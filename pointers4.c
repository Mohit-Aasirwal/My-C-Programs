#include <stdio.h>
void shiftr(int,int,int);
int main()
{
    int x,y,z;
    printf("enter the values in variables to shift them righward:\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("the values entered are as follows:x=%d\n,y=%d\n,z=%d\n",x,y,z);
    shiftr(x,y,z);
    return 0;
}
void shiftr(int x,int y,int z)
{
    int t;
    t=y;
    y=x;
    x=z;
    z=t;
    printf("a=%d\nb=%d\nc=%d\n",x,y,z);
}