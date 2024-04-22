//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include"iostream"
using namespace std;


void prime(int number){
    if (number<=1)
        {
            cout<<"entered number in not valid for this category of comparision "<<endl;
        }
    else{
        for (int i=1; i<= number/2 ; i++){
            if(number%i == 0)
            {
                cout<<"entered number is not a prime number"<<endl;
            }
            else{

                cout<<"entered number is a prime number"<<endl;

            }
        }
    }
    }
int main()
{
prime(33);
return 0;
}
