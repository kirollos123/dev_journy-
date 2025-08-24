#include <iostream>
using namespace std;

struct student {
    int id;
    char name[20];
    float marks;
    char gender[10];
    char address[50];
};

void display(struct student s) {
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "Gender: " << s.gender << endl;
    cout << "Address: " << s.address << endl;
}

int main() {
    student st = {1, "Kirollos", 95.5, "Male", "Egypt"};
    display(st);
    return 0;
}
