/******************************************************************************

 7. Write a program to count the number of vowels and consonants in a string using a
pointer.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],*p;
    int length,count1=0,count2=0;
    printf("Enter the string\n");
    fgets(a,100,stdin);
    p=&a;
    length=strlen(a);
    a[length]='\0';
    for(int i=0;i<length-1;i++)
    {
       if(*(a+i)=='a'||*(a+i)=='e'||*(a+i)=='i'||*(a+i)=='o'||*(a+i)=='u'||*(a+i)=='A'||*(a+i)=='E'||*(a+i)=='I'||*(a+i)=='O'||*(a+i)=='U')
       {count1++;
       a[i]='*';
       }
       else if((*(a+i)>=65 && *(a+i)<=90) ||  (*(a+i)>=97 && *(a+i)<=122))
       count2++;
    }
    printf("Number of vowel is %d \nNumber of consonants is %d ",count1,count2);
    
    

    return 0;
}
