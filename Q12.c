#include<stdio.h>
#include<conio.h>

int main()
{
    int s;
    for(int i=0;i<=100;i++)
    {
        printf("%d",i);
        if(i!=100)
            printf("+");
        s=s+i;
    }
    printf("=%d",s);
}
