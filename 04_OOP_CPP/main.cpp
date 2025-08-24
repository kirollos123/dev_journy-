#include <iostream>
using namespace std;
class myClass {
public:  // access specifier
  int mynum;      // attribute  
    string myString;
};

int main() {
    myClass myobject;  // Create an object of myClass
    myobject.mynum = 15; // Access attributes and set values
    myobject.myString = "Some text"; // Access attributes and set values
    cout << myobject.mynum << endl; // Print attribute values
    cout << myobject.myString << endl; // Print attribute values
    return 0;
}
