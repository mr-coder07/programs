#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    char line1[50],line2[50],line3[50];
    ofstream outf("country.txt");
    cout<<outf.good()<<endl;
    if(outf.good()) // good() function returns 1 if everything is ok
		cout<<"Everything is OK\n File is opened :\n";
	else{
		cout<<"Error:!\n";
    cout<<"enter text; "<<endl;
    cin.getline(line1,50);
    cin.getline(line2,50);
    cin.getline(line3,50);
    outf<<line1<<"\n"<<line2<<"\n"<<line3<<"\n";
    outf.close();
		return 0;
	}



return 0;
}