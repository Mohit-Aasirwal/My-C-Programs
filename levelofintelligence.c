#include <stdio.h>
int main()
{
    float i,y,x;
    
    for (y=1;y<=6;y++)
    {
        for (x=5.5;x<=12.5;x+=0.5)
        {
        i=2+(y+0.5*x);
        printf("when i is%f the y is %fand x is%f\n",i,y,x);
        }
    }return 0;

}