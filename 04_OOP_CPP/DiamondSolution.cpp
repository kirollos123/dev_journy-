#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "I am class A" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.show(); // Works fine due to virtual inheritance
    return 0;
}
