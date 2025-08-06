#include <iostream>
using namespace std;
#include <string>
void  myfunction(string &str){
    str += " woerld";
}

int main() {
    string greeting = "Hello";
    cout << greeting << "\n"; // Output will be "Hello"
    myfunction(greeting);
    cout << greeting << "\n"; // Output will be "Hello world"
  
    return 0;
}
