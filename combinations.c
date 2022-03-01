#include <stdio.h>
int main()
{
    int a=1,b=1,c=1;

    for (a=1;a<=3;a++)
        {for (b=1;b<=3;b++)
            {for (c=1;c<=3;c++)
            printf("%d\n%d\n%d\n",a,b,c);
            }
        }
        return 0;
}