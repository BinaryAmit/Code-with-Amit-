#include<stdio.h>


union student {
    int id;
    char name[5];
    char favourite_character;
} s1;
int main()
{
    s1.id=1;
    strcpy(s1.name,"harry");
    s1.favourite_character='j';
    printf("%d\n",s1.id);
    printf("%s\n",s1.name);
    printf("%c\n",s1.favourite_character);
    return 0;
}