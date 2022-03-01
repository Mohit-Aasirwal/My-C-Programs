#include <stdio.h>
void pr();
int main()
{
    int no,a;
    printf("enter a number to obtain its prime factors:\n");
    scanf("%d",&no);

    pr(no);
    return 0;
}
void pr(int no)
{
    int i=2;
    printf("the prime factors of number are:\n");
    while (no!=1)
    {
        if (no%i==0)
        printf("%d\n",i);
        else
        {
            i++;
            continue;
            }
            no=no/i;
    }
}