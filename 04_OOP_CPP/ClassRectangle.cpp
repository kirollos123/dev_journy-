#include<iostream>
using namespace std;
class Rectangle{
    private: 
    double length;
    double width;
    public:
    Rectangle(){
        length=1.0;
        width=1.0;
    };
    Rectangle(double l, double w){
        length=l;
        width=w;
    };
    double area(){
        return length*width;
    };
    double perimeter(){
        return 2*(length+width);
    };
    void display(){
        cout<<"Length: "<<length<<", Width: "<<width<<endl;
        cout<<"Area: "<<area()<<", Perimeter: "<<perimeter()<<endl;
    };  
     
};
int main(){
    Rectangle rect1; // Default constructor
    Rectangle rect2(5.0, 3.0); // Parameterized constructor
    cout<<"Rectangle 1:"<<endl;
    rect1.display();
    cout<<"Rectangle 2:"<<endl;
    rect2.display();
    return 0;
}