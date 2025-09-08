#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<< "Enter the Principle: ";
    cin>> p;
    cout << "Enter Rate of Interest: ";
    cin>>r;
    cout << "Enter Time: ";
    cin >> t;
    int si;
    si = (p*r*t)/100;
    cout<< "Simple Interest: "<< si;
    return 0;
}
