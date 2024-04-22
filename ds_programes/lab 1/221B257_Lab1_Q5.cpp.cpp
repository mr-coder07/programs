//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include<iostream>
using namespace std;
int power(int x, int y) {
   int i,power=1;
   if(y == 0)
   return 1;
   for(i=1;i<=y;i++)
   power=power*x;
   return power;
}
int main() {
   int x = 3;
   int y = 4;
   cout<<"x = "<<x<<endl;;
   cout<<"y = "<<y<<endl;
   cout<<"x^y = "<<power(x,y);
   return 0;
}
