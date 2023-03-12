#include <iostream>
#include <string>
using namespace std;

int main() {

    string studentname, matricno, department, semester;

    cout << "Enter Student Name: ";
    cin >> studentname;
    cout << "Enter Student Matric NO: ";
    cin >> matricno;
    cout << "Enter Department name: ";
    cin >> department;
    cout << "Enter Semester: ";
    cin >> semester;

    cout << "\n";
    cout << "Student Name: " << studentname << endl;
    cout << "Matric No: " << matricno << endl;
    cout << "Department: " << department << endl;
    cout << "Semester: " << semester << endl;
    cout << "\n";

    string course_code[5], ca[5], exams[5], grade[5], remark[5];
    // cout << "Student Details: " << endl;
    cout << "Enter Student Code Course: " << endl;
    for(int i=0; i<5; i++) {
        cout << "Course Code: ";
        cin >> course_code[i];
        cout << "CA: ";
        cin >> ca[i];
        cout << "Exams: ";
        cin >> exams[i];
        cout << "Grade: ";
        cin >> grade[i];
        cout << "Remark: ";
        cin >> remark[i];
    }

    cout << "\n";
    cout << "S/N: \t\t\t Course Code: \t\t\t CA: \t\t\t Exams: \t\t\t Grade: \t\t\t Remark \n";
    for(int i=0; i<5; i++) {
        cout << i+1 << "\t\t\t " << course_code[i] << "\t\t\t\t " << ca[i] << "\t\t\t " << exams[i] << "\t\t\t\t" << grade[i] << "\t\t\t" << remark[i] << "\n" ;
    }

    return 0;
}