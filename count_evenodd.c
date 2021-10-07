//counting user input data is even and odd separately
#include <stdio.h>
int main()
{
    int input[10],i,even=0,odd=0;
    printf("enter array elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&input[i]);


    //for(i=0;i<10;i++)

        if(input[i]%2==0)
        even=even+1;
        else
            odd= odd+1;

    }
    printf("the even count is %d and odd count is %d",even,odd);

}

