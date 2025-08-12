Student Management System
Overview
This project is a Student Management System implemented in C++ to demonstrate advanced programming concepts related to pointers and dynamic memory management, as covered in Lecture 4 and Lecture 5 by Dr. Mohammed Abdelfattah (2025). The program manages a linked list of student records, allowing users to add, display, and delete students, calculate grade averages using function pointers, and handle memory allocation safely to avoid memory leaks.
Features

Add Student: Add a new student with a name and grade to a linked list.
Display Students: Show all students' names and grades using an array of pointers.
Delete Student: Remove a student by name from the linked list.
Calculate Average: Compute the average grade using a function pointer.
Memory Management: Safely allocate and deallocate memory using new and delete, with proper handling to prevent memory leaks and dangling pointers.
Void Pointers: Demonstrate the use of void pointers for handling different data types (e.g., grades).
Destructors: Use destructors to ensure proper cleanup of student objects.

Covered Concepts
This project integrates the following concepts from Lectures 4 and 5:

Pointers: Used for managing the linked list nodes (Student* next).
Dynamic Memory Allocation: Utilizes new for creating student nodes and delete for freeing memory.
Array of Pointers: Stores pointers to student names for display.
Pointer to Pointer: Passes the head of the linked list (Student**) to modify it in functions.
Passing Pointers to Functions: Modifies the linked list through functions like addStudent and deleteStudent.
Returning Pointers from Functions: Returns a new Student node from createStudent.
Null Pointers: Initializes pointers with nullptr and checks for empty lists.
Void Pointers: Uses void* to handle generic data (e.g., grades).
Function Pointers: Calculates statistics (e.g., average) using a function pointer (StatFunc).
Memory Leak Prevention: Ensures proper deallocation with delete and sets pointers to nullptr to avoid dangling pointers.
Destructors: Automatically cleans up resources when student objects are deleted.

Prerequisites

Compiler: A C++ compiler (e.g., g++, clang++) supporting C++11 or later.
Standard Libraries: Uses <iostream> and <string> for input/output and string handling.

How to Run

Clone or Download: Copy the source code (DynamicMemoryExample.cpp) to your local machine.
Compile: Use a C++ compiler to compile the code. For example:g++ DynamicMemoryExample.cpp -o student_management


Run: Execute the compiled program:./student_management


Interact:
Enter the number of students and their details (name and grade).
View the list of students.
Delete a student by name.
Observe the average grade calculation and memory cleanup.



Example Output
أدخل عدد الطلاب: 3
أدخل درجة الطالب 1: محمد 85.5
أدخل درجة الطالب 2: أحمد 90.0
أدخل درجة الطالب 3: عمر 78.5

قائمة الطلاب:
الطالب 1: محمد
الطالب 2: أحمد
الطالب 3: عمر
الاسم: محمد, الدرجة: 85.5
الاسم: أحمد, الدرجة: 90
الاسم: عمر, الدرجة: 78.5

متوسط الدرجات: 84.6667
الدرجة عبر المؤشر العام: 85.5

بعد حذف أحمد:
قائمة الطلاب:
الطالب 1: محمد
الطالب 2: عمر
الاسم: محمد, الدرجة: 85.5
الاسم: عمر, الدرجة: 78.5

Deleting student: محمد
Deleting student: عمر
تم تحرير القائمة
القائمة فارغة

Project Structure

DynamicMemoryExample.cpp: The main source file containing the student management system implementation.
Student Structure: Defines a Student struct with a constructor and destructor for managing student data.
Functions:
createStudent: Returns a dynamically allocated Student node.
addStudent: Adds a student to the linked list using a pointer to pointer.
displayStudents: Displays student data using an array of pointers.
deleteStudent: Removes a student by name.
freeList: Frees all allocated memory to prevent leaks.
calcAverage: Calculates the average grade using a function pointer.
printScore: Uses a void pointer to display a grade.



Notes

Memory Safety: The program ensures no memory leaks by properly freeing allocated memory and setting pointers to nullptr.
Extensibility: You can extend the project by:
Adding sorting functionality using function pointers.
Using smart pointers (std::unique_ptr or std::shared_ptr) for safer memory management.
Supporting additional student attributes (e.g., ID, date of birth).
Implementing input validation for robustness.


Error Handling: The program checks for allocation failures and handles empty lists appropriately.

References

Lecture 4: Pointers, Arrays, Function Pointers, Void Pointers, etc.
Lecture 5: Dynamic Memory Allocation, Memory Management Operators, Memory Leaks, etc.
External Resources: w3schools, tutorialspoint, geeksforgeeks.
