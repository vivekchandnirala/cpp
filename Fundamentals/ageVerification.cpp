#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age>18){
        cout<< "Your are eligible for Vote";
    }else {
        cout <<"You are not eligible";
    }
    return 0;
}
