#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char st[100];
    printf("Enter the string:\n");
    gets(st);
    int m;
    m=strlen(st);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(st[i]<st[j])
            {
                char t=st[j];
                st[j]=st[i];
                st[i]=t;
            }
        }
    }
    printf("The new ordered string is:\n");
    puts(st);
}

