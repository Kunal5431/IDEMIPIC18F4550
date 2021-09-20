#include<stdio.h>
#include<conio.h>

int main()
{
    float km,m,in,ft,cm;
    printf("Enter the value in km\n");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    in=39.37*m;
    ft=3.28*m;
    printf("\nThe distance is =%f m \n=%f cm \n=%f inches \n=%f feet",m,cm,in,ft);
}
