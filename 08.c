#include<stdio.h>
int main(){
    int a[5] = {20,30,40,50,60};
    int sum =0;
    for(int i =0; i<5;i++){
        sum += a[i];
    }
    printf("Sum : %d",sum);
return 0;
}