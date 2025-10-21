#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
};

// Base class 2
class Athlete {
public:
    string sport;
    void setSport(string s) {
        sport = s;
    }
};

// Derived class using multiple inheritance
class SportsPerson : public Person, public Athlete {
public:
    void display() {
        cout << "Name: " << name << ", Sport: " << sport << endl;
    }
};

int main() {
    SportsPerson sp;
    sp.setName("Sai");
    sp.setSport("Chess");
    sp.display();
    return 0;
}
