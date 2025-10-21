#include <iostream>
#include <string>
using namespace std;

// Class that mimics a simple dictionary using arrays
class SimpleDict {
private:
    string keys[100];    // To store keys
    string values[100];  // To store corresponding values
    int size;            // Current number of key-value pairs

public:
    // Constructor
    SimpleDict() {
        size = 0;
    }
    // Add a key-value pair
    void add(string key, string value) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) { // Update existing key
                values[i] = value;
                cout << "Updated value for key: " << key << endl;
                return;
            }
        }
        keys[size] = key;
        values[size] = value;
        size++;
    }

    // Search for a key
    void search(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                cout << key << " : " << values[i] << endl;
                return;
            }
        }
        cout << "Key not found!" << endl;
    }
    // Display all key-value pairs
    void displayAll() {
        cout << "Dictionary contents:" << endl;
        for (int i = 0; i < size; i++) {
            cout << keys[i] << " : " << values[i] << endl;
        }
    }
};

int main() {
    SimpleDict dict;
    dict.add("name", "Sai");
    dict.add("language", "C++");
    dict.add("city", "Chennai");
    dict.displayAll();
    dict.search("language");
    dict.search("country");
    return 0;
}