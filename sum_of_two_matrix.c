#include<stdio.h>
int main()
{
    int matrix1[2][2]= {{5,6},{7,8}};
    printf("matrix1:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\v");

    int matrix2[2][2]= {{4,3},{1,2}};
    printf("matrix2:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\v");

    printf("sum of matrix1 and matrix2:\n");
    int summatrix[2][2];


    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            summatrix[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ", summatrix[i][j]);
        }
        printf("\n");
    }








    return 0;
}