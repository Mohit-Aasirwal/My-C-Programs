#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the age of the first member:\n");
    scanf("%d",&a);
    printf("enter the age of the second member:\n");
    scanf("%d",&b);
    printf("enter the age of the third member:\n");
    scanf("%d",&c);

    if (a<b)
    {
        if (a<c)
        printf("first member is the youngest member\n");
        else
        printf("third member is the youngest member\n");
    }
    
    if (b<c)
    {
        if (b<a)
        printf("second member is the youngest member\n");
        else
        printf("first member is the youngest member\n");
    }
    if (c<a)
    {
        if (c<b)
        printf("third member is the youngest member\n");
        else
        printf("second member is the youngest member\n");
    }

    return 0;
}