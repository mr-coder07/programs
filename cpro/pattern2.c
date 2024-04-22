#include<stdio.h>
int main()
{
    int k,r,c,i,j;
    printf("enter the number of rows and colums: \n");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(k=c;k>=i;k--)
        printf(" ");

        for(j=1;j<=c;j++)
        {
            if(i==1 || i==r || j==1 || j==c || j==i || i+j==r+1)
            printf(" * ");
            else 
            printf("   ");
        
        }printf("\n");
    
    }return 0;

}