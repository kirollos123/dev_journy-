#include <iostream>
using namespace std;

// إعلان الدالة
double getaverage(int *arr, int size);

int main() {
    int balance[5] = {100, 200, 300, 400, 500};
    double average;

    average = getaverage(balance, 5); // تمرير المصفوفة وحجمها
    cout << "Average balance: " << average << endl;

    return 0;
}

// تعريف الدالة
double getaverage(int *arr, int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; i++) {
        sum += arr[i]; // جمع عناصر المصفوفة
    }

    avg = double(sum) / size; // حساب المتوسط
    return avg;
}
