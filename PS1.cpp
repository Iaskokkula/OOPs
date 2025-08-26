/*#Q1. Write a program to read your name and age, and print them in the format:
Hello <name>, you are <age> years old.*/

#include<iostream>
using namespace std;
int main(){
     char a[23];
     int b;
     cout<<"ENTER YOUR NAME BOY"<<endl;
     cin>>a;
     cout<<"ENTER YOUR AGE"<<endl;
     cin>>b;
     cout<<"Hello "<<a<<" and you know that you are "<<b<<" years old"<<endl;
    return 0;
}