#include<iostream>
using namespace std;
class complex{
    private:
    float a;
    public:
    // in public we usually write 
        void set_value(int k){
            a = k;
        }
        void get_value(void){
            cout<<"value is "<<a<<endl;
        }
};
int main(){
    complex c1;
    c1.set_value(5);
    c1.get_value();
    c1.set_value(58);
    c1.get_value();

    return 0;
}