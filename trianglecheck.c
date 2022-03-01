#include <stdio.h>
int main()
{
float a,b,c;

printf("enter the three sides of the triangle\n");
scanf("%f%f%f",&a,&b,&c);

if (a>b)  
{
    if (a>c && (b+c)>a)
    printf("the sides indicates that the figure is a triangle\n");
    else 
    printf("the sides indicate that it is not a triangle\n");
}
else if (b>c)
{
    if (b>a && b<(a+c))
    printf("the sides indicates that the figure is a triangle\n");
    else
    printf("the sides indicate that it is not a triangle\n");
}
else if (c>a)
{
    if (c>b && c<(a+b))
    printf("the sides indicate that the figure is a triangle\n");
    else
    printf("the sides indicate that it is not a triangle\n");
}
return 0;
}