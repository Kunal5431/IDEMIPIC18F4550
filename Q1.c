#include <stdio.h>

int main()
{
    printf("Enter the value in decimal:\n");
    int value;
    scanf("%d",&value);
    printf("Decimal value is: %d\n",value);
    printf("Octal value is: %o\n",value);
    printf("Hexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("Hexadecimal value is (Alphabet in capital letters): %X\n",value);
}
