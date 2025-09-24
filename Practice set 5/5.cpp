#include<iostream>
using namespace std;
int swap(aero *p,ball *q);
class aero{
    private:
      int laddu;
    public:
    aero(int c){
        laddu=c;
    }
    friend int swap(aero *p);
};
class ball{
    private:
      int Kalakand;
    public:
    ball(int d){
        Kalakand=d;
    }
    friend int swap(aero *p,ball *q);
};
int swap(aero *z,ball *q){
    


    
}

int main(){
    
    return 0;

}