#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter an integer: "<<endl;
    cin>>b;
    if(b>0){
        cout<<b<<" is positive "<<endl;
    }
    else if(b==0){
        cout<<b<<" is Zero"<<endl;

    }
    else{
        cout<<b<<" is Negative"<<endl;
    }
 return 0;
}
