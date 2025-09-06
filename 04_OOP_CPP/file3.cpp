#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  // virtual = يسمح بالتحقق من النوع الحقيقي أثناء التشغيل
        cout << "Drawing a generic shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {  // override = إعادة تعريف الدالة
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();  // Output: Drawing a Circle
    s2->draw();  // Output: Drawing a Rectangle

    delete s1;
    delete s2;

    return 0;
}
