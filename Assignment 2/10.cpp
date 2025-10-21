#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double area() = 0;
    void displayArea() {
        cout << "Area: " << area() << endl;
    }
};
// Derived class 1: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() override {
        return 3.14159 * radius * radius;
    }
};
// Derived class 2: Square
class Square : public Shape {
private:
    double side;
public:
    Square(double s) {
        side = s;
    }
    double area() override {
        return side * side;
    }
};
int main() {
    Circle c(5);
    Square s(4);
    cout << "--- Circle ---" << endl;
    c.displayArea();
    cout << "--- Square ---" << endl;
    s.displayArea();
    return 0;
}
