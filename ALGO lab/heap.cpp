#include<iostream>
using namespace std;

void minheapify(int arr[], int size , int i )
{
    int smallest = i ;
    int l = 2*i +1;
    int r = 2*i +2;
    if(arr[l]<arr[smallest]&&l<size){
        swap(arr[l],arr[smallest]);
    }
    if(arr[r]<arr[smallest]&&r<size){
        swap(arr[r],arr[smallest]);
    }else{return;}
    minheapify(arr,size,smallest);

}

void heapify(int arr[] , int size , int i  ){
    int largest = i ;
    int l = 2*i +1;
    int r = 2*i +2;
    if(arr[l]>arr[largest]&&l<size){
        swap(arr[l],arr[largest]);
    }
    if(arr[r]>arr[largest]&&r<size){
        swap(arr[r],arr[largest]);
    }else{return;}
    heapify(arr,size,largest);
}

void buildmaxheap(int arr[], int size ){
    for(int i = size/2 -1 ; i >= 0 ; i--)
    heapify(arr, size , i );
}

void buildminheap(int arr[], int size) {
    for (int i = (size / 2) - 1; i >= 0; i--)
        minheapify(arr, size, i);
}



void heapsort(int arr[] , int size ){
    for (int i = size - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

//void delnode(int arr[], int& size, int index) {
//    if (size == 0) {
//        cout << "Empty heap" << endl;
//        return;
//    }
//
//    arr[index-1] = arr[size - 1];
//    size--;
//
//    heapify(arr, size, index - 1);
//}
//

void delnode(int arr[], int& size, int index) {                                                                                                                                                
    if (size == 0) {                                                                                                                                                
        cout << "Empty heap" << endl;                                                                                                                                                
        return;                                                                                                                                                
    }                                                                                                                                                
                                                                                                                                                
    arr[index-1] = arr[size - 1];                                                                                                                                                
    size--;                                                                                                                                                
                                                                                                                                                
    int i = index;                                                                                                                                                
    while (i < size) {                                                                                                                                                
        int left = 2 * i + 1;                                                                                                                                                
        int right = 2 * i + 2;                                                                                                                                                
        int largest = i;                                                                                                                                                
                                                                                                                                                
        if (left < size && arr[left] > arr[largest]) {
            largest = left;                                                                                                                                                
        }                                                                                                                                                
                                                                                                                                                
        if (right < size && arr[right] > arr[largest]) {
            largest = right;                                                                                                                                                
        }                                                                                                                                                
                                                                                                                                                
        if (largest != i) {                                                                                                                                                
            swap(arr[i], arr[largest]);                                                                                                                                                
            i = largest;                                                                                                                                                
        } else {                                                                                                                                                
            break;                                                                                                                                                
        }                                                                                                                                                
    }                                                                                                                                                
}


int main()
{
    int arr[100] = {34,46,3,6,23};
    int size = 5 ;
    cout<<"original array : ";
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"deleting ele of array : ";
    delnode(arr , size , 3);
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    buildmaxheap(arr,size);
    cout<<"after buildmaxheap : ";
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"after buildmin heap : ";
    buildminheap(arr, size);
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    heapsort(arr,size);
    cout<<"after heapsort : ";
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

return 0;
}
