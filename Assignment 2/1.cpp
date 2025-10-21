#include <iostream>
using namespace std;

class SimpleList {
private:
    int* data;      // Dynamic array to hold elements
    int capacity;   // Total allocated memory
    int length;     // Number of elements currently in the list
    // Helper method to resize array when capacity is full
    void resize() {
        int new_capacity = capacity * 2;
        int* new_data = new int[new_capacity];
        for (int i = 0; i < length; i++) {
            new_data[i] = data[i];
        }
        delete[] data;        // Free old memory
        data = new_data;
        capacity = new_capacity;
    }
public:
    // Constructor: initializes list with initial capacity
    SimpleList(int initial_capacity = 10) {
        capacity = initial_capacity;
        data = new int[capacity];
        length = 0;
    }
    // Destructor: cleans up dynamic memory
    ~SimpleList() {
        delete[] data;
    }
    // Adds an element to the list
    void add(int value) {
        if (length == capacity) {
            resize();
        }
        data[length++] = value;
    }
    // Removes an element at a given index
    void remove(int index) {
        if (index < 0 || index >= length) {
            cout << "Index out of bounds.\n";
            return;
        }
        for (int i = index; i < length - 1; i++) {
            data[i] = data[i + 1];
        }
        length--;
    }
    // Displays the current list
    void display() const {
        cout << "[ ";
        for (int i = 0; i < length; i++) {
            cout << data[i] << " ";
        }
        cout << "]\n";
    }
    // Returns the size of the list
    int size() const {
        return length;
    }
};

int main() {
    SimpleList list;
    list.add(10);
    list.add(20);
    list.add(30);
    cout << "List contents: ";
    list.display();
    cout << "List size: " << list.size() << endl;
    list.remove(1);  // Removes element at index 1 (value 20)
    cout << "After removal: ";
    list.display();
    cout << "Updated size: " << list.size() << endl;
    return 0;
}
