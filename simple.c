#include<stdio.h>
void main()
{
    int p;
    float si,in,i,ri,oi,t;
    printf("enter principle amount : ");
    scanf("%d",&p);
    printf("enter rate of interst : ");
    scanf("%f",&i);
    ri=i/100;
    printf("enter time in months : ");
    scanf("%f",&t);
    t=t/12;
    in=1+ri*t;
    si= p*in;
    oi= si-p;
    printf("total amount with include intrest : %.2f", si);
    printf("\nintrest %.2f",oi);
}