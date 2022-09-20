/******************************************************************************

4. Write a program in C to demonstrate how to handle the pointers in the program.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int a=10,*p;
    p=&a;//assiging the address of a into pointer variable p;
    //now the address of a is present into variable p;
    printf("%p\n",&a);
    printf("%p ",p);
    
}