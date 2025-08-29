#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#define NEWLINE '\n'
using namespace std;

int main()
{

    string nick_name;
    while(true)
    {
        cout << "What is your nick name: ";
        cout << ">>> ";
        getline(cin, nick_name);
        if(!(nick_name.empty()))
        {
            break;
        }
    }
    cout << "You nick name is " << nick_name << NEWLINE;
    cout << "Press any key to exit...?" << NEWLINE;
    getch();


    return 0;
}