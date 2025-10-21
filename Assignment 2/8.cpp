#include <iostream>
using namespace std;

// Compile-time polymorphism: Function Overloading
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

// Base class for Run-time polymorphism: Function Overriding
class Animal {
public:
    virtual void sound() { // virtual keyword enables run-time binding
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};
int main() {
    // Compile-time polymorphism (Overloading)
    Calculator c;
    cout << "Sum of integers: " << c.add(5, 10) << endl;
    cout << "Sum of doubles: " << c.add(5.5, 4.5) << endl;

    // Run-time polymorphism (Overriding)
    Animal *a;
    Dog d;
    a = &d;
    a->sound(); // Executes Dog's version (run-time decision)

    return 0;
}
