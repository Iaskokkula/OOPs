#include<iostream>
using namespace std;
class state_bank{
    private:
        string name;
        int acc_no;
        float bal;
    public:
    static float total_bal;//declaration of static variable
    state_bank(string n,int a,float b){
        this->name=n;
        this->acc_no=a;
        this->bal=b;
        total_bal+=b;//
    }

  
void get_details(){
    cout<<"Name: "<<this->name<<" Account No: "<<this->acc_no<<" Balance: "<<this->bal<<endl;

}
};
float state_bank ::  total_bal=0; // that total_bal has become a class variable means accessed by all the objecty
int main(){
    state_bank s1("Srinadh",5000,30000.56);
    s1.get_details();
    state_bank s2("Nagarjun",4353,64850.56);
    s2.get_details();
    state_bank s3("Kokkula",878,63684.9);
    s3.get_details();
    cout << "Total Balance in Bank: " << state_bank::total_bal << endl;
    return 0;
}

    