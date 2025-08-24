#include <iostream>
using namespace std;

class Car {
public:
    int speed(int maxspeed);  // method declaration
};

// method definition outside the class
int Car::speed(int maxspeed) {
    return maxspeed;
}

int main() {
    Car mycar;
    cout << mycar.speed(200) << " km/h" << endl;
    return 0;
}
