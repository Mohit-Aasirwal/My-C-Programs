#include <stdio.h>
int main()
{
    int num , a , n;
    int sum = 0;
   
    printf("enter a five digit number:\n");

    scanf("%d", &num);
    a=num%10;         /*last digit*/
    n=num/10;
    sum=sum+a;

    a=n%10;           /*fourth digit*/
    n=n/10;
    sum=sum+a;
    
    a=n%10;            /*third digit*/
    n=n/10;
    sum=sum+a;

    a=n%10;            /*second digit*/
    n=n/10;
    sum=sum+a;

    a=n%10;            /*first digit*/
    sum=sum+a;

    printf("the sum to the digits of your given number is :%d\n",sum);


    return 0;
}