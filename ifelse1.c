#include <stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("enter your basic salary\n");
    scanf("%f",&bs);

    if (bs<1500)
    {da=bs*90/100;
     hra=bs*10/100;}
    else 
    {da=bs*98/100;
     hra=500;}

    gs=bs+da+hra;

    printf("gross salary of the employee is :%f\n",gs);
    return 0;
}