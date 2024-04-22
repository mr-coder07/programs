//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include<iostream>

using namespace std;

int main()
{
	int number, sum = 0;

	cout << "Please Enter the Number to find sum of Series 1^2 + 2^2 =  ";
	cin >> number;

	sum = (number * (number + 1) * (2 * number + 1 )) / 6;

	cout << "\nThe Sum of the Series of " << number << " number = " << sum ;

 	return 0;
}
