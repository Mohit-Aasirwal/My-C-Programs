#include <stdio.h>
int main()
{
    int amt,one,two,five,ten,fifty,hundred,totalnotes=0;
    printf("enter the amount you want to convert into least no of notes:\n");
    scanf("%d",&amt);

    hundred=amt/100;
    amt=amt%100;
    fifty=amt/50;
    amt=amt%50;
    ten=amt/10;
    amt=amt%10;
    five=amt/5;
    amt=amt%5;
    two=amt/2;
    amt=amt%2;
    one=one/1;
    amt=amt%1;

    totalnotes= totalnotes+hundred+fifty+ten+five+two+one;

    printf("the total number of notes are:%d\n",totalnotes);
    return 0;
}