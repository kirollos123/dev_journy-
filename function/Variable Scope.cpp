#include <iostream>
using namespace std;
int x =5; // Global variable
  void myfunction(){
    int x =22; // Local variable with the same name as the global variable
    cout << "Local x: " << x << "\n"; // This will print the
  }

int main() {
    cout << "Global x: " << x << "\n"; // This will print the global variable
    myfunction(); // Call the function that has a local variable with the same name
   
    return 0;
}
// //If you operate with the same variable name inside and outside of a function, C++ will treat them as two
// separate variables; One available in the global scope (outside the function) and one available in the local
// scope (inside the function):
