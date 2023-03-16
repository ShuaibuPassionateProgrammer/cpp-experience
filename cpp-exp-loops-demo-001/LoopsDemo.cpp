#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    
    system("cls");
    system("color a");

    string name;
    do
    {
        cout << "Enter your name: ";
        cout << ">>> ";
        getline(cin, name);
        if(!name.empty())
        {
            break;
        }
    }while(name.empty());
    cout << "Your name is " << name << endl;
    cout << "Press any key to exit..." << endl;
    getch();

    return 0;
}