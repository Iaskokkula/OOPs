#include<iostream>
using namespace std;
#include"thead.h"

bank_account :: bank_account(string name,int an){
    this->account_number=an;
    this->name=name;
    cout<<"New account has been created for "<<name<<endl;
}
void bank_account::get_details(void){
    cout<<"Mr./Mrs. "<<name<<" your Account number is : "<<account_number<<endl;
}