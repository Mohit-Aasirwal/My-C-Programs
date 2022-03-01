#include <stdio.h>
int main()
{
    int wt;
    printf("enter the weight of boxer in pounds to know his class\n");
    scanf("%d",&wt);

    if(wt<115)
    printf("the boxer's class is 'flyweight'");
    
    else if(wt>=115 && wt<=121)
    printf("the boxer's class is 'bantamweight'");
    
    else if(wt>=122 && wt<=153)
    printf("the boxer's class is 'featherweight'");
    
    else if(wt>=154 && wt<=189)
    printf("the boxer's class is 'middleweight'");
    
    else if(wt>=190)
    printf("the boxer's class is 'heavyweight'");
    
    return 0;
}