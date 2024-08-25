#include <iostream>
#include <cctype>
using namespace std;
char getnextch(char currentch) {
    if (islower(currentch)) {
        if (currentch == 'z') {
            return 'a';
        } else {
            return currentch + 1;
        }
    } else if (isupper(currentch)) {
        if (currentch == 'Z') {
            return 'A';
        } else {
            return currentch + 1;
        }
    } else {
        return currentch;
    }
}
int main() {
    char userch;
    char nextch;
    char terminate;
    do {
    	cout<<"Hi! I'M A CLEVER COMPUTER PROGRAM THAT KNOWS THE ALPHABET\n";
        cout << "PLEASE ! Enter a letter\n";
        cin >> userch;
        nextch = getnextch(userch);
        cout << "The next letter is\n" << nextch << endl;
        cout << "Do you want to enter another letter? (y=yes)\n";
        cin >> terminate;
    } while (terminate== 'y' || terminate=='Y');
    cout << "GoodBye!";
    return 0;
}

