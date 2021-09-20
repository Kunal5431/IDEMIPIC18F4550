#include<stdio.h>
#include<conio.h>

int main()
{
    char name[100];
    printf("Enter Name\n");
    gets(name);
    printf("Enter the basic salary:\n");
    int sal;
    scanf("%d",&sal);
    int da,hra,con,it,pf,pt,netsal;
    da=0.15*sal;
    hra=0.05*sal;
    con=0.01*sal;
    it=0.30*sal;
    pf=0.10*sal;
    pt=0.03*sal;
    netsal=sal+da+hra+con-it-pf-pt;
    printf("\n\n---------------------------------------------------------------------------------------\n\n");
    printf("Name: %s\nBasic salary: %d Rs\nDearness allowance: %d Rs\nHRA: %d Rs\nConveyance: %d Rs\nIncome Tax: %d Rs\nProvident Fund: %d Rs\nProfessional Tax: %d Rs\nNet Salary: %d\n",name,sal,da,hra,con,it,pf,pt,netsal);
}
