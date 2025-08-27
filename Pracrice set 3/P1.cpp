#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Combined setter
    void setValues(string n, int a) {
        if (a > 0) {
            name = n;
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Combined getter
    void getValues() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    Student s1;

    // Set both name and age
    s1.setValues("Alice", 20);

    // Get and display both name and age
    s1.getValues();

    return 0;
}
