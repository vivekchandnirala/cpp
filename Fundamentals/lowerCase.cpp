#include <iostream>
using namespace std;

int main (){
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    if (ch<='Z' && ch>= 'A'){
        cout << "UpperCase" << endl;
    }else if (ch >='a'&& ch<='z'){
        cout << "LowerCase" << endl;
    }else {
        cout << "Not an alphabet" << endl;
    }
}