/******************************************************************************

 6. Write a program to calculate the length of the string using a pointer

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int lenth(int *);
int main()
{
   char a[20]="aamir yuvraj";
   lenth(a);

    return 0;
}
int lenth(int *p)
{
    printf(" length of string is %ld",strlen(p));
}