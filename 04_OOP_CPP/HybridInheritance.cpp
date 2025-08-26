
#include <iostream>
    using namespace std;
class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};
class B : public A
{
};
class C : public A
{
};
class D : public B, public C
{
}; // A comes from both B and C
int main()
{
    D obj;
    obj.show(); // Error: ambiguous
    obj.B::show();
    obj.C::show();
    return 0;
}