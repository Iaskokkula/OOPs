#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int a,int b){
            length=a;
            breadth=b;
        }
    friend int area(Rectangle *c);
};
int area(Rectangle *c ){
   int d=(c->breadth)* (c->length);
   return d;

}
int main(){
    Rectangle p1(5,6);
    cout<<"Area is: "<<area(&p1)<<endl;

    return 0;
}