#include <iostream>
using namespace std;

class Number {
private:
    int num1, num2;

public:
    void setValue(int a, int b);
    void printValue();
    int addNumber(); // inline لو تحب ممكن تحطه هنا داخل الكلاس
};

// تعريف الدوال خارج الكلاس
void Number::setValue(int a, int b) {
    num1 = a;
    num2 = b;
}

void Number::printValue() {
    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;
}

// تعريف inline
inline int Number::addNumber() {
    return num1 + num2;
}

int main() {
    Number n;
    n.setValue(10, 20);
    n.printValue();
    cout << "The sum is: " << n.addNumber() << endl;
    return 0;
}
