//chek for entering number is even or odd
#include<stdio.h>

int main() {

    int physics, chemistry, maths ;
    float total;


    printf("Enter your marks in physics:\n");
    scanf("%d",&physics);

    printf("Enter your marks in chemistry:\n");
    scanf("%d",& chemistry);

    printf("Enter your marks in maths\n");
    scanf("%d",& maths);

    total = (physics +chemistry +maths)/3 ;

    if((total<40) || physics<33 || chemistry<33 || maths<33) {
        printf("your total percentage is %f and you are failed\n",total);
    }
    else {
        printf("your total percentage is %f and you are passed\n", total);
    }

    return 0;
}