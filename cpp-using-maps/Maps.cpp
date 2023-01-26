#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <map>
#include <string>
#define NEWLINE '\n'

using namespace std;

void clrscr();
void newline();
void random_number_generator();

int main()
{
    clrscr();
    random_number_generator();

    return 0;
}

void clrscr()
{
    system("cls");
}

void newline()
{
    cout << NEWLINE;
}

void random_number_generator()
{
    int i, counter;
    i = 1;
    counter = 25;

    while(i < counter)
    {
        cout << 1+(rand()%6) << " " ;
        i++;
    }
    newline();
}