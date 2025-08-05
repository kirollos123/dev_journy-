#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric> // for accumulate
#include <stdexcept>
using namespace std;

// =================== Class & Inheritance ===================
class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    virtual void display() const {
        cout << "Person: " << name << endl;
    }
    string getName() const { return name; }
};

class Student : public Person {
    int grade;
public:
    Student(string n, int g) : Person(n), grade(g) {}
    void display() const override {
        cout << "Student: " << name << " | Grade: " << grade << endl;
    }
    int getGrade() const { return grade; }
};

// =================== Utility Functions ===================
double calculateAverage(const vector<int>& nums) {
    if (nums.empty()) throw runtime_error("Empty list, cannot calculate average!");
    double sum = accumulate(nums.begin(), nums.end(), 0);
    return sum / nums.size();
}

int findMax(const vector<int>& nums) {
    return *max_element(nums.begin(), nums.end());
}

int findMin(const vector<int>& nums) {
    return *min_element(nums.begin(), nums.end());
}

// =================== Main Program ===================
int main() {
    // 1. Create students
    vector<Student> students = {
        Student("Kirollos", 85),
        Student("Mina", 92),
        Student("John", 78),
        Student("Peter", 95)
    };

    // 2. Display all students
    cout << "=== Student List ===" << endl;
    for (const auto& s : students) {
        s.display();
    }

    // 3. Store grades in map (name -> grade)
    map<string, int> gradeMap;
    for (auto &s : students) {
        gradeMap[s.getName()] = s.getGrade();
    }

    // 4. Sort students by grade (descending)
    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        return a.getGrade() > b.getGrade();
    });

    cout << "\n=== Sorted by Grade (Desc) ===" << endl;
    for (const auto& s : students) {
        cout << s.getName() << ": " << s.getGrade() << endl;
    }

    // 5. Put unique grades into a set
    set<int> uniqueGrades;
    for (auto &p : gradeMap) {
        uniqueGrades.insert(p.second);
    }

    cout << "\nUnique grades: ";
    for (int g : uniqueGrades) cout << g << " ";
    cout << endl;

    // 6. Get grades in vector to calculate stats
    vector<int> grades;
    for (auto &p : gradeMap) grades.push_back(p.second);

    try {
        cout << "\nAverage grade: " << calculateAverage(grades) << endl;
        cout << "Max grade: " << findMax(grades) << endl;
        cout << "Min grade: " << findMin(grades) << endl;
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    // 7. Search grade by name
    string searchName;
    cout << "\nEnter name to search grade: ";
    cin >> searchName;

    if (gradeMap.find(searchName) != gradeMap.end()) {
        cout << searchName << "'s grade is " << gradeMap[searchName] << endl;
    } else {
        cout << "Student not found.\n";
    }

    return 0;
}
