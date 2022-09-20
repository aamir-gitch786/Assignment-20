/******************************************************************************

 1. Write a function to swap values of two in variables of calling function. (TSRS)

*******************************************************************************/

#include <stdio.h>
void swap(int*,int*);
int main()
{
   int a=10,b=100;
   swap(&a,&b);
   printf("value of a is %d and b is %d",a,b);

    return 0;
}
void swap(int *a,int *b)
{
    int t;
     t=*a;
     *a=*b;
    *b=t;
    
    
    
    
}