#include <stdio.h>
int main()
{
    int hrs;
    //program to print 24 hrs of day with suitable suffixes like am,pm,noon,midnight
    for (hrs=0;hrs<=23;hrs++)
    {
        if (hrs==0)
        {
            printf("%d midnight\n",hrs);
            continue;
        }
        if(hrs<12)
            printf("%d am\n",hrs);
        if(hrs==12)
            printf("%d noon\n",hrs);
        if (hrs>12)
            printf("%d pm\n",hrs%12);
        
    }return 0;
}