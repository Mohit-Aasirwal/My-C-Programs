#include <stdio.h>
int main()
{
    int sub,class;

    printf("enter the class of student i.e. 1 ,2 or 3\n");
    scanf("%d",&class);
    printf("enter the number of subjects he has failed in:\n");
    scanf("%d",&sub);
    switch(class)
    {
        case 1:
        if (sub>3)
        printf("no grace\n");
        else 
        printf("grace of 5 marks per subject\n");
        break;

        case 2:
        if (sub>2)
        printf("no grace\n");
        else 
        printf("grace of 4 marks per subject\n");
        break;

        case 3:
        if (sub>1)
        printf("no grace\n");
        else 
        printf("grace of 5 marks\n");
        break;

        default:
        printf("wrong class entered\n");
    }
    return 0;
}