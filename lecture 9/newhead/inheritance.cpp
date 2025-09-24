#include<iostream>
using namespace std;
//inheritance
//base class
class university{
    private:
    string name;
    int id;
    public:
    university(string name, int id){
        this->id=id;
        this->name=name;
        cout<<"A new member has been created"<<name<<" and "<<id<<endl;
    }
    void get_details(){
        cout<<"Name "<<name<<"and id"<<id<<endl;
    }
};
//mame of derived class : access specifier base class
class students : public university{
    private:
        string school;
    public:
        students(string name, int id,string school): university(name,id){
            this->school=school;
        }
        void get_studentsdetails(void ){
            get_details();
            cout<<"school "<<school<<endl;
        }
};
int main(){
    //university m1("Thala", 07),m2("karnam",22),m3("goli",33);
    students s1("bharath ",123,"cds");
    s1.get_studentsdetails();
    students s2("Renga", 233,"CS");
    s2.get_studentsdetails();

    return 0;
}