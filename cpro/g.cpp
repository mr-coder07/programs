#include<stdio.h>
#define max 50
#include<string.h>

int main()
{
  char str[max],str2[max];
  printf("enter the string one:\n");
  fgets(str, max , stdin);
  printf("enter the string two:\n");
  fgets(str2, max , stdin);
  puts(str);
  puts(str2);
  printf("\n%d",strcmp(str, str2));
  printf("\n%s",strcat(str, str2));
  printf("\n%s", strcpy(str, str2));
  printf("\n%s", strupr(str));
  printf("\n%s", strlwr(str));

  
  return 0;

}