
#include"iostream"
using namespace std;

int main(){
    int size;

    cout<<"enter size of the array: ";
    cin>>size;

    int arry[size+1];
    for(int i =0 ; i<=(size-1) ; i++){
        cout<<"enter "<<i<<"th element"<<endl;
        cin>>arry[i];
    }
    for(int j = 0 ; j<= size ; j++){
        cout<<"available index is " <<j<<endl;
    }
    int index;
    cout<<"\n enter the index val in which you wanna insert the element"<<endl;
    cin>>index;

    for(int k = (size+1) ; k>= index ; k--){
        arry[k]= arry[k-1];
    }
    cout<<"enter the val at the index"<<endl;
    cin>>arry[index];

    cout<<"edited array looks like: " <<endl;
    for(int l = 0 ; l<= (size) ; l++){

        cout<<arry[l]<<",";
        }

        return 0;


}
