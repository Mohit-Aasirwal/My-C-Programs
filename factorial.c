#include <stdio.h>
int main()
{
    int a , num=1 , fact=1;
    printf("enter a number to find its factorial:(number should be less than 34)\n");
    scanf("%d",&a);

    while(a>=num)
    {fact = fact * num;
    num++;
    }



    printf("the factorial of above number is:%d\n",fact);
    return 0;
}