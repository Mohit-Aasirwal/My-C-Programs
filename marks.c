#include <stdio.h>
int main()
{
    float ag,ptg,m,e,h,s,ss;
    printf("\ninput marks in maths");
    scanf("%f",&m);
    printf("\n input marks in science");
    scanf("%f",&s);
    printf("\n input marks in hindi");
    scanf("%f",&h);
    printf("\n input marks in social science");
    scanf("%f",&ss);
    printf("input marks in english");
    scanf("%f",&e);

    ag=m+e+h+s+ss;
    printf("aggreagate marks obtained is %f\n",ag,"\n out of 500");
    ptg=ag*100/500;
    printf("percentage obtained by student is %f\n",ptg,"congratulations");
    return 0;
}