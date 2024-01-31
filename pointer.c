
#include<stdio.h>
void calSPA(int* p,int* q,int* s,int* pr,float* a){
            *s=*p+*q;
            *pr=*p * *q;
            *a=(*p+*q)/2.0;
}
int main(){
    int p,q,sum,prod;
    float avg; 


    p=5;
    q=8;
    calSPA(&p,&q,&sum,&prod,&avg);
    printf("sum=%d product=%d avg=%.2f \n",sum,prod,avg);
    
return 0;
}