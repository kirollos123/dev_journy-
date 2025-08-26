#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "tut tut" << endl;
    }
};

class Car : public Vehicle {
public: 
    string model = "Mustang";
};

int main() {
    Car mycar;             // صح: لازم نكتب Car مش car my car
    mycar.honk();          // استدعاء دالة من الكلاس الأب Vehicle
    cout << mycar.brand + string(" ") + mycar.model;
    return 0;
}
