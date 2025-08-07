#include <iostream>
using namespace std;
#include <string>
struct {
    string brand;
    string model;
     int year;

    
} car1, car2, car3;

int main() {
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2021;
    car3.brand = "Ford";
    car3.model = "Focus";
    car3.year = 2019;
    cout << "Car 1: " << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << "Car 2: " << car2.brand << " " << car2.model << " " << car2.year << endl;
    cout << "Car 3: "       << car3.brand << " " << car3.model << " " << car3.year << endl;
   
    return 0;
}
