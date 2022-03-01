#include <stdio.h>
int main()
{
int a=1 , hr;

while (a<=10)
{printf("enter the overtime hours of the employee:\n");
scanf("%d",&hr);
        if (hr>40)
    printf("the overtime pay of the employee is: %d\n",12*(hr-40));
    else 
    {printf("employee has done no overtime\n");}
    a+=1;
}
return 0;
}