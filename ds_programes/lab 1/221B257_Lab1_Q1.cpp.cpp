//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include"iostream"
using namespace std;

class process{public:
    int size;
    process(int length):size(length){}
    void largest();
};
void process::largest(){
    int array[size];
    for(int i=1; i<=size; i++){
        cout<<"enter the elements for the array of size "<<size<<endl;
        cin>>array[i];
    }int max;
    max=array[1];
    for(int j=1;j< size;j++){
        if(max<array[j]){
            max=array[j];
        }
        else{
                cout<<"this is the original max"<<max<<endl;
        }
    }cout<<max;

}

int main(){
    process p(4);
    p.largest();

return 0;}
