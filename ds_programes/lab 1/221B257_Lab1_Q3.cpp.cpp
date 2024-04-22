
//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include"iostream"
using namespace std;

class process
{public:
    int size;
    process(int length):size(length){}
    void search();
};
void process::search(){
    int array[size];
    for(int i=1; i<=size; i++){
        cout<<"enter the elements for the array of size "<<size<<endl;
        cin>>array[i];
    }cout<<"which element is it that you wanna search??"<<endl;
    int element;
    cin>>element;
    int found=element;
    for(int j=1; j<=size;j++)
    {
        if(array[j] == found){
            cout<<"element exist at index: "<<j<<endl;
        }
        else{
            cout<<"element not found"<<endl;
        }
    }

}

int main(){
    process p(4);
    p.search();

return 0;}
