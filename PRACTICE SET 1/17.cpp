//Generate the Fibonacci series up to n terms.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    int a=0,b=1;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"The Fibonacci series is: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
        
    }
    return 0;
}