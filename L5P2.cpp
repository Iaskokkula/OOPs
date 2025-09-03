#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class xy_coordinate{
    private:
       float x;

       float y;
    public:
      void set_value(float a1, float a2);
      void get_value(void);
      //constructor
      xy_coordinate(){//default constructor
        cout<<"Hello World!"<<endl;
        
    this->x=56;
    this->y=34;
      }
      xy_coordinate(float n1, float n2){
        
    this->x=n1;
   
    this->y=n2;
    

      }
      xy_coordinate(float n3){
        
    this->x=n3;
   
    this->y=0;
      }

      };
      

//void xy_coordinate :: set_value(float a1, float a2){
  //  this->x=a1;
   
  //  this->y=a2;
void xy_coordinate :: get_value(void){
    cout<<"x:"<<this->x<<", y:"<<this->y<<endl;
}
int main(){
    xy_coordinate s1,s2;
   // s1.set_value(1,2);
    s1.get_value();
    //s2.set_value(5,6);
    s2.get_value();
    return 0;

}
