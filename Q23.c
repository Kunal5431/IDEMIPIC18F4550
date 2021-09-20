#include<stdio.h>
#include<conio.h>

struct student
{
    char name[100];
    float cgpa;
    int semester;
    int regno;
};

int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the name:");
        gets(s[i].name);
        printf("Enter CGPA:\n");
        scanf("%f",&s[i].cgpa);
        printf("Enter semester:\n");
        scanf("%d",&s[i].semester);
        printf("Enter registration number:\n");
        scanf("%d",&s[i].regno);
    }
    printf("\nStudent Database:\n");
    for(int i=0;i<3;i++)
    {
        printf("Name: ");
        puts(s[i].name);
        printf("\nCGPA: %f\n",s[i].cgpa);
        printf("Semester: %d\n",s[i].semester);
        printf("Registration Number: %d\n",s[i].regno);
    }
}
