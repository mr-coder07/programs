#include"iostream"
using namespace std;

class account{
    char name[30];
    int actno;
    char type[30];
    int bal;
    int amount;
    public:
    account():bal(0),actno(001),amount(0){}
    void deposit();
    void display();
    int withdraw();

};

void account::deposit(){
    cout<<"enter name "<<endl;
    cin>>name;
    cout<<"enter actno"<<endl;
    cin>>actno;
    cout<<"enter type"<<endl;
    cin>>type;
    cout<<"enter amount"<<endl;
    cin>>amount;
    bal=bal+amount;    
}

void account::display(){
    cout<<"name: "<<name<<" actno: "<<actno<<" type: "<<type<<" amount: "<<amount<<endl;

}

int account::withdraw(){
    int a ;
    cout<<"enter the withdraw amount:"<<endl;
    cin>>a;
    if(bal>=a){
        cout<<"remaining bal:"<<endl;
        cout<<bal-a;
    }
    else 
    cout<<"insufficient bal"<<endl;
    return 0;
}

int main(){
    account obj;
    obj.deposit();
    obj.display();
    obj.withdraw();
    return 0;
}