#include <stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("enter the cost price of product\n");
    scanf("%d",&cp);
    printf("enter the selling price of product\n");
    scanf("%d",&sp);
    
    if (sp>=cp)
     printf("the product has a profit of:%d\n",sp-cp);

    else 
     printf("the product has a loss of:%d\n",cp-sp);

    return 0; 

}