#include <iostream>
using namespace std;
const int MAX = 3;
int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;
    ptr = var;
    // let us have array address in pointer.
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        ptr++;
    }
     return 0; // fixed: 'return0;' -> 'return 0;'

}
 
// point to the next location
