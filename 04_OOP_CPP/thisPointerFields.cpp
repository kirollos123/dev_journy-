#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};
int main (void){
    Employee e1(101, "kirollos",400000);

    Employee e2(102, "mina",300000);
    e1.display();
    e2.display();
    return 0;

}