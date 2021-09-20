#include<stdio.h>

int main()
{
    char a='a';
    char b='A';
    int c=97;
    int d=65;
    printf("Character \tASCII Value\n");
    for(int i=0;i<26;i++)
    {
        printf("%c\t\t\t%d",a,c);
        c=c+1;
        a=a+1;
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<26;i++)
    {
        printf("%c\t\t\t%d",b,d);
        d=d+1;
        b=b+1;
        printf("\n");
    }
}
