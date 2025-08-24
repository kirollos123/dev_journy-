#include <iostream>
using namespace std;
inline int add (int a, int b){
    return a + b;
}
int main (){
    cout << add(10,20) << endl;
    cout << add(30,40) << endl;
    cout << add(50,60) << endl; 
    return 0;
}