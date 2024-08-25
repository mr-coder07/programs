///Q: WAP to implement the linear search. Use function concept, if element is found then
///return index number of element otherwise return -1;
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
    int element;
    cout<<"enter the element you wanna search :"<<endl;
    cin>>element;

    for(int i=0; i<size ; i++){
        if (arry[i]==element){
            cout<<"element found at index "<<i<<endl;
        }
        else{
            return -1;
        }
        }

    return 0;
}
