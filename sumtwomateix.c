#include<stdio.h>
#define N 5

int main() {
    int a[N][N], b[N][N], c[N][N], m, n, p, q, i, j, k, sum;
    printf("enter the first matrix row and column size");
    scanf("%d%d", &m, &n);
    printf("enter the second matrix row and column size");
    scanf("%d%d", &p, &q);
    if (n != p) {
        printf("invalid matrix size \nplease enter the first matrix column size and second matrix row size must be same");
    } else
    {

        printf("enter the first matrix data\n");
        //for scanning 2d array matrix
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        //for scanning 2d array matrix
        printf("enter the second matrix data\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                scanf("%d", &b[i][j]);
            }
        }
        //for printing 2d array first matrix
        printf("the first matrix data is\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        //for printing 2d array second matrix
        printf("the second matrix data is\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        /* //for adding two given matrix data
         printf("the sum matrix is \n");
         for (i = 0; i < m; i++)
         {
             for (j = 0; j < n; j++)
             {
                 c[i][j] = a[i][j] + b[i][j];
                 printf("%d\t", c[i][j]);
             }
             printf("\n");
         }*/
        //logic code for multiplying two matrix
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                sum = 0;
                for (k = 0; k < n; k++) {
                    sum = sum + a[i][k] * b[k][j];

                }
                c[i][j] = sum;
            }
        }
        printf("the multiply matrix is \n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

}