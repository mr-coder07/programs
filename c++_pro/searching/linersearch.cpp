#include<iostream>
using namespace std;
#define max 50
class search{
    private :
    int size;
    
    public:
    search(int size=10):size(size){}
    void linear_search();
};

void search::linear_search(){
    int arr[size];
    for(int i =0 ; i <= size-1 ; i++){
        cout<<"enter elements"<<"  "<<i<<endl;
        cin>>arr[i];

    }
    cout<<"enter the element you wanna find : "<<endl;
    int element;
    cin>>element;

    bool a=false;


    for (int i =0 ; i <= size-1 ; i++)
    {
        if (arr[i]==element){
            cout<<"element found at index "<<i<<endl;
            a=true;
        }
        
    }
    while(a!=true){
        cout<<"element not found";
        a=true
        ;
    }
}

int main()
{
search s(5);
s.linear_search();

return 0;
}