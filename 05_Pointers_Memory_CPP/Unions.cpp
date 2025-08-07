#include <iostream>
#include <cstring>
using namespace std;

// Union definition
union Data {
    int intValue;        // Member for integer value
    float floatValue;    // Member for float value
    char charValue[20];  // Member for character value
};

int main() {
    Data dataUnion;

    dataUnion.intValue = 42; // Assigning value to int member
    cout << "Integer Value: " << dataUnion.intValue << endl;

    dataUnion.floatValue = 3.14f; // Assigning value to float member
    cout << "Float Value: " << dataUnion.floatValue << endl;

    strcpy(dataUnion.charValue, "Hello"); // Assigning value to char member
    cout << "Character Value: " << dataUnion.charValue << endl;

    return 0;
}

/*
Key Points:
- A union is similar to a struct, but all members share the same memory location.
- The size of a union is equal to the size of its largest member.
- Only one member can hold a value at any given time.
- Writing to one member overwrites the values of other members.
*/
