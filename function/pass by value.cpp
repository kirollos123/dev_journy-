#include <iostream>
using namespace std;
#include <string>
 void myfunction(string str){
        str += " 012";
    }
    

int main() {
    string greeting = "Hello"; 
    cout << greeting<< "\n";
   
    myfunction(greeting);
    cout << greeting << "\n"; // Output will be "Hello 012"`
   
    return 0;
}
//We used normal variables when we passed parameters to a function. You can also pass a reference to the
//function. This can be useful when you need to change the value of the arguments: