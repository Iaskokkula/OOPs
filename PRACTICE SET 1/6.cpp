#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the number for multiplication table: "<<endl;
    cin>>n;
    cout<<"Here is your Multiplication table for your given input:"<<endl;
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}