#include <stdio.h>
int main()
{
    int a,b=0,result=1;
    printf("enter the exponent:\n");
    scanf("%d",&a);
    printf("enter the power:\n");
    scanf("%d",&b);

    while (b<=result)
    { result =result* a;
    b--;}
    printf("%d\n",result);

    return 0;
}