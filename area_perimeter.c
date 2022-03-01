/*program to take input from user and print area and perimeter of rectangle and circle*/
#include <stdio.h>
int main()
{
   /*defining variables*/
    float aoc,aor,por,coc,l,b,r;

    printf(" enter length of rectangle\n");

    scanf("%f",&l);

    printf(" enter breadth of rectangle\n");

    scanf("%f",&b);
    
    printf("enter radius of circle\n");
    
    scanf("%f",&r);
    /*formulas*/
    aoc=22/7*r*r;
    
    aor=l*b;
    
    por=2*(l+b);
    
    coc=2*22/7*r;
    /*printing result*/
    printf("area of circle is %f\n",aoc);
    
    printf("area of rectangle is %f\n",aor);
    
    printf("perimeter of rectangle is%f\n",por);
    
    printf("circumference of circle is%f\n",coc);

    return 0;
}