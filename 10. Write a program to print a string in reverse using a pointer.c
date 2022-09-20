/******************************************************************************

10. Write a program to print a string in reverse using a pointer

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],*p,b[100];
    int n,j=0;
    printf("Enter the string \n");
    fgets(a,100,stdin);
    n=strlen(a);
    a[n]='\0';
    
    for(int i=n-1;i>=0;i--)
    {
        b[j]=*(a+i);
        j++;
    }
    printf("%s",b);
    return 0;
}
