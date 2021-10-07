// sum of array data
#include<stdio.h>
int main() {
    int i, f[2], s[2], t[2];
    printf("enter first array elements list");
    for (i = 0; i < 2; i++)
        scanf("%d", &f[i]);
    printf("enter second array elements list");
    for (i = 0; i < 2; i++)
        scanf("%d", &s[i]);
    for (i = 0; i < 2; i++){
        t[i] = f[i] + s[i];
        printf("the sum of array elements list of index is %d and sum is %d", i, t[i]);
    }
}