#include<iostream>
using namespace std;
class complex{
    private:
        float a;
        float b;
    public:
    static float total_complex;//declaration of static variable
    complex(float c,float d){
        this->a=c;
        this->b=d;
      
        this->total_complex++;//
    }
    void sum(complex c1,complex c2){
        this->a=c1.a+c2.a;
        this->b=c1.b+c2.b;
    }

  
void get_details(){
    cout<<"Complex Number: "<<this->a<<" + "<<this->b<<" i "<<endl;

}
};
float complex ::total_complex=0;
int main(){
    complex c1(3.7,4);
    c1.get_details();
    complex c2(3,4);
    c2.get_details();
    c1.sum(c1, c2);
     cout << "Total Complex Numbers: " << complex::total_complex << endl;
    return 0;
}

    