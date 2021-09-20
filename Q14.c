#include<stdio.h>
#include<conio.h>

int main()
{
    int x,flag=0;
    printf("The Prime numbers:\n");
    for (int i=2;i<100;i++)
    {
        x=i;
        for(int i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            flag=0;
            continue;
        }
        else
            printf("%d\n",x);

    }
}
