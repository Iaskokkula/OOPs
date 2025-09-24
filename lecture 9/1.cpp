#include<iostream>
using namespace std;
class complex{
    float x;
    float y;
    public: 
        complex (float a,float b){
            this->x=a;
            this->y=b;
            cout<<"New complex number has been created with address: "<<this<<"Complex: "<<a<<" +"<<y<<"i"<<endl;
  
        }
        complex operator/ (const complex& second_obj){
            complex c3(0,0);
            c3.x=this->x*second_obj.x-this->y*second_obj.y;
            c3.y=this->x*second_obj.y+this->y*second_obj.x;
            return c3;

        }
        void get_details(){
            cout<<" complex number is "<<this->x<<" +"<<this->y<<"i"<<endl;
        }
        ~complex(){
            cout<<"Complex number has been destroyed "<<this<<endl;

        }
};
int main(){
    complex c1(3,4),c2(4,5),c4(0,0);
    c1.get_details();
    c4=c1/c2;// c1.operator(c2);
    c4.get_details();


     
    return 0;

}
