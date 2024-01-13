#include<stdio.h>

int main() {
    int physics, chemistry, maths, Hindi, English;
    float total;

    printf("Enter your marks in physics:\n");
    scanf("%d", &physics);

    printf("Enter your marks in chemistry:\n");
    scanf("%d", &chemistry);

    printf("Enter your marks in maths:\n");
    scanf("%d", &maths);

    printf("Enter your marks in Hindi:\n");
    scanf("%d", &Hindi);

    printf("Enter your marks in English:\n");
    scanf("%d", &English);

    total = (physics + chemistry + maths + Hindi + English) / 5.0;

    if ((total < 33) || (physics < 33) || (chemistry < 33) || (maths < 33) || (Hindi < 33) || (English < 33)) {
        printf("Your total percentage is %f and you have failed\n", total);
    } else if ((total >= 33 && total < 45) || (physics >= 33) || (chemistry >= 33) || (maths >= 33) || (Hindi >= 33) || (English >= 33)) {
        printf("Your total percentage is %f and you have passed with 3rd division\n", total);
    } else if ((total >= 45 && total < 60) || (physics >= 33) || (chemistry >= 33) || (maths >= 33) || (Hindi >= 33) || (English >= 33)) {
        printf("Your total percentage is %f and you have passed with 2nd division\n", total);
    } else if (total >= 60 || (physics >= 33) || (chemistry >= 33) || (maths >= 33) || (Hindi >= 33) || (English >= 33)) {
        printf("Your total percentage is %f and you have passed with 1st division\n", total);
    }

    return 0;
}
