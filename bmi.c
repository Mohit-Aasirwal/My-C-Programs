#include <stdio.h>
int main()
{
    float height,weight;
    float bmi;
    
    printf("enter the height(in metres) and weight(in kilograms) of the person:\n");
    scanf("%f%f",&height,&weight);
    
    bmi=weight/(height*height);

    if (bmi<15)
      printf("the person is suffering from starvation\n");
    
    else if(bmi>=15.1 && bmi<=17.5)
      printf("the person is anorexic\n");
    
    else if(bmi>=17.6 && bmi<=18.5)
      printf("the person is underweight\n");
    
    else if(bmi>=18.6 && bmi<=24.9)
      printf("the person is ideal in weight\n");
    
    else if(bmi>=25 && bmi<=25.9)
      printf("the person is overweight\n");
    
    else if(bmi>=30 && bmi<=30.9)
      printf("the person is obessed");
    
    else if(bmi>=40)
      printf("the person is morbidly obsessed");

    return 0;
}