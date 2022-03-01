#include <stdio.h>
int main()
{
    int l,b,ar,per;
    printf("enter the length of the rectangle:\n");
    scanf("%d",&l);
    printf("enter the breadth of the rectangle:\n");
    scanf("%d",&b);

    ar = l*b;
    per=2*(l+b);

    if (ar>per)
    printf("area of rectangle is greater than perimeter of it\n");
    else 
    printf("area of rectangle is less then perimeter of it\n");

    return 0;
}