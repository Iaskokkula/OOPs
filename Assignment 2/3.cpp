#include <iostream>
using namespace std;

class Shape {
protected:
    double length, breadth;
public:
    void setDimensions(double l, double b) {
        length = l;
        breadth = b;
    }
};

class Rectangle : public Shape {
public:
    double area() {
        return length * breadth;
    }
    double perimeter() {
        return 2 * (length + breadth);
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(10.5, 5.5);
    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Perimeter of Rectangle: " << rect.perimeter() << endl;
    return 0;
}
