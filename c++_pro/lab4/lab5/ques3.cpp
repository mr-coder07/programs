#include <iostream>
using namespace std;
class abc
{
    int x;
    public:
    abc(int x=0):x(x)
    {}
    abc operator*(abc&ob)
    {
        cout<<"abc";
        return(abc((x)*(ob.x)));
    }
    void display()const{
        cout<<"x= "<<x;
    }
};
int main()
{
    abc ob1(2),ob2(3),ob3;
    ob3=ob1*ob2;
    ob3.display();
    return 0;

}