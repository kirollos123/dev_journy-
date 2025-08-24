#include <iostream>
using namespace std;
inline int squre ( int x){
    return x * x;
}
 int main (){
     int num =5;
     int res= squre(num);// parameter num is passed to the function squre
     cout << res<< endl; 
     return 0;
 }