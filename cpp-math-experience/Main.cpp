#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <math.h>
using namespace std;

void math_function_01();
void math_function_02();
void math_function_03();
void math_function_04();
void math_function_05();
void math_function_06();
void using_structure();
void exit_app();

int main()
{
    int choice;
    do{
        cout << "******************** Game Menu **********************\n";
        cout << "1.Math Function 001\n";
        cout << "2.Math Function 002\n";
        cout << "3.Math Function 003\n";
        cout << "4.Math Function 004\n";
        cout << "5.Math Function 005\n";
        cout << "6.Math Function 006\n";
        cout << "7.Using Structure\n";
        cout << "8.Quit Game\n";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                math_function_01();
                break;
            case 2:
                math_function_02();
                break;
            case 3:
                math_function_03();
                break;
            case 4:
                math_function_04();
                break;
            case 5: 
                math_function_05();
                break;
            case 6:
                math_function_06();
                break;
            case 7:
                using_structure();
                break;
            case 8:
                exit_app();
                break;
            default:
                cout << "Invalid entry" << endl;
                break;
        }
    }while(choice != 8);
    
    
    return 0;
}

void math_function_01()
{
    float a=2;
    cout <<"sin(2)="<<sin(a)<<"\n";
    cout <<"cos(2)="<<cos(a)<<"\n";
    cout <<"tan(2)="<<tan(a)<<"\n";
    cout <<"exp(2)="<<exp(a)<<"\n";
    cout <<"log(2)="<<log(a)<<"\n";
    cout <<"log10(2)="<<log10(a)<<"\n";
    cout <<"sqrt(2)="<<sqrt(4)<<"\n";
    cout <<"cbrt(2)="<<cbrt(27)<<"\n";
}

void math_function_02()
{
    cout << "Floor of 2.3 = " << floor(2.3) << "\n";
    cout << "Floor of 2.5 = " << floor(2.5) << "\n";
    cout << "Floor of 2.8 = " << floor(2.8) << "\n";
}

void math_function_03()
{
    cout << "Ceil of 2.3 = " << ceil(2.3) << "\n";
    cout << "Ceil of 2.5 = " << ceil(2.5) << "\n";
    cout << "Ceil of 2.8 = " << ceil(2.8) << "\n";
}

void math_function_04()
{
    cout << "You are welcome to section of the code" << "\n";
}
void math_function_05()
{
    cout << "You are welcome to section five of the code" << "\n";
}

void math_function_06()
{
    cout << "Round of 2.3 = " << round(2.3) << "\n";
    cout << "Round of 2.5 = " << round(2.5) << "\n";
    cout << "Round of 2.8 = " << round(2.8) << "\n";
}

void using_structure()
{
    struct Student
    {
        char name[400];
        int age;
        int roll_no;
    };
    struct Student student;
    strcpy(student.name, "Shuaibu (Passionate Programmer)");
    student.age = 20;
    student.roll_no = 1020;
    cout << "Student Name: " << student.name << "\n";
    cout << "Student Age: " << student.age << "\n";
    cout << "Student Roll No.: " << student.roll_no << "\n";
}

void exit_app()
{
    exit(0);
}