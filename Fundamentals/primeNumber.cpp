#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the Number: ";
    cin>>n;
    int a=0;
    for (int i=2; i<(n-1); i++){
        if (n%i == 0){
            a++;
        }
    }
    if(a==0){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0;
}
