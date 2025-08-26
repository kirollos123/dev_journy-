#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;

public:
    person()
    {
        cout << "Default constructor called" << endl;
        name = "Unknown";
        age = 0;
    }
    person(string n, int a)
    {
        name = n;
        age = a;
        cout << "Parameterized constructor called" << endl;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main (){
    person p1; // Default constructor
    person p2("Alice", 30); // Parameterized constructor
    p1.display();
    p2.display();
    return 0;
}