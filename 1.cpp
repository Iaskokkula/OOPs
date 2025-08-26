#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    cout << "Enter 1st and 2nd number: "<< endl;
    cin >> a>>b;
   // cout << "Enter 2nd number: "<< endl;
    //cin >> b;
    if(a % 5 == 0 && a % 7 == 0) {
        cout << "1st number is divisible by5 and 7" << endl;
    }
    else if(a % 5 == 0) {
        cout << "1st number is divisible by 5" << endl;
    }
    else if(a % 7 == 0) {
        cout << "1st number is divisible by 7" << endl;
    } 
    
     else {
        cout << "Not divisible" << endl;
    }
    
    cout << "Sum is: " << a + b << endl; 
    cout << "Difference is: " << a - b << endl;
    cout << "Product is: " << a * b << endl;
    return 0;
}