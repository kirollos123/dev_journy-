#include <iostream>
using namespace std;
const int MAX = 5;

int main (){
    int var [MAX] = {10, 30, 20, 40, 50};
    int *ptr = var; // Pointer to the first element of the array
    int i = 0;
    while(ptr <=&var [Max -1]){
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        ptr++; // Move the pointer to the next element
        i++;
    }

}