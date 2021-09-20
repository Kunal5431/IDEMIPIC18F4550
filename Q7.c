#include<stdio.h>
#include<conio.h>

int main()
{
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);
    if(marks>=75)
        printf("First Class with distinction.");
    else if(marks>=60)
        printf("First Class.");
    else if(marks>=50)
        printf("Second Class");
    else if(marks>=35)
        printf("Pass");
    else
        printf("Fail");

}
