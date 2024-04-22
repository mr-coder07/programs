#include "iostream"
using namespace std;
void swap(int *a , int *b){
  int* temp;
  *temp==*a;
  *a=*b;
  *b=*temp;

};
int main()
{int a =20;
int b=40;
swap(&a,&b);
cout<<a<<b<<endl;

}