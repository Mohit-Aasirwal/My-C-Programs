#include <stdio.h>
int main()
{
    int r,x,y;
    int dis,d;
    printf("enter the radius of circle and coordinates of the point\n");
    scanf("%d%d%d",&r,&x,&y);

    dis=x*x+y*y;
    d=r*r;
    
    if(dis==d)
    printf("the point you entered lies on circle");
    if(dis!=d)
    {
        if (dis>d)
        printf("point lies outside the circle\n");
        else
        printf("point lies inside the circle\n");
    }

    return 0;
}