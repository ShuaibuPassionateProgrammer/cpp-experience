#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Account
{
    public:
        int accountNo;
        string name;
        static int count;

        Account(int accountNo, string name)
        {
            this->accountNo = accountNo;
            this->name = name;
            count++;
        }

        void display()
        {
            cout << accountNo << "  " << name << " " << endl;
        }
};

int Account::count = 0;

int main(int argc, char *argv[])
{
    system("cls");
    system("color a");
    Account a1 = Account(201, "Sunjay");
    Account a2 = Account(202, "Nakul");
    Account a3 = Account(203, "Ranjana");
    Account a4 = Account(204, "Shuaibu");
    Account a5 = Account(205, "Ibrahim");
    a1.display();
    a2.display();
    a3.display();
    a4.display();
    a5.display();

    cout << "Total objects are: " << Account::count << endl;

    return 0;
}