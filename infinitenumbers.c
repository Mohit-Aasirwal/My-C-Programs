#include <stdio.h>
int main()
{
    int pos,neg,zero ,num;
    pos =neg=zero=0;
    char ans='y';
    while (ans=='Y'||ans=='y')
    {
        printf("enter the numbers till you want\n");
        scanf("%d",&num);

        if (num>0)
        pos++;
        else if (num<0)
        neg++;
        else if(num==0)
        zero++;
        fflush (stdin);

        printf("do you want to continue entering the numbers\n");
        scanf("%c",&ans);
    }
    printf("the number of positive numbers you entered are:%d\n",pos);
    printf("the number of negative numbers you entered are:%d\n",neg);
    printf("the number of zeroes you entered are:%d\n",zero);
    return 0;
}