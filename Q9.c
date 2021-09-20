#include<stdio.h>
#include<conio.h>

int main()
{
    printf("The charges are:-\n0-500 units = 5 Rs per unit\n501-1000 units = 7 Rs per unit\n1001 units and above = 9 Rs per unit\n");
    printf("Enter the units used\n");
    int units;
    scanf("%d",&units);
    int charges;
    if(units<=500)
    {
        charges=units*5;
    }
    else if(units<=1000)
    {
        charges=500*5;
        units=units-500;
        charges=charges+(units*7);
    }
    else
    {
        charges=(500*5)+(500*7);
        units=units-1000;
        charges=charges+(units*9);
    }
    printf("The bil is Rs %d",charges);
}
