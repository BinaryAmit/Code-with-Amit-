#include <stdio.h>
typedef struct student
{
    char name[50];
    int class;
    int roll;
}student;

int main()
{
     student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        scanf("%s", &s[i].name);

        printf("Enter class:");
        scanf("%d", &s[i].class);

        printf("Enter roll no:");
        scanf("%d", &s[i].roll);
    }

    printf("\n");
    printf("Details of all students\n");

    for (int i = 0; i < 3; i++)
    {
        printf("student %d:\n",i+1);
        printf("Name:%s\n", s[i].name);
        printf("Class:%d\n", s[i].class);
        printf("Roll:%d\n", s[i].roll);
    }

    return 0;
}