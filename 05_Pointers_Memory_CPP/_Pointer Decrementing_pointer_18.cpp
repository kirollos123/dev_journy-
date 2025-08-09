#include <iostream>
using namespace std;

const int MAX = 5;
int main()
{
    int var[MAX] = {10, 30, 20, 40, 50};
    int *ptr = var;
    ptr = &var[MAX - 1]; // Point to the last element of the arra
    for (int i = MAX; i > 0; i--)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        ptr--; // Decrement the pointer to point to the previous element
    }
}