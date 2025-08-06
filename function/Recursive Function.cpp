#include <iostream>
using namespace std;

int main() {
    cout << "Example $i test file" << endl;
    return 0;
}


//Recursive Function
// Recursion is the technique of making a function call itself. This technique provides a way to break complicated
// problems down into simple problems which are easier to solve.
// 10 + sum(9)
// 10 + ( 9 + sum(8) )
// 10 + ( 9 + ( 8 + sum(7) ) )
// ...
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
// ❑ When the sum() function is called, it adds parameter k to the sum of all numbers smaller than k and returns the
// result. When k becomes 0, the function just returns 0.
// ❑ Since the function does not call itself when k is 0, the program stops there and returns the result.
