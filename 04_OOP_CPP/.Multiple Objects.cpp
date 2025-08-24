#include <iostream>
using namespace std;
 class car {
   public:
      string brand; 
      string model;
      int year;
 };
  int main (){
    car car1;
    car car2; 
    car car3;
    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 1999;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;
    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << endl;
    return 0;
  }