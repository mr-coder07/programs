#include <stdio.h>
int main()
{
int r,c, i ,j,k;
printf("enter the variables row and columns");
scanf("%d %d", &r, &c);
for(i=1; i<=r; i++)
{ 
    for(k=c;k>=i;k--)
    printf(" ");
    
    for (j=1;j<=c/2;j++)
{
    //if(i+j<=r/2)
    printf(" * ");


}
printf("\n");
}
return 0;
}