#include<iostream>
using namespace std;
class car {
    public :
    string brand;
    string model;
    int year;
    car(string x, string y, int z) { // constructor with parameters
        brand =x;
        model=y;
        year=z;
    }
};
int main (){
    car car1("bmw ","x5",1999);
    car car2("ford ","mustang",1969);
    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << car2.brand << " " << car2.model << " "<< car2.year << endl;
    return 0;
}