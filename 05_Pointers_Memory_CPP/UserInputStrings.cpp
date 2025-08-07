#include <iostream>
using namespace std;
#include <string>
int main (){
    string fullname; 
    cout << "Enter your full name: ";
    getline (cin ,fullname);
    cout << "Your full name is: " << fullname << endl;
}