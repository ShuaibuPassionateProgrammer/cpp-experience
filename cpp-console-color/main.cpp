#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class Employee
{
    public:
        Employee()
        {
            cout << "Constructor invoked" << endl;
        }

    ~Employee()
    {
        cout << "Destructor invoked" << endl;
    }
};

int main(int argc, char *argv[])
{
    system("cls");
    system("color a");

    //creating an object of employee
    Employee emp;

    //creating an object of employee
    Employee emp2;

    return 0;
}