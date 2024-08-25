
//WAP to delete an element from an array, use search algorithm to find the index number
//of given number; if element to be deleted is not found then print “Error: element not
//found

#include"iostream"
using namespace std;


int main(){
    int size, index ;
    index=0;

    cout<<"enter size of the array: ";
    cin>>size;

    int arry[size+1];
    for(int i =0 ; i<=(size-1) ; i++){
        cout<<"enter "<<i<<"th element"<<endl;
        cin>>arry[i];
    }

    int element;
    cout<<"\nenter the val which you wanna delete"<<endl;
    cin>>element;

    for(int i=0; i<size ; i++){
        if (arry[i]==element){
            cout<<"element found at index "<<i<<endl;
            index=i;
        }
        }
    if(index==0){
        cout<<"element was not found in the entire array"<<endl;
    }

    for(int i = index ; i< size ; i++){
        arry[i]= arry[i+1];
    }

    cout<<"\n array with deleted element looks like : "<<endl;

    for(int i =0 ; i<=(size-2) ; i++){
        cout<<arry[i]<<",";
    }

    return 0;

}
