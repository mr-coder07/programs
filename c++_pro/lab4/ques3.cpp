#include"iostream"
using namespace std;
class dm{
    float mts;
    float ctms;
    friend void Tlength();
    friend void getdata();
};
class db{

    float inches ;
    float feet;
    friend void Tlength();
    friend void getdata();
};

void Tlength(){
    db b; dm a;
    float temp= a.mts+ a.ctms*0.01 + b.inches*0.025 + b.feet*0.3;
    cout<<temp<<endl;
}

void getdata(){dm k; db l;
    cout<<"mts"<<endl;
    cin>>k.mts;
    cout<<"ctms"<<endl;
    cin>>k.ctms;
    cout<<"inches"<<endl;
    cin>>l.inches;
    cout<<"feets"<<endl;
    cin>>l.feet;

}
int main(){
    getdata();
    Tlength();
}