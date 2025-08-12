#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    double score;
    Student* next;
    Student(string n, double s) : name(n), score(s), next(nullptr) {}
    ~Student() { cout << "Deleting student: " << name << endl; }
};

typedef double (*StatFunc)(const Student*, int);

double calcAverage(const Student* head, int count) {
    if (!head || count == 0) return 0.0;
    double sum = 0.0;
    const Student* current = head;
    while (current) {
        sum += current->score;
        current = current->next;
    }
    return sum / count;
}

Student* createStudent(string name, double score) {
    return new Student(name, score);
}

void addStudent(Student** head, string name, double score) {
    Student* newStudent = createStudent(name, score);
    if (!*head) {
        *head = newStudent;
    } else {
        Student* current = *head;
        while (current->next) {
            current = current->next;
        }
        current->next = newStudent;
    }
}

void displayStudents(const Student* head) {
    if (!head) {
        cout << "No students found." << endl;
        return;
    }
    const Student* current = head;
    int count = 0;
    while (current) {
        cout << "Student " << count + 1 << ": " << current->name
             << " | Score: " << current->score << endl;
        count++;
        current = current->next;
    }
}

void deleteStudent(Student** head, string name) {
    if (!*head) return;

    Student* current = *head;
    Student* prev = nullptr;

    if (current->name == name) {
        *head = current->next;
        delete current;
        return;
    }

    while (current && current->name != name) {
        prev = current;
        current = current->next;
    }

    if (current) {
        prev->next = current->next;
        delete current;
    } else {
        cout << "strufent" << name << " not dount "<< endl;
    }
}

void freeList(Student** head) {
    Student* current = *head;
    while (current) {
        Student* temp = current;
        current = current->next;
        delete temp;
    }
    *head = nullptr;
}

void printScore(void* ptr) {
    double* score = static_cast<double*>(ptr);
    cout << "score  " << *score << endl;
}

int main() {
    Student* head = nullptr;
    int studentCount = 0;

    addStudent(&head, "kirollos", 85.5); studentCount++;
    addStudent(&head, "mina", 90.0); studentCount++;
    addStudent(&head, "sei7a", 78.5); studentCount++;

    displayStudents(head);

    StatFunc stat = calcAverage;
    cout << "avde score " << stat(head, studentCount) << endl;

    double score = head->score;
    printScore(&score);

    deleteStudent(&head, "kirollos");
    cout << "\nafter deltion" << endl;
    displayStudents(head);

    freeList(&head);
    cout << "free list " << endl;
    displayStudents(head);

    return 0;
}
