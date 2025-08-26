#include<iostream>
using namespace std;
class details{
    private:
        float highmarks;
        string city;
        string state;
        string name;
        /*
        int roll_no;
        
         string name;*/
    public:
    void set_value(float hm,string c, string s,string nm){
        highmarks=hm;
        city=c;
        state=s;
        name=nm;


        /*roll_no=rn;
        marks=mr;
        name=nm;*/
    }
    void get_value(void){
        
        cout<<"highesst marks  "<<highmarks<<",      city   "<<city<<",     state  "<<state<<",    name"<<name<<  endl;
    }
};

int main(){
    details d1;
    d1.set_value(100,"Warangal","Telangana","Sai Kokkula");
    d1.get_value();

   /* d1.name="alok";
    d1.marks=76.8;
    d1.roll_no=06;
    cout<<"name  :  "<<d1.name<<",    marks  :  "<<d1.marks<<",   roll_no  :  "<<d1.roll_no<<endl;*/
    return 0;
}