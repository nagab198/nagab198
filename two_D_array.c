// creating a two d array and sum of array elements
#include<stdio.h>
void fun();
int main() {
    fun();
    int a[3][3], i, j,sumrow,sumcol, sum = 0;
    printf("enter the 2d array elements");
    for (i = 0; i < 3; i++)//for scanning the elements
    {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the enter two D array is \n");
    for (i = 0; i < 3; i++)//for printing the elements
    {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");

    }
    printf("sum is %d\n", sum);

    printf("transpose matrix\n");
    for (i = 0; i < 3; i++)//for printing the transpose matrix
    {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    printf("sum of individual rows and columns\n");
    for (i = 0; i < 3; i++)
    {
        sumrow=sumcol=0;
        for (j = 0; j < 3; j++)
        {
            sumrow = sumrow+a[i][j];
            sumcol=sumcol+a[j][i];

        }
        printf("sumrow is %d and sumcol is %d\n",sumrow,sumcol);
    }


}
