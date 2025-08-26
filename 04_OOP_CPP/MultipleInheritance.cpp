#include <iostream>
using namespace std;
class a
{
public:
    void displayA()
    {
        cout << "i am class A " << endl;
    }
};
class b
{
public:
    void displayB()
    {
        cout << "i am class B " << endl;
    }
};

class c : public a, public b
{
public:
    void displayC()
    {
        cout << "i am class C " << endl;
    }
};
int main (){
    c obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}