#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    bool flag = false;

    if (n==1){
        printf("%d is neither Composite Nor Prime number.",n);
    }
    
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag = true;
        }
    }

    if(flag == true){
        printf("%d is Composite number.",n);
    }else{
        printf("%d is Prime number.",n);
    }

   
return 0;
}