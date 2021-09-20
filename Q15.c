#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100];
    int n,g,s;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    g=s=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>g)
            g=a[i];
        if(a[i]<s)
            s=a[i];
    }
    printf("The smallest number is %d and the largest is %d",s,g);
}
