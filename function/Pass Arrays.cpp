#include <iostream>
using namespace std;
#include <string>
 void myfunction( int arr [ 5]){
      for ( int  i = 0 ;i < 5 ; i++){
        cout << arr[i] << " ";
 }
}
int main() {
     int mynumber[5 ]={1, 2, 3, 4, 5};
     myfunction(mynumber);
     
    
    
    return 0;
}
