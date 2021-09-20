#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(int r)
{
    float a;
    a=3.14*r*r;
    return a;
}
int main()
{
    printf("Enter the radius of the circle\n");
    int r;
    scanf("%d",&r);
    float ar=area(r);
    printf("\nThe area is %f units",ar);
}
