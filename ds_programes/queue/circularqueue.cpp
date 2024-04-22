#include<iostream>
using namespace std;
#define size 10
class queue{
    int arr[size];
    int front;
    int rear;
    public:
    queue(){
        front= -1;
        rear = -1;
    }
    void enqueue(int val){
        if (( front == 0 && rear == size -1 )||( (rear +1)%size == front ) ){
            cout<<"over flow :  ";
            return;}
        else if(rear == -1 && front ==-1 ){
            rear=0;
            front=0;
            arr[rear]=val;
        }
        else if (rear == size -1 && front != 0 ){
            rear = 0 ;
            arr[rear]=val;
        }else{
            rear+=1;
            arr[rear]=val;
        }
    }
    void dequeue(){
        if ( front == -1 || rear == -1 ){
            cout<<"empty queue";    

        }else if (front == rear ){
            cout<<arr[front]<< " removed "<<endl;
            rear=-1;
            front=-1;
            cout<<"now empty queue ";
        }
        
        else if(front == size -1 ){
            front=0;
        }
        else{
            front=(front+1);
        }}

    void printq() {
        if (front == -1) {
            cout << "Empty Queue" << endl;
            return;
        }

        cout << "Queue elements: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";

            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }

};


int main()
{
    queue q ;
    q.enqueue(3);
    q.enqueue(24);
    q.enqueue(34);
    q.enqueue(54);
    q.enqueue(5);
    q.printq();
    cout<<endl;
    q.dequeue();
    q.printq();
    cout<<endl;
    q.dequeue();
    q.printq();
return 0;
}