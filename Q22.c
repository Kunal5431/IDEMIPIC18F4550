#include<stdio.h>
#include<conio.h>
int fa=1;

void fact(int m)
{
    int c=m;
    if(c==0)
        printf("\nThe factorial value is %d",fa);
    else
    {
        fa=fa*c;
        c=c-1;
        fact(c);
    }
}
int main()
{
    int m;
    printf("Enter the number\n");
    scanf("%d",&m);
    fact(m);
}
