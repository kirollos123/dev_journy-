#include <iostream>
using namespace std;
enum level
{
    LOW =5,
    MEDIUM=15,
    HIGH=25
};

int main()
{
    enum level myvar = LOW;
    cout << "The value of myvar is: " << myvar << endl;
    myvar = MEDIUM;
    cout << "The value of myvar is now: " << myvar << endl;
    myvar = HIGH;
    cout << "The value of myvar is now: " << myvar << endl;
    // ❑ Enum is a user-defined data type that consists of a set of named integral

    return 0;
}
// a special type that represents a group of constants (unchangeable values).
// enum Level { LOW, MEDIUM, HIGH };
// enum Level {
// LOW,
// MEDIUM,
// HIGH
// };
// ❑ Why And When To Use Enums?
// ✓ Enums are used to give names to constants, which makes the code easier to read and maintain.
// ✓ Use enums when you have values that you know aren't going to change, like month days, days, et