//Q19. Write a program to calculate the simple interest. Formula: SI =
#include<iostream>
using namespace std;
int main(){
    float p,t,r,i;
    cout<<"Enter the Principal amount in rupees: "<<endl;
    cin>>p;
    cout<<"Enter the time in years: "<<endl;
    cin>>t;
    cout<<"Enter the Rate of intrest per annum: "<<endl;
    cin>>r;
    i=((p*t*r)/100);
    cout<<"Your simple intrest is : "<< i <<".rs"<<endl;
    cout<<"Your total amount payable after "<<t<<" years is : "<<p+i<<".rs";


    return 0;


}