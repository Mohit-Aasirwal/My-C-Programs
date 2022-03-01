#include <stdio.h>
int main()
{
    float hardness,cc,ts;
    int grade;

    printf ("enter the hardness of steel\n");
    scanf("%f",&hardness);
    printf("enter the carbon content of steel\n");
    scanf("%f",&cc);
    printf("enter the tensile stress the steel can bear\n");
    scanf("%f",&ts);

    if (hardness>50 && cc<0.7 && ts>5600)
    grade=10;
    else if(hardness>50 && cc<0.7 && !ts>5600)
    grade=9;
    else if(!hardness>50 && cc<0.7 && ts>5600)
    grade=8;
    else if(hardness>50 && !cc<0.7 && ts>5600)
    grade=7;
    else if(hardness>50 || cc<0.7 || ts>5600)
    grade=6;
    else
    grade=5;

    printf("the grade of your steel is:%d\n",grade);

    return 0;

}