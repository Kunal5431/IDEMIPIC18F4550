#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a[100];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int m=a[j];
                a[j]=a[i];
                a[i]=m;
            }
        }
    }
    printf("The array in descending order is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}
