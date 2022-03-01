#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fact,pr,i,odd,even,no,choice;

    while (1)

    {
        printf("choose which program you want to execute:\n");
        printf("1-factorial for a given number\n");
        printf("2-prime or not\n");
        printf("3-given number is odd or even\n");
        printf("4-exit without executing\n");
        
        printf("enter your choice\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
            printf("enter the number:\n");
            scanf("%d",&no);
            fact=1;
            for (i=1;i<=no;i++)
                fact*=i;
                printf("the factorial for the given number is:%d\n\n\n",fact);
                break;
            case 2:
            printf("enter the number to figure out it is prime or not:\n");
            scanf("%d",&no);
            for (i=2;i<no;i++)
            {
                if (no%i==0)
                {printf("the number is not prime\n");
                break;}
            }
            if (i==no)
                printf("the number is a prime\n");
            break;
            case 3:
            printf("enter a number to determine it is odd or even:\n");
            scanf("%d",&no);
            if(no%2==0)
            printf("the number entered is even\n");
            else
            printf("the number entered is odd\n");
            break;
            case 4:
            exit(0);
        }
    }
    return 0;
}