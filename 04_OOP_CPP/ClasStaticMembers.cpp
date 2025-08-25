#include <iostream>
using namespace std;

class box {
private:
    double length;
    double breadth;
    double height;

public:
    static int objectcount;   // متغير static - نسخة واحدة بس

    // Constructor
    box(double l = 2.0, double b = 2.0, double h = 20.0) {
        cout << "Constructor called" << endl;
        length = l;
        breadth = b;
        height = h;
        objectcount++;  // كل ما نعمل object جديد نزود العداد
    }

    double volume() {
        return length * breadth * height;
    }

    // Getter static function
    static int getcount() {
        return objectcount;
    }
};

// Initialize static member of class box
int box::objectcount = 0;

int main() {
    cout << "Init stage count: " << box::getcount() << endl;

    box box1(3.3, 1.2, 1.5);
    box box2(8.5, 6.0, 2.0);

    cout << "Box1 volume: " << box1.volume() << endl;
    cout << "Box2 volume: " << box2.volume() << endl;

    cout << "Final stage count: " << box::getcount() << endl;
    return 0;
}
