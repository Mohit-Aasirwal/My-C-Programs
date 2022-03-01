#include <stdio.h>
int main()
{
    int n;
    printf("enter an integer to detect whether it is even or odd\n");
    scanf("%d",&n);

    if (n%2==0)
     printf("the entered no is an even number:\n");
    else
     printf("the entered no is an odd number:\n");

   return 0; 
}