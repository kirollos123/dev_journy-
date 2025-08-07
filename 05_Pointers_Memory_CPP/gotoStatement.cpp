#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, j; // نعرف i و j هنا لكي يكون لهم نطاق خارج الحلقات

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            if (i == 1 && j == 1) {
                goto exitloops;
            }
        }
        cout << "i: " << i << " j: " << j << endl;
    }

exitloops:
    cout << "Exited loops at i: " << i << " j: " << j << endl;

    return 0;
}
