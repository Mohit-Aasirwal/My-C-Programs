#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,ar;
    printf("enter the first ordered pair\n");
    scanf("%d%d",&x1,&y1);
    printf("enter the second ordered pair\n");
    scanf("%d%d",&x2,&y2);
    printf("enter the third ordered pair\n");
    scanf("%d%d",&x3,&y3);

    ar=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    
    if (ar>0)
    printf("points are not collinear\n");
    else
    printf("points are collinear\n");

    return 0;
}