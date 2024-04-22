#include<iostream>
#include"ios"
using namespace std;
#define max 5 

void binarysearch(int&min , int maximum=max , int arr[] , int&element){
    int mid= (min+maximum);
    if (mid%2!=0){
        mid=mid-1;
    }
    mid= mid/2;

    if (arr[mid]==element){
        cout<<"element found";
    }
    else if (arr[mid]<element ){
        binarysearch(mid,maximum , arr , element);
    }
    else if (arr[mid]>element){
        min=0;
        binarysearch(min , mid , arr, element );
    }


}

int main()
{
    int arr[max];
    for(int i =0 ; i <= max-1 ; i++){
        cout<<"enter elements"<<"  "<<i<<endl;
        cin>>arr[i];

    }
    cout<<"enter the element you wanna find : "<<endl;
    int element;
    cin>>element;
    int min=0;
    binarysearch(min , max , arr , element);
return 0;
}

