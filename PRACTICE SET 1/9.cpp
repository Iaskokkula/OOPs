//Find the factorial of a given number n.
#include<iostream>
using namespace std;
int main(){
    int sum=0,fact=1;
    int n;
    cout<<"Give the num"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;

    return 0;

}