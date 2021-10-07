// read array data and s

#include <stdio.h>
int main()
{
    int i, sum=0,marks[6];
    float avg=0;
    printf("enter the subjects marks");
    for(i=0;i<6;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<6;i++)
    {
        sum=sum+marks[i];
        avg= sum/6;
    }
    printf("the sum is %d and avg is %.2f",sum,avg);
}