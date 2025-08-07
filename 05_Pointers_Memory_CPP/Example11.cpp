#include <iostream>
using namespace std;

int main() {
   string food="Pizza";  
   string* ptr=&food; // pointer to food variable
    cout << "Food: " << food << endl; // prints: Pizza
    cout << "Address of food: " << &food << endl; 
    cout << ptr<<endl;// prints: memory address
    cout << "Dereferenced pointer: " << *ptr << endl; // prints: Pizza
    return 0;
}
