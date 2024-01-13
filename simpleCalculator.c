#include<stdio.h>
int main() {
    char operator ;
    double num1,num2, result ;
    printf("enter an operator(+,-,*,/):\n");
    scanf("%c",& operator);

    printf("enter two operands:\n");
    scanf("%lf %lf",&num1, &num2);

    switch(operator) {
    case '+':
        result=num1+num2;
        break ;
    case '-':
        result=num1-num2;
        break ;

    case '*':
        result=num1*num2;
        break ;
    case'/':
        if(num2==0) {
            return 1;
    }else{
        result=num1/num2;
    }

    break ;
default:
    printf("invalid operator");
        goto end;
        break;
    }

    printf("%.2lf", result);
end:

    return 0;
}