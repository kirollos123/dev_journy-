#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
   
     int ages  [8]= {18, 22, 25, 30, 35, 40, 45, 50};
      int i ;
       int length = sizeof(ages) / sizeof(ages[0]);
       int lowestage = ages[0];
       for (int age :ages){
        if(age < lowestage){
            lowestage = age;
        }
       }
       cout << "The lowest age is: " << lowestage << "\n";
    return 0;
}
// output

// Age: 18, Average so far: 9
// Age: 22, Average so far: 11
// Age: 25, Average so far: 12.5
// Age: 30, Average so far: 15
// Age: 35, Average so far: 17.5
// Age: 40, Average so far: 20
// Age: 45, Average so far: 22.5
// Age: 50, Average so far: 25
