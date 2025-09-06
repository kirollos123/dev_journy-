#include <iostream>
using namespace std;
class Employee
{
protected:
    int saalary;
};
class programmer : public Employee
{
public:
    int bouns;
    void setsalary(int s) // setter
    {
        saalary = s;
    }
    int getsalary() // getter
    {
        return saalary;
    }
};
int main ()
{
    programmer myobj;
    myobj.setsalary(50000);
    myobj.bouns = 5000;
    cout << "salary is " << myobj.getsalary() << endl;
    cout << "bouns is " << myobj.bouns << endl;
    return 0;
}