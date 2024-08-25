
#include<iostream>
using namespace std;
void print(char arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(char arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         print(arr,n);
         int temp=arr[i];
         int j=i-1;
         while(j>=0 && arr[j]>temp)
         {
             arr[j+1]=arr[j];
             j=j-1;
         }
         arr[j+1]=temp;
     }
 }
 int main()
 {
     char arr[10]={'j','i','h','g','f','e','d','c','b','a'};
     insertionsort(arr,10);
     for(int i=0;i<10;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;

 }
