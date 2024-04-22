#include <iostream>
using namespace std;
#include "random.h"
int Partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j <= right - 1; ++j) {
        if (arr[j] <= pivot) {

            int temp = arr[++i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }


    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;

    return i + 1;
}


void QuickSort(int arr[], int left, int right) {
    if (left < right) {

        int pivotIndex = Partition(arr, left, right);


        cout << "Pass (Pivot at index " << pivotIndex << "): ";
        for (int i = left; i <= right; ++i) {
            cout << arr[i] << " ";
        }
       cout<<endl;


        QuickSort(arr, left, pivotIndex - 1);
        QuickSort(arr, pivotIndex + 1, right);
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array: \n";
    cin >> n;

    int* randomNumbers = Rdm(n);

    cout << "\nRandom numbers before sorting: \n";

    for (int i = 0; i < n; ++i)
      {
         cout << randomNumbers[i] << " ";
      }
    cout << "\nRandom numbers after sorting: \n";

    Partition(randomNumbers,0,n-1);
    QuickSort(randomNumbers,n,0);
    return 0;

}
