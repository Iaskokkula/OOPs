#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int *arr=new int[n];
    arr[0]=5;
    arr[1]=1;
    arr[2]=4;
    cout<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    delete[] arr;
    return 0;
}