#include<stdio.h>
int main()
{
    int mark;
    printf("enter the mark:");
    scanf("%d",&mark);
    printf("\nGrade = ");
    if(mark>=85 && mark<=100)
        printf("A");
    else if(mark>=70 && mark<84)
        printf("B");
    else if(mark>=55 && mark<69)
        printf("C");
    else if(mark>=40 && mark<54)
        printf("D");
    else if(mark<40)
        printf("F");
    return 0;
}  
