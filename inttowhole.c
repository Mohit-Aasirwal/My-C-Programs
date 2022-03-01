#include <stdio.h>
int main()
{
    int a,abs;
    printf("enter an integer to get its absolute value\n");
    scanf("%d",&a);

    if (a<0)
    abs=a*(-1);

    printf("absolute value is:\n",abs);

    return 0;
}