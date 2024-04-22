
#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {

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
   int arr[10]={1,2,3,4,6,7,8,9,10};
   int n=9;

   int key;
   cin>>key;
   arr[n]=key;
   cout<<"original array"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"after inserting element "<<endl;
   insertionsort(arr,n+1);
   for(int i=0;i<n+1;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}
