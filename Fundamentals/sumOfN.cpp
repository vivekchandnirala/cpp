#include <iostream>
using namespace std;

int main(){
    // Sum of N natural numbers
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = 0;
    // for (int i=0;i<=n;i++){
    //     sum = sum + i;
    // }
    // cout << "The sum of first " << n << " natural numbers is: " << sum << endl;

    int i=0;
    while (i<=n){
        sum += i;
        i++;
    }
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}