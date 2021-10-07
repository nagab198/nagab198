// the string concatenation
#include <stdio.h>
//#include<string.h>
int main()
{
   char str1[10];
   char str2[10];
   int val=0,i;
    printf("enter str1");
    scanf("%s",str1);
    printf("enter str2");
    scanf("%s",str2);

    /*val = strcmp(str1, str2);// for using string functions
    if (val == 0)
    {
        printf("the str is same str1 is %s and str2 is %s\n",str1,str2);
    }else
    {
        printf("the str is not same");
    }
    printf("val is %d",val);*/
    // logic code for string comparing
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            val=1;
            break;
        }
    }
if(val==0)
{
    printf("the string is same");
}else
    printf("the string is not same");

}
