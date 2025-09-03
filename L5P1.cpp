#include<iostream>
#include<string>
using namespace std;
class bank_account{
    private:
       string name;
       float bal;
    public:
      void set_value(string n, float b){
        this->name=n;
        this->bal=b;

      } 
      void get_values(void){
        cout<<"Name:"<<this->name<<"Balance:"<<this->bal<<endl;
      }  
      void deposit(float n1){
        this->bal= this->bal+n1;
      }
      void withdraw(float n2){
        float temp=this->bal-n2;
        if (temp>=0){
            this->bal=temp;
        }
        else{
            cout<<"Low Balance"<<endl;
        }
      }



};
int main(){
    bank_account a1;
    bank_account a2;
    a1.set_value("Alok ",1000.90);
    a2.set_value("abhinay", 100.45);
    a1.get_values();
    a2.get_values();
    a1.deposit(500);
    a2.deposit(4000);
    a1.get_values();
    a2.get_values();
    a1.withdraw(10000);
    a2.withdraw(20);
    a1.get_values();
    a2.get_values();
    return 0;
}
