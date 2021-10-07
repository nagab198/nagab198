#include<stdio.h>
void sum();
int main()
{
    for(;;)
    sum();
}
void sum()
{
    int option=0,cquantity=0,tquantity=0,rcpice=20,rtpice=10,exit_loop=1;
    float coffee_price=0,tea_price=0,total_bill;
    printf("welcome to coffee shop ");
     while(exit_loop){
        //welcome module
         printf("\n1-coffee\n2-tea\n5-bill\nwhat do you want : ");
         scanf("%d",&option);
         switch(option){
             case 1:  //coffee module
                printf("you are selected coffee\nenter the quantity :");
                scanf("%d",&cquantity);
                coffee_price += rcpice*cquantity;
                option=0;
                break;
             case 2: //Tea module
                printf("you are selected tea\nenter the quantity :");
                scanf("%d",&tquantity);
                tea_price += rtpice*cquantity;
                option=0;
                break;
             case 5:
                printf("your bill is ready ");
                exit_loop=0;
                break;
             default :
                printf("invalid entry");
                 option=0;
                 //exit_loop=0;
         }
      }

      // bill module
     total_bill=coffee_price+tea_price;
     printf("\ntotal bill amount %.2f Rs\n",total_bill);

}

