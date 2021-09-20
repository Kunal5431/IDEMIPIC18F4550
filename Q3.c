#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the no of numbers:\n");
    scanf("%d",&n);
    int a[100],sum[100]={0};
    printf("Enter the 4 digit numbers:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            int k=a[i]%10;
            sum[i]=sum[i]+k;
            a[i]=a[i]/10;
        }
        //printf("%d",sum[i]);
    }
    for(int i=0;i<n;i++)
    {
        int g=sum[0];
        int del;
        for(int j=1;j<n;j++)
        {
            if(g<sum[j])
            {
                g=sum[j];
                del=j;
            }
        }
        sum[del]=0;
        printf("%d\t",g);
    }
}
