#include <stdio.h>
int main()
{
int r,c, i ,j,k;
char a = " * ";
printf("enter the variables row and columns \n");
scanf("%d %d", &r, &c);
for(i=1; i<=r/2; i++)
{
    {
    for(j=1;j<=(2*i-1);j++)
    {
        printf(" *");
    }printf("\n");
    
}
{
    for(k=c/2;k>=i;k--)
    printf("  ");
    for(j=(2*i-1);j>=1;j--)
    {
        printf(" *");
    }printf("\n");
}
}

return 0;
}