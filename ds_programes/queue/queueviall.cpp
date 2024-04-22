#include<iostream>
using namespace std;

class node{public:
    int info;
    node * next;
    node(int data){
        info = data;
        next = NULL;
    }
};

class queue{
    node * front;
    node * rear;
    public:
    queue(){
        front=NULL;
        rear=NULL;
    }
    ~queue() {
        // Destructor to release memory by deleting all nodes
        while (front != NULL) {
            node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    void enqueue(int val){
        node * nwnode = new node(val);
        if (rear==NULL || front == NULL){
            rear=nwnode;
            front=nwnode;
        }
        else{
            rear->next=nwnode;
            rear=nwnode;
        }
    }
    void dequeue(){
        if (front==NULL && rear==NULL){
            cout<<"empty queue "<<endl;
        }
        else{
            node * temp = front;
            front=temp->next;
            delete temp;
        }
    }
    void printq(){
        node * temp = front;
        if(front==NULL && rear == NULL){
            cout<<"empty queue"<<endl;
        }else{
            while(temp != NULL ){
                cout<<temp->info<<" ";
                temp=temp->next;
            }
        }
    }
};

int main(){
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