#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char st[10][100];
    printf("Enter the names:\n");
    for(int i=0;i<10;i++)
    {
        gets(st[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(st[i][0]<st[j][0])
            {
                char t[100];
                strcpy(t,st[i]);
                strcpy(st[i],st[j]);
                strcpy(st[j],t);
            }
        }
    }
    printf("The names are:\n");
    for(int i=0;i<10;i++)
    {
        puts(st[i]);
        printf("\n");
    }
}
