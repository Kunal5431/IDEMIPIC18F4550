#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the number to perform the corresponding function:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
    int choice;
    scanf("%d",&choice);
    int a,b,c;
    printf("\nEnter the numbers:\n");
    scanf("%d %d",&a,&b);
    switch(choice)
    {
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
    case 3:
        c=a*b;
        break;
    case 4:
        c=a/b;
        break;
    default:
        printf("Enter Valid choice");
        return (0);
    }
    printf("The result is %d",c);

}
