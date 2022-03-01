#include <stdio.h>
int main()
{
    float a,b,c;
    printf("enter first angle\n");
    scanf("%f",&a);

    printf("enter second angle\n");
    scanf("%f",&b);

    printf("enter third angle\n");
    scanf("%f",&c);

   if (a+b+c==180)
   printf("the entered values point towards a triangle\n");
   else
   printf("the enterd values point out that the figure is not a triangle\n");

   return 0;

}