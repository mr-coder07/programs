
#include<iostream>
#include"221B257_LAB6_Ques1.h"
using namespace std;
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int bubblesort(int arr[], int n)
{
    int flag = false;
    for(int i=0;i<n;i++)
    {


        for(int j=0;j<n-i;j++)
        {

            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;


            }

        }
        cout<<"pass"<<i+1<<": ";
        for(int k=0;k<n-1;k++)
        {

            cout<<arr[k]<<" ";
        }
        cout<<endl;

        if(flag==false)
       {
        break;
       }
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
    bubblesort(rd,n);

    for(int i=0;i<n;i++)
    {
        cout<<rd[i]<<" ";
    }

}

