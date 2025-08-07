#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";  // استخدم علامات اقتباس مزدوجة
    string &meal = food;    // meal تشير إلى food

    cout << "Original food: " << meal << endl;
    return 0;
}
