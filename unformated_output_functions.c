/* unformatted output functions
 * putchar()
 * putch()
 * puts()*/

#include<stdio.h>
#include <conio.h>

void main()
{
    char ch;
    char chs[10];
    /*printf("enter a charter" );
    ch=getchar();
    putchar(ch);
    ch=getch();
    putchar(ch);*/
    printf("enter a string" );//formatted function
    gets(chs); // unformatted functions for scanf
    puts(chs);// unformatted functions for printf

}