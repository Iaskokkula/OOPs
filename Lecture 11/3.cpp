#include<iostream>
using namespace std;
class anything {
    private:
        void greet(){
            cout<<"Hello from greet"<<endl;
        }
    public:
        void greet2(){
            greet();
            cout<<"Hello from greet 2"<<endl;
        }

};
int main(){
    anything g1;
    g1.greet2();
    return 0;
}