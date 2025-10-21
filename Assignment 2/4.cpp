#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void showPersonDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class 1
class Employee : public Person {
protected:
    int empID;
    string department;

public:
    void setEmployeeDetails(int id, string dept) {
        empID = id;
        department = dept;
    }

    void showEmployeeDetails() {
        cout << "Employee ID: " << empID << ", Department: " << department << endl;
    }
};

// Derived class 2 (from Employee)
class Manager : public Employee {
private:
    int teamSize;

public:
    void setManagerDetails(int size) {
        teamSize = size;
    }

    void showManagerDetails() {
        showPersonDetails();
        showEmployeeDetails();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager m;
    m.setPersonDetails("Sai", 21);
    m.setEmployeeDetails(101, "Data Science");
    m.setManagerDetails(5);
    cout << "--- Manager Details ---" << endl;
    m.showManagerDetails();
    return 0;
}
