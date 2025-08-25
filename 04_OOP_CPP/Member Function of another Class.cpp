#include <iostream>
using namespace std;

class first; // forward declaration

class last
{
public:
    void showvalue(first obj); // declaration
};

class first
{
private:
    int val;

public:
    first() : val(100) {}
    friend void last::showvalue(first obj); // friend member function
};

void last::showvalue(first obj)
{
    cout << "value is: " << obj.val << endl;
}

int main()
{
    first x;
    last y;
    y.showvalue(x);
    return 0;
}
