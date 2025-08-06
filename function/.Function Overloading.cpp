#include <iostream>
using namespace std;
#include <string>
 int plusfun(int x ,int y){
    return x+y ;

 }
 double plusfun(double x ,double y){
    return x+y ;
 }

int main() {
     int num1 = plusfun( 8,5);
       int num3 = plusfun( 8,5);
     double num2 = plusfun( 8.5,5.5);
     cout << "The sum of integers is: " << num1 << "\n"; // Output will be 13
     cout << "The sum of doubles is: " << num2 << "\n";
        cout << "The sum of integers is: " << num3 << "\n"; // Output will be 13
     
    
    
    return 0;
}
// //Function Overloading
// With function overloading, multiple functions can have the same name with different parameters:
// int myFunction(int x)
// float myFunction(float x)
// double myFunction(double x, double y)
// Note: Multiple functions can have the same name as long as the number and/or type of parameters are different
