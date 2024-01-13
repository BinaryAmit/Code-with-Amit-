#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++){
        if(n%i==0){
            sum += i;
        }
    }

    if (sum == n){
        printf("%d is a Perfect number",n);
    }else{
        printf("%d is Not a Perfect number",n);
    }
return 0;
}