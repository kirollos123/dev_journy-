#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    int (*funcPtr)(int, int);  // Function Pointer
    char operation;
    cout << "Enter operation (+ or -): ";
    cin >> operation;

    if (operation == '+') {
        funcPtr = add;  // يشير للجمع
    } else if (operation == '-') {
        funcPtr = subtract;  // يشير للطرح
    } else {
        cout << "Invalid operation!" << endl;
        return 1;
    }

    cout << "Result: " << funcPtr(5, 3) << endl;  // تنفيذ العملية المختارة
    return 0;
}