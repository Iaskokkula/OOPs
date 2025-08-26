#include<iostream>
using namespace std;
int main(){
    int count=0;
    while(count>50){
        int a;
        cout<<"ENter a number"<<endl;
        cin>>a;
        count=count+a;
    }
    cout<<"sum is "<<count<<""<<endl;
    cout<<" reached 50 or crossing 50"<<endl;

    return 0;
}