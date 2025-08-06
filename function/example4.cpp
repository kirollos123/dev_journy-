#include <iostream>
using namespace std;
#include <string>
void myfunction(string country ="Egypt") {
    cout <<country<<"\n";
}
int main() {
    myfunction("USA");
    myfunction("Canada");
    myfunction("Australia");
    myfunction(); // Default argument will be used here
    myfunction("Germany");
    myfunction("Japan");
    //Note: A parameter with a default value, is often known as an "optional parameter".
  
    return 0;
}
