#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    int* arr1 = (int*) malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (arr1 == nullptr)
    {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit if memory allocation fails
    }

    for (int i = 0; i < 5; ++i)
    {
        arr1[i] = i + 1;
    }

    cout << "Allocated array: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int* arr2 = (int*) calloc(5, sizeof(int)); // Allocate memory for 5 integers initialized to 0
    if (arr2 == nullptr) {
        cerr << "Memory allocation failed!" << endl;
        free(arr1); // Free previously allocated memory
        return 1; // Exit if memory allocation fails
    }

    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << " "; // Print the initialized array (all zeros)
    }
    cout << endl;

    int* temp = (int*) realloc(arr1, 10 * sizeof(int)); // Resize the allocated memory to hold 10 integers
    if (temp == nullptr) {
        cerr << "Memory reallocation failed!" << endl;
        free(arr1);
        free(arr2);
        return 1;
    }
    arr1 = temp;

    for (int i = 5; i < 10; ++i) {
        arr1[i] = i + 1; // Initialize the new elements
    }

    cout << "Resized array: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    free(arr1); // Free the allocated memory for arr1
    free(arr2); // Free the allocated memory for arr2

    return 0; // Exit the program successfully
}
