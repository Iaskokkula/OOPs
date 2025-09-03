#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three integers: "<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<a<<" is Largest of all three numbers"<<endl;
    }
    else if(a==b&&a==c){
        cout<<"All three are equal"<<endl;

    }
    else if(b>a && b>c){
         cout<<b<<" is Largest of all three numbers "<<endl;
    }
    else{
        cout<<c<<" is Largest of all three numbers"<<endl;
    }
 return 0;
}
