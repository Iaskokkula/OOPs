//Find the sum of the first n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number upto which you want the sum"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++ ){
        sum=sum+i;
    }

    cout<<"Sum of first "<<n<<" Natural numbers is : "<<sum<<endl;
    return 0;

}