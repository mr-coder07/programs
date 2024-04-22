#include<iostream>
using namespace std;
#define size 10

struct stack{
    int arr[size];
    int top;
};

void push(stack * stk , int val)
{
    if (stk->top==size-1){
        cout<<"stk overflow"<<endl;
    }
    stk->top=stk->top+1;
    stk->arr[stk->top]=val;

}

void printstack(stack *stk){
    int pos = stk->top;
    while(pos >= 0){
        cout<<stk->arr[pos]<<" ";
        pos--;
    }
}

void pop(stack * stk){

    if (stk->top < 0 ){
        cout<<"empty stack "<<endl;
    }
    else{
        stk->top=stk->top-1;
    }
}

int main()
{
    stack stk;
    stk.top=0;
    push(&stk, 45 );
    push(&stk, 90 );
    push(&stk, 94 );
    push(&stk, 989 );
    printstack(&stk);
    cout<<endl;
    pop(&stk);
    printstack(&stk);

return 0;
}