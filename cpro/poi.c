#include "stdio.h"
#include <string.h>
int main()
{
    int arr[]= {1,3,4,5,6};
    int* k;
    k=arr;
    int len;
    len= strlen(arr);
    printf("\n%d", len);
    for(int i=0;i<=len;i++)
    {
        printf("\n%d",*k);
        *k++;
        
        }
        return 0;
}