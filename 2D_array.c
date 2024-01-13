#include<stdio.h>

int main()
{
    int main[2][3]= {{21,32,78},
                     {67,55,34}};


    for(int i=0; i<2; i++) {
        {
            for(int j=0; j<3; j++)

                //   printf("the value of (%d,%d) of element of array is %d\n",i,j,main[i][j]);

                printf("%d ",main[i][j]);
                printf("\n");

        }
    }




    printf("Hello world!");
    return 0;
}