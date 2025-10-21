#include <iostream>
using namespace std;

// Class implementing Bubble, Insertion, and Selection Sort
class Sorter {
private:
    int arr[50];
    int n;

public:
    // Method to input array elements
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    // Method to display array
    void display() {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Bubble Sort
    void bubbleSort() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }
        cout << "After Bubble Sort: ";
        display();
    }

    // Insertion Sort
    void insertionSort() {
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        cout << "After Insertion Sort: ";
        display();
    }

    // Selection Sort
    void selectionSort() {
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
        }
        cout << "After Selection Sort: ";
        display();
    }
};


int main() {
    Sorter s;
    s.input();
    cout << "Original Array: ";
    s.display();
    s.bubbleSort();
    s.insertionSort();
    s.selectionSort();
    return 0;
}
