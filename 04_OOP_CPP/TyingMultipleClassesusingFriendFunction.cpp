#include <iostream>
using namespace std;

class abc;  // forward declaration

class xyz {
    int x;
public:
    void set_data(int a) {
        x = a;
    }
    friend void max(xyz, abc); // friend declaration
};

class abc {
    int y;
public:
    void set_data(int b) {
        y = b;   // ✅ صححنا هنا
    }
    friend void max(xyz, abc); // friend declaration
};

// Friend function definition
void max(xyz t1, abc t2) {
    if (t1.x > t2.y)
        cout << t1.x;
    else
        cout << t2.y;
}

int main() {
    abc a1;
    xyz x1;
    a1.set_data(100);
    x1.set_data(200);

    max(x1, a1); // ✅ بيقارن بين قيمتين من كلاسَين
    return 0;
}
