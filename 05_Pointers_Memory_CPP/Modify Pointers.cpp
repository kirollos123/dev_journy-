#include <iostream>
using namespace std;
#include <string>
int main()
{
    string food = "pizza"; // Use double quotes for strings in C++string
    string *ptr = &food;
    cout << "Food: " << food << endl; // prints: pizza
    cout << "Address of food: " << &food << endl;
    cout << *ptr<< endl;
    * ptr = "burger"; // Modify the value using the pointer
    cout << "Modified food: " << food << endl; // prints: burger
    cout << "Pointer points to: " << *ptr << endl; // prints: burger
    return 0; // prints memory address
}