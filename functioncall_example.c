#include<stdio.h>
void si( );

int main(){
    printf("welcome\n");
    si();
    return 0;
}
void si()
{
    //int p;
    float p,si,in,i,ri,oi,t;
    printf("enter principle amount : ");
    scanf("%f",&p);
    printf("enter rate of interest : ");
    scanf("%f",&i);
    ri=i/100;
    printf("enter time in months : ");
    scanf("%f",&t);
    t=t/12;
    in=1+ri*t;
    si= p*in;
    oi= si-p;
    printf("total amount with include interest : %.2f", si);
    printf("\ninterest %.2f",oi);
}