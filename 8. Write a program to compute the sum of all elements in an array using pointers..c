/******************************************************************************

8. Write a program to compute the sum of all elements in an array using pointers.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    int a[100],*p,sum=0,n;
    p=&a;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(int i=0;i<n;i++)
    {  scanf("%d",&a[i]);
        
    }
    for(int i=0;i<n;i++)
    { sum+=*(p+i);
        
    }
    printf(" Sum is : %d ",sum);
    
    
    
     
    return 0;
}
