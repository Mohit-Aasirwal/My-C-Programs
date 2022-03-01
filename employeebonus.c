#include <stdio.h>
int main()
{
    int bonus=0, yoj,cy,yos;

    printf("enter the year of joining\n");
    scanf("%d%d",&yoj,&cy);

    yos=cy-yoj;
   
    if(yos>3)
    bonus=2500;

    printf("your bonus is calculated as:%d\n",bonus);

    return 0;
}