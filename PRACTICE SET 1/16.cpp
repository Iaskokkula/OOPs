//Find the sum of digits of a given number. (Example: input 1234 → output10)
#include<iostream>
using namespace std;
       int rec(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + rec(n / 10); 
}
    
int main(){
    int n;
     cout<<"Enter the number: "<<endl;
     cin>>n;
     int y=rec(n);
     cout<<"Sum of the digits is : "<<y<<endl;

    return 0;
}