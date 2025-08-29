#include <iostream>
#include <string>

const int NUM_STUDENTS = 5;

struct Student {
    std::string name;
    std::string courses;
};

int main()
{
    Student* student[NUM_STUDENTS];

    // Allocate memory for each student
    for(int i=0; i<NUM_STUDENTS; ++i)
    {
        student[i] = new Student;
    }

    // Input names and courses for each student using pointers
    for(int i=0; i<NUM_STUDENTS; ++i)
    {
        std::cout << "Enter name for student " << i+1 << ":";
        std::cin >> student[i]->name;

        std::cout << "Enter courses for student " << i+1 << ":";
        std::cin >> student[i]->courses;
    }

    // display each student with their courses using pointers
    for(int i=0; i<NUM_STUDENTS; ++i)
    {
        std::cout << "Student " << i+1 << ": Name - " << student[i]->name << ", Courses - " << student[i]->courses << std::endl;
    }

    // Deallocate memory for each student
    for(int i=0; i<NUM_STUDENTS; ++i)
    {
        delete student[i];
    }

    return 0;
}