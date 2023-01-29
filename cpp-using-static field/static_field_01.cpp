#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Account
{
    public:
        int account_no;
        string name;
        static float rateOfInterest;

        Account(int account_no, string name)
        {
            this->account_no = account_no;
            this->name = name;
        }

        void display()
        {
            cout << account_no << " "  << name << " " << rateOfInterest << endl;
        }
        
};

float Account::rateOfInterest = 65.5;

int main(int argc, char *argv[])
{
    Account a1 = Account(201, "Sankul");
    Account a2 = Account(202, "Nakul");
    a1.display();
    a2.display();

    return 0;
}