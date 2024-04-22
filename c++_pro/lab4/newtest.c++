#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define size 10

using namespace std;
int main()
{int arr[2][1];
    for(int j=0; j<=size ; j++){
        for (int i=0; i<2;i++){
            cin>>arr[j][i];
        }
        
    }
    for(int j=0; j<=size ; j++){
        for (int i=0; i<2;i++){
             cout<<arr[j][i];
        }
        
    }
    return 0;
}