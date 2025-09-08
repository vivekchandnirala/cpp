#include <iostream>
using namespace std;

int main (){
    cout << "Welcome to the Calculator Program!" << endl;
    int a, b;
    cout << "Enter the Value A: " << endl;
    cin >> a;
    cout << "Enter the Value B: " << endl;
    cin >> b;
    cout << "Addition is :" << a + b << endl;
    cout << "Subtraction is :" << a - b << endl;
    cout << "Division is :" << a / b << endl;
    cout << "Multiplication is :" << a * b << endl;
    cout << "Modulo is :" << a % b << endl;
    return 0;
}