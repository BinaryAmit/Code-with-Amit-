/*
#include<stdio.h>

int main()
{
    //odd indexed me *2 krna h
     //even index me +10


     int arr[]={6,7,1,3,4,5,9};


     for(int i=0;i<7;i++){
     if(i%2==0){
     arr[i]+=10;
     }else{
     arr[i]*=2;
     }
     }

     for(int j=0;j<7;j++){
     printf("%d ",arr[j]);}

    return 0;
}
*/
#include <stdio.h>
void amit(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += 10;
        }
        else
        {
            arr[i] *= 2;
        }
    }
}
int main()
{
    int arr[] = {6, 7, 3, 5, 7, 5, 6};
    amit(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
