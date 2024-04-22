#include <iostream>
using namespace std;

class rectangle{
    int x;
    int y;
    int z;
    static int count;
    public:
    rectangle()
    {
        count++;
        z=count;
        cout<<"constructer "<<z<<"called";
        }
    rectangle(int a, int b){count++;
    z=count;
        x=a;
        y=b;
     cout<<"constructer "<<z<<"called";
    }
    ~rectangle(){
        cout<<"distructor for \n"<<z<<endl;
    }
    void display();
};

int rectangle::count=0;

void rectangle::display(){
    cout<<" val a "<<x<<" val b"<<y<<endl;

}

int main(){int a,b;
    cout<<"\nenter the value for a"<<endl;
    cin>>a;
    cout<<"\nenter the value for b"<<endl;
    cin>>b;
    rectangle obj;
    cout<<"\nfrom  first constructor "<<endl;
    obj.display();
    rectangle objc(a,b);
    cout<<"\nfrom  second constructor "<<endl;
    objc.display();
 return 0;   
}