#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;

    if (ptr == NULL)
    {
        cout << "Pointer is NULL" << endl;
    }
    ptr = new int(42);
    cout << "Pointer now points to value: " << *ptr << endl;
    delete ptr; // Free the allocated memory
    ptr = NULL; // Set pointer to NULL after deletion
    cout<< ptr << endl; // This will print 0, indicating ptr is NULL

    return 0;
}