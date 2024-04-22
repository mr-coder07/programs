#include<iostream>
using namespace std;

class student {
    char name[30];
    int roll;
    public:
    void setdata();
    void showdata();
    };

void student::setdata(){
    cout<<"enter name and roll"<<endl;
    cin>>name;
    cin>>roll;
}
void student::showdata(){cout<<name<<"\n"<<roll<<endl;}

int main()
{
    cout<<"hello"<<endl;
    student obj;
    obj.setdata();
    obj.showdata();
    return 0;
}