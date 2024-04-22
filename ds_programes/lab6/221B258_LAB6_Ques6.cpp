#include <iostream>
using namespace std;
#include "random.h"
void Merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* leftArray = new int[n1];
    int* rightArray = new int[n2];

    for (int i = 0; i < n1; ++i) {
        leftArray[i] = arr[left + i];
    }
    for (int j = 0; j < n2; ++j) {
        rightArray[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k++] = leftArray[i++];
        } else {
            arr[k++] = rightArray[j++];
        }
    }

    while (i < n1) {
        arr[k++] = leftArray[i++];
    }

    while (j < n2) {
        arr[k++] = rightArray[j++];
    }

    delete[] leftArray;
    delete[] rightArray;
}
void MergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;


        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);


        Merge(arr, left, mid, right);


       cout << "Pass (Merging): ";
        for (int i = left; i <= right; ++i) {
            cout << arr[i] << " ";
        }
       cout << endl;
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

    Merge(randomNumbers, 0,n-1/2 ,n-1) {
    MergeSort(randomNumbers,0,n-1);
    return 0;

}
