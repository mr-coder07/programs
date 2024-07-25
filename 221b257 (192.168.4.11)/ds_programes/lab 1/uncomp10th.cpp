#include <iostream>
using namespace std;

int main() {

    int totalemp;
    string empname, empcity;

    cout<<"please tell how many employees are there"<<endl;

    cin>>totalemp;

    int arr1[totalemp+1];
    string arr2[totalemp+1][2];

    void input(totalemp, arr2[totalemp +1 ],arr1[totalemp+1][2]){
        for(int i = 0 ; i<= totalemp ; i++){
        cout<<f"enter details for employee {i}"<<endl;
        cin>>arr1[i];

        for(int k =0 ; k < totalemp-1 ; k++){
            if(arr1[i] == arr1[k]){
                cout<<"you input a data that is already present";
                break;
            }
        }
        for(int j =0 ; j <= 2 ; j++){
            cin>>arr2[i][j];
        }
    }
    }


	return 0;
}
