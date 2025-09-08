#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;
    if (marks>=90){
        cout<<"O Grade"<<endl;
    }else if(marks<90 && marks>=80){
        cout <<"A+ Grade"<<endl;
    }else if(marks<80 && marks>=70){
        cout<<"B+ Grade";
    }else {
        cout <<"Pass";
    }

}