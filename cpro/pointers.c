#include "stdio.h"
#include <string.h>
void swap(int* a,int* b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

}
int main()
{
   // int a;
    //int*p;
    //a=54654;
    //p=&a;
    
    //int b=456;
    //int *q;
    //q=&b;
    //printf("%d %d\n", *p ,*q);
    //swap(&a,&b);
    
   //printf("%d %d", a,b);
    
    char arr[]= "geeks" ;
    int* k;
    k=arr;
    int len;
    len= strlen(arr);
    printf("\n%d", strlen(arr));
    for(int i=0;i<=len;i++)
    {
        printf("\n%s",k);
        *k++;
        }
        return 0;

}
