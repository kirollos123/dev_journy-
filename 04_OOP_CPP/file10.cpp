#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;   // Pointer to dynamically allocated array
    int size;

public:
    // Constructor
    DynamicArray(int s) {
        size = s;
        arr = new int[size];  // Allocate memory dynamically
        cout << "Constructor: Memory allocated for array of size " << size << endl;
    }

    // Method to set array elements
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }

    // Method to display array elements
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~DynamicArray() {
        delete[] arr;  // Free the dynamically allocated memory
        cout << "Destructor: Memory freed" << endl;
    }
};

int main() {
    // Create a DynamicArray object
    DynamicArray myArray(5);

    // Set values
    for (int i = 0; i < 5; i++) {
        myArray.setValue(i, i * 10);
    }

    myArray.display();

    // Destructor will be called automatically when myArray goes out of scope
    return 0;
}
