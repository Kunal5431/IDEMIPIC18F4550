#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[200];
    printf("Enter 2 strings:\n");
    gets(a);
    gets(b);
    printf("Using strlen:\n");
    int a1=strlen(a);
    printf("%d is the length of a using strlen\n",a1);
    int a2=strcmp(a,b);
    printf("Strings are same if 0, -1 if not(using strcmp): %d\n",a2);
    strcpy(c,a);
    printf("a copied to c using strcpy\n%s\n",c);
    strcat(c,b);
    printf("c after using strcat:\n%s\n",c);
}
