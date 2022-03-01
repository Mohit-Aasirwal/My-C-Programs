#include <stdio.h>
int main()
{
    int a,b,c,d;
    for (a=1;a<=30;a++);
    {
        for (b=1;b<=30;b++)
        {
            for (c=1;c<=30;c++)
            {
                for (d=1;d<=30;d++)
                {
                    if ((a!=b&&a!=c&&a!=d)&&(b!=c&&b!=d&&b!=a)&&(c!=d&&c!=a&&c!=b)&&(d!=a&&d!=b&&d!=c))
                    {
                        if(a*a*a+b*b*b==c*c*c+d*d*d)
                        printf("%d%d%d%d\n",a,b,c,d);
                    }
                }
            }
        }
    }
return 0;
}