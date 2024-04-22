#include<iostream>
using namespace std;
  
class complex{

    int real,imag;
    
    public:
    
    complex();
    
    complex(int a);
    
    complex(int a , int b);
    
    void sum(complex ob1, complex ob2);
    
    void display();
};

complex::complex():real(0),imag(0)
{

};

complex::complex(int a):real(a),imag(a)
{

};

complex::complex(int a, int b):real(a),imag(b)
{

};

void complex::sum(complex ob1, complex ob2)
{
 real= ob1.real + ob2.real;
 imag= ob2.imag + ob2.imag;
}

void complex::display()
{
    cout<<real<<" + i"<<imag;
}

int main()
{
    int real, imag; 

    cout<<"enter the real value; "<<endl;
    
    cin>>real;
    
    cout<<"enter the img value; "<<endl;
    
    cin>>imag;
    
    complex c;
    
    cout<<"\nby first constructor; "<<endl;
    
    c.display();
    
    complex c1(real);
    
    cout<<"\nby second constructor; "<<endl;
    
    c1.display();
    
    complex c2(real,imag);
    
    cout<<"\nby third constructor; "<<endl;
    
    c2.display();
    
    return 0;
}