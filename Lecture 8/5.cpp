#include<iostream>
using namespace std;
class complex{
    private:
    float a;
    float b;
    public:
  // static int count=0;
    complex(float x,float y){
        this->a =x;
        this->b=y;
        cout<<"Now number has been created "<<endl;
         cout<<"complex number "<<a<<" + "<<b<<"i"<<endl;
       // count++;

    }
    void get_details(){
        cout<<"number is: "<<a<<"+ "<<b<<"i"<<endl;

    }
    complex operator-(const complex& second_obj){
        complex c3(0,0);
        c3.a=this->a=this->a+second_obj.a;
        c3.b=this->a=this->b+second_obj.b;
        return c3;
    }
    ~complex(){
       // cout<<"Complex number "<<count<<" been destroyed"<<endl;
       cout<<"complex number "<<a<<" + "<<b<<"i has been destroyed"<<endl;
    }
};
//int complex :: count=0;//class variable
int main(){
    {
        complex c1(6,5),c2(2,3),c4(0,0);
        c4=c1-c2;
        c4.get_details();
    }
    complex c6(4,9),c7(5,9),c9(0,0);
    c9=c6-c7;
    c9.get_details();
return 0;
}