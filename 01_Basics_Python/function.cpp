#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <tuple>
#include <stdexcept>
#include <numeric>   // <-- لازم تضيفه عشان accumulate
using namespace std;

using namespace std;

// Struct to return multiple results
struct AnalysisResult {
    int maxVal;
    int minVal;
    double average;
    vector<int> sorted;
};

// Recursive merge sort
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Template function to analyze data
template<typename T>
AnalysisResult analyzeData(const vector<T>& data) {
    if (data.empty()) throw runtime_error("Data is empty!");

    vector<int> temp(data.begin(), data.end());
    mergeSort(temp, 0, temp.size() - 1);

    // Calculate max, min, and average
    int maxVal = temp.back();
    int minVal = temp.front();
    double average = accumulate(temp.begin(), temp.end(), 0.0) / temp.size();

    return {maxVal, minVal, average, temp};
}

int main() {
    // Input vector
    vector<int> numbers = {34, 7, 23, 32, 5, 62};

    try {
        AnalysisResult result = analyzeData(numbers);

        cout << "=== Data Analysis ===\n";
        cout << "Max: " << result.maxVal << "\n";
        cout << "Min: " << result.minVal << "\n";
        cout << "Average: " << result.average << "\n";

        cout << "Sorted: ";
        for (int n : result.sorted) cout << n << " ";
        cout << "\n";

        // Lambda to search element
        auto searchElement = [&](int value) {
            return binary_search(result.sorted.begin(), result.sorted.end(), value);
        };

        int searchVal;
        cout << "Enter value to search: ";
        cin >> searchVal;

        if (searchElement(searchVal))
            cout << searchVal << " found in data!\n";
        else
            cout << searchVal << " not found in data!\n";

    } catch (exception &e) {
        cout << "Error: " << e.what() << "\n";
    }

    return 0;
}
