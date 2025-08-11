#include <iostream>
using namespace std;
const int MAX = 5;
int main (){
    int var [MAX] = {10, 30, 20, 40, 50};
    for (int i =0 ;i<MAX;i++){
        cout << "Value of var[" << i << "] = ";
      cout << var[i] << endl;
    }
    return 0; // fixed: 'return0;' -> 'return 0;'
}