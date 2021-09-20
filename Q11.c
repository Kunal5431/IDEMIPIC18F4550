#include<stdio.h>
#include<conio.h>

int main()
{
    printf("The even numbers are:\n");
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
}
