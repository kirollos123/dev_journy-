#include <iostream>
using namespace std;
enum level {
    LOW = 1,
    MEDIUM ,
    HIGH 
};

int main() {
     enum level myvar = MEDIUM;
     switch (myvar){
        case 1:
        cout << "Low level" << endl;
        break;
        case 2:
        cout << "Medium level" << endl;
        break;
        case 3:
        cout << "High level" << endl;
        break;
     }
    

    return 0;
}
