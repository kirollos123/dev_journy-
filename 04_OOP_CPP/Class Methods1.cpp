#include <iostream>
using namespace std;
class myClass {
    public:
    void myMethod() {
        cout << "Hello World!" << endl;
    }   
};
int main() {
    myClass myobject; // Create an object of myClass
    myobject.myMethod(); // Call the method
    return 0;
}