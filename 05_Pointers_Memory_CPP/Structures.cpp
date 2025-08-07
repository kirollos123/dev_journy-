#include <iostream>
using namespace std;
int main()
{
    // Create a structure variable called myStructure
    struct
    {
        int myNum;
        string myString;
    } myStructure;
    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";
    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
    return 0;
}
// tructures (also called structs) are a way to group several related variables into one place. Each variable in the
// structure is known as a member of the structure. Unlike an array, a structure can contain many different data
// types (int, string, bool, etc.).
// struct
// {
//     int myNum;       // Member (int variable)
//     string myString; // Member (string variable)
// } myStructure;

//     // Structure declaration
// Structure variable