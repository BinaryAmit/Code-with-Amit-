#include<stdio.h>
int main(){
    int s,e;
    printf("Enter starting Point :");
    scanf("%d",&s);
    printf("Enter end Point:");
    scanf("%d",&e);

    for(int i =  s;i<=e;i++){
        if (i%2==0)
        {
            printf("%d ",i);
        }
        
    }

return 0;
}