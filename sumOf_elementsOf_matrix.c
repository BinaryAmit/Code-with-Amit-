#include <stdio.h>
int main()
{
    int arr1[2][2] = {{3, 5},{2,8}};
    int sum=0;

    for (int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            if(i==j) {
                sum+=arr1[i][j];
            }
        }
    }

    printf("%d",sum);
    return 0;
}