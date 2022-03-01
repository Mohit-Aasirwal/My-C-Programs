#include <stdio.h>
int main()
{
    int yos,q,sal=0;
    char g;
    printf("enter the gender('m','f')\n");
    scanf("%c",&g);
    printf("enter the year of service of employee\n");
    scanf("%d",&yos);
    printf("enter the qualification(1 for post graduation nd 0 for graduation only)\n");
    scanf("%d",&q);
    if (g=='m' && yos>=10 && q==1)
      sal=15000;
    else if ((g=='m' && yos>=10 && q==0) || (g=='m' && yos<10 && q==1) )
      sal=10000;
    else if(g=='m' && yos<10 && q==0)
      sal=7000;
    else if(g=='f' && yos>=10 && q==1)
      sal=12000;
    else if (g=='f' && yos<10 && q==1)
      sal=10000;  
    else if(g=='f' && yos>=10 && q==0)
      sal=9000;
    else if(g=='f' && yos<10 && q==0)
      sal=6000;
    
    printf("the salary of the employee is:%d\n",sal);

    return 0;        

}