#include <iostream>
using namespace std;

class Sports; // Forward declaration
// Class 1: Student
class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }
    // Declare friend function
    friend void displayTotal(Student s, Sports sp);
};
// Class 2: Sports
class Sports {
private:
    int score;

public:
    void setScore(int s) {
        score = s;
    }

    // Declare friend function
    friend void displayTotal(Student s, Sports sp);
};
// Friend function definition
void displayTotal(Student s, Sports sp) {
    int total = s.marks + sp.score;
    cout << "Marks: " << s.marks << ", Sports Score: " << sp.score << endl;
    cout << "Total Performance Score: " << total << endl;
}
int main() {
    Student stu;
    Sports sport;

    stu.setMarks(85);
    sport.setScore(15);

    displayTotal(stu, sport);
    return 0;
}
