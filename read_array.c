//creating arrays
#include <stdio.h>
int main() {
    int user[5], i;
    printf("enter any five elements");

    for (i = 0; i < 5; i++)//for receiving array data from user
        scanf("%d", &user[i]);

    for (i = 0; i < 5; i++)//for printing receiving data from user with index location
        printf("the array element at index is %d and value is %d\n", i, user[i]);

    for (i = 4; i >= 0; i--)
        printf("the array element at index is %d and value is %d\n", i, user[i]);
}
