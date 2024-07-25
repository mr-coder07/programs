
#include<iostream>
#include"221B257_LAB6_Ques1.h"
 using namespace std;

 int insertionsort(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         cout<<"pass"<<i+1<<": ";
         for(int k=0;k<n-1;k++)
         {
             cout<<arr[k]<<" ";
         }
         cout<<endl;

         int temp=arr[i];
         int j=i-1;
         while(j>=0 && arr[j]>temp)
         {
             arr[j+1]=arr[j];
             j=j-1;
         }
         arr[j+1]=temp;
     }
     return *arr;
 }
 int main()
{
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;
    int *rd=rdm(n);

    cout<<"before swap"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<rd[i]<<" ";

    }
    cout<<endl;

    cout<<"after swap"<<endl;
    insertionsort(rd,n);

    for(int i=0;i<n;i++)
    {
        cout<<rd[i]<<" ";
    }

}
