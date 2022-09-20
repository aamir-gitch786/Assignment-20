/******************************************************************************

3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

*******************************************************************************/

#include<stdio.h>
void sort(int *,int);
int main()
{
    int n;
    printf("Enter the size of arrays:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Sorted elements are : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}
void sort(int *a,int n)
{ int tem;
    for(int i=0;i<n-1;i++)
    { tem=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tem1;
                tem1=a[i];
                a[i]=a[j];
                a[j]=tem1;
            }
        }
    }
}