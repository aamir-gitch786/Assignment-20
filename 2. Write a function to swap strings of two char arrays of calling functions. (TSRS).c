/******************************************************************************

2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

*******************************************************************************/

#include <stdio.h>
#include<string.h>
void swap(char *,char *);
int main()
{
   char a[20]="aamir",b[20]="asif";
   swap(a,b);
   printf("%s  %s",a,b);
    return 0;
}
void swap(char *a,char *b)
{   char tem[20];
    
    for(int i=0;i<strlen(a);i++)
    {
        tem[i]=b[i];
    }
    //now array b value is safe in tem arrays.
    for(int i=0;i<strlen(a);i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<strlen(b);i++)
    {
        a[i]=tem[i];
    }
    
}