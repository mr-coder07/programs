
 #include<iostream>
 #include"221B257_LAB6_Ques1.h"
 using namespace std;

 int selectionsort(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         int minindex=i;
         for(int j=i+1;j<n;j++)
         {
             if(arr[j]<arr[minindex])
             {
                 minindex=j;
             }
         }
         int temp=arr[i];
         arr[i]=arr[minindex];
         arr[minindex]=temp;
         cout<<"pass"<<i+1<<": ";
         for(int k=0;k<n-1;k++)
        {

            cout<<arr[k]<<" ";
        }
        cout<<endl;

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
    selectionsort(rd,n);

    for(int i=0;i<n;i++)
    {
        cout<<rd[i]<<" ";
    }
return 0;


}


