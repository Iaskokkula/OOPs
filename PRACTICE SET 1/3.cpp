#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is Largest "<<endl;
    }
    else if(a==b){
        cout<<"Both are equal"<<endl;

    }
    else{
        cout<<b<<" is Largest"<<endl;
    }
 return 0;
}
