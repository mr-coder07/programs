#include<iostream>
using namespace std;
#define size 5

class stk{public:
    int arr[size];
    int top = -1;
    void push(int data){
        if(top == size-1){
            cout<<"overflow : full stack"<<endl;
        }
        top = top+1;
        arr[top]=data;
    }
    void pop(){
        if(top == -1 ){
            cout<<"underflow : empty stack "<<endl;
        }
        top-=1;
    }
    void prints(){
        if(top == -1 ){
            cout<<"underflow : empty stack "<<endl;
        }
        int temp = top;
        while(temp != -1 ){
        cout<<arr[temp]<<" ";
        temp -=1;
    }cout<<endl;}
};



int main(){
    stk s;
    s.push(234);
    s.push(5453);
    s.push(3);
    s.push(79);
    s.pop();
    s.prints();
    s.pop();
    s.prints();
    return 0;
}