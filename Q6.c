#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,g,s;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            g=a;
        else
            g=c;
    }
    else
    {
        if(b>c)
            g=b;
        else
            g=c;
    }
    if(a<b)
    {
        if(a<c)
            s=a;
        else
            s=c;
    }
    else
    {
        if(b<c)
            s=b;
        else
            s=c;
    }
    printf("The smallest number is %d and the largest number is %d",s,g);
}
