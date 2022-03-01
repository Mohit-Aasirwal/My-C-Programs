#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers to find the greatest one\n");
    scanf("%d%d%d",&a,&b,&c);

    (a>b && a>c)?printf("first one is the greatest\n"):(a>c && a<b?printf("second one is greatest\n"):printf("third one is greatest\n"));
    return 0;
}