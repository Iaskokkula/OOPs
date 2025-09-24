#include<iostream>
using namespace std;
int palindrome(int num){
    int org =num;
    int rev=0;

    while(num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if (org==rev){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    bool y=palindrome(n);
    if(y== true){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}