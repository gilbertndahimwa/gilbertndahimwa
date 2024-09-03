#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


struct Student {
    string name;
    int courseworkMarks;
    int examMarks;
    int totalMarks;
};

bool compareStudents(const Student &a, const Student &b) {
    return a.totalMarks > b.totalMarks;
}

int main() {
    int numberOfStudents;

         cout << "Enter the number of students: ";
         cin >> numberOfStudents;

    std::vector<Student> students(numberOfStudents);

    // Input students' data
    for (int i = 0; i < numberOfStudents; ++i) {
             cout << "Enter the name of student " << i + 1 << ": ";
             cin >> students[i].name;

        do {
                 cout << "Enter coursework marks for " << students[i].name << " (Max 40): ";
                 cin >> students[i].courseworkMarks;
        } while (students[i].courseworkMarks < 0 || students[i].courseworkMarks > 40);

        do {
                 cout << "Enter examination marks for " << students[i].name << " (Max 60): ";
                 cin >> students[i].examMarks;
        } while (students[i].examMarks < 0 || students[i].examMarks > 60);

        students[i].totalMarks = students[i].courseworkMarks + students[i].examMarks;
    }

    // Sort students based on total marks in descending order
    sort(students.begin(), students.end(), compareStudents);

    // Output the ranked results
          cout << "\nRanking of Students:\n";
          cout << "Rank\tName\tTotal Marks\n";
    for (int i = 0; i < numberOfStudents; ++i) {
        std::cout << i + 1 << "\t" << students[i].name << "\t" << students[i].totalMarks << "\n";
    }

    return 0;
}
