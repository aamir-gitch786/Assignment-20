/******************************************************************************

9. Write a program to print the elements of an array in reverse order.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    int a[100],*p,n;
    p=&a;
    printf("Enter the size of arrays\n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
