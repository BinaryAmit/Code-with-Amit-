#include<stdio.h>
int main(){
    int n,firstTerm=0,secondTerm=1,nextTerm;
    printf("enter n:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",firstTerm);
        
        nextTerm=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }
    
    
return 0;
}