/******************************************************************************

5. Write a program to find the maximum number between two numbers using a pointer

*******************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    
    (*p>*q)? printf("Maximum number is %d",*p):printf("Maximum number is %d",*q);
   
   
    
}