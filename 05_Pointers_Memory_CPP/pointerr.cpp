#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";         // متغير عادي
    string* ptr = &food;           // مؤشّر يخزن عنوان المتغير food

    cout << food << "\n";          // يطبع: Pizza
    cout << &food << "\n";         // يطبع: عنوان الذاكرة (مثلاً: 0x23fe...)
    cout << ptr << "\n";           // يطبع: نفس العنوان ↑
    cout << *ptr << "\n";          // يطبع: Pizza ← dereferencing

    return 0;
}
