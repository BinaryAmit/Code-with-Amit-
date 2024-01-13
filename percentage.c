#include<stdio.h>

int main() {

    int physics, chemistry,maths, Hindi, English ;
    float total;
    float per;


    printf("Enter your marks in physics:\n");
    scanf("%d",&physics);

    printf("Enter your marks in chemistry:\n");
    scanf("%d",&chemistry);

    printf("Enter your marks in maths:\n");
    scanf("%d",&maths);

    printf("Enter your marks in Hindi:\n");
    scanf("%d",&Hindi);

    printf("Enter your marks in English:\n");
    scanf("%d",& English);


    total=(physics+chemistry+maths+Hindi+English);
    per=total/5;
    printf("total=%f\n",total);
    printf("per=%f\n",per);

    if((per<33)  ||( physics<33 )|| (chemistry<33 )|| (maths<33) || (Hindi<33) || (English<33)) {
        printf("your total percentage is %f and you are failed\n",per);
    }

    else if (per>=33&&per<45 ) {
        printf("your total percentage is %f and you are passed with 3rd division\n", per);
    }
    else if (per>=45&&per<60){
    printf("your total percentage is %f and you are passed with 2nd division\n",per);
    }
    else
        printf("your total percentage is %f and you are passed with 1st division\n", per);

    return 0;
}