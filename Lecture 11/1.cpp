#include<iostream>
using namespace std;
class university{
    private:
        int Id;
        string name;
    public:
        university(int id,string name){
            this->Id=id;
            this->name=name;
        }
        void get_details(){
            cout<<" Name : "<<name<<" Id : "<<Id<<endl;
        }
};
class students{
    private:
        int Id;
        int course_code;
        string name;
        string school;
    public:
        students(int Id, int course_code, string name, string school){
            this->course_code=course_code;
            this->Id=Id;
            this->name=name;
            this->school=school;
        }
        void get_details2(){
            cout<<"Name : "<<name<<" Id : "<<Id<<" course code: "<<course_code<<" School: "<<school<<endl;
        }
};
int main(){
    university u1(123, " Santha ");
    u1.get_details();
    students s1(213, 02," BALAYYA", " Scds");
    s1.get_details2();
    return 0;
}