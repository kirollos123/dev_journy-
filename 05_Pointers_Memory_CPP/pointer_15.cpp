#include <iostream>  // fixed typo: #incloud -> #include
using namespace std;

int main()
{
    int var1;
    char var2[10];

    cout << "Enter an integer: ";
    cin >> var1; // you forgot to actually read the integer from the user

    cout << "Address of var1 variable: " << &var1 << endl;
    cout << "Address of var2 variable: " << &var2 << endl;

    return 0; // fixed: 'return0;' -> 'return 0;'
}
// Null Pointers
// ❑ It is always a good practice to assign the pointer NULL to a pointer variable in case you do not have exact
// address to be assigned.
// ❑ A pointer that is assigned NULL is called a null pointer.
// ❑ The NULL pointer is a constant with a value of zero defined in several standard libraries, including
// iostream.
// *ptr = NULL;
// ❑ On most of the operating systems, programs are not permitted to access memory at address 0 because
// that memory is reserved by the operating system.
// ❑ The memory address 0 has special significance; it signals that the pointer is not intended to point to an
// accessible memory location.
// ❑ If a pointer contains the null (zero) value, it is assumed to point to nothing.
