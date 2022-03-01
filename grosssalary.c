# include <stdio.h>
int main()
{
   float gs , bp , da , hra ;
   printf("enter the basic pay of employee\n");
   scanf("%f", &bp);
   
   da = 0.4 * bp;
   hra = 0.2 * bp;
   gs= bp + da + hra ;
   
   printf("gross pay of this employee is %f \n", gs);

   return 0;
}