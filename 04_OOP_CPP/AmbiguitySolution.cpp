#include <iostream>
using namespace std;

class base1 {
public:
    void show() {
        cout << "I am base1 class" << endl;
    }
};

class base2 {
public:
    void show() {
        cout << "I am base2 class" << endl;
    }
};

class derived : public base1, public base2 {
public:
    void show() {
        base1::show(); // لتجنب الغموض
        base2::show();
        cout << "I am derived class" << endl;
    }
};

int main() {
    derived obj;
    obj.show();
    return 0;
}
