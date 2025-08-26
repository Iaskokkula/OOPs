#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cout<<"ENter a numbeer"<<endl;
    cin>>a;
    for(int i=2;i<=sqrt(a);i++){
        if (a%i==0){
            cout<<"Number is not prime"<<endl;
            return 0;
        }    
        
}
cout<<"Prime"<<endl;
return 0;
}
