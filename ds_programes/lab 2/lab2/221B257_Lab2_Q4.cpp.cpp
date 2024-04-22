//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include <iostream>

using namespace std;

int multiply(int a, int b) {
  int result = 0;
  // Add integer a to result b times
  while(b != 0) {
      result = result + a;
      b--;
  }
  return result;
}

int main () {
  int a, b;
  cout << "Enter two integers" << endl;
  cin >> a >> b;
  cout << a << " X " << b << " = " << multiply(a, b);
  return 0;
}
