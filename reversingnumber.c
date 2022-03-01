#include <stdio.h>
int main()
{
    int  n , a , b = 0 ;
    int revnum=0;
    printf("enter a five digit number:\n");
    scanf("%f",&n);
    a=n%10;          /*last digit*/
    n=n/10;
    b=b+a*10000;

    a=n%10;            /*fourth digit*/
    n=n/10;
    b=b+a*1000;

    a=n%10;            /*third digit*/
    n=n/10;
    b=b+a*100;

    a=n%10;            /*second digit*/
    n=n/10;
    b=b+a*10;

    a=n%10;
    b=b+a;            /*first digit*/
    revnum= revnum +b;


    printf("the number you have entered is reversed as:%d\n",b);

    return 0;

}