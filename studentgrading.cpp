#include <iostream>
#include <string>

using namespace std;

int main() {
    const int maxStudents = 100;
    string studentNames[maxStudents];
    int studentGrades[maxStudents];

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        string name;
        int grade;

        cout << "Enter the name of student " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter the grade for " << name << ": ";
        cin >> grade;

        studentNames[i] = name;
        studentGrades[i] = grade;
    }

    if (numStudents == 0) {
        cout << "No student data provided." << endl;
    } else {
        int totalGrades = 0;
        int highestGrade = studentGrades[0];
        int lowestGrade = studentGrades[0];

        for (int i = 0; i < numStudents; i++) {
            totalGrades += studentGrades[i];
            if (studentGrades[i] > highestGrade) {
                highestGrade = studentGrades[i];
            }
            if (studentGrades[i] < lowestGrade) {
                lowestGrade = studentGrades[i];
            }
        }

        double averageGrade = static_cast<double>(totalGrades) / numStudents;

        cout << "\nAverage Grade: " << averageGrade << endl;
        cout << "Highest Grade: " << highestGrade << endl;
        cout << "Lowest Grade: " << lowestGrade << endl;
    }

    return 0;
}

