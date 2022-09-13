#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#define NEWLINE '\n'
using namespace std;

void multi_line_breaker();
void printFullStarPyramid();
void generateRandomNumber();

int main()
{
    printFullStarPyramid();
    multi_line_breaker();
    generateRandomNumber(); 
    
    return 0;
}

void multi_line_breaker()
{
    for(int i=1; i<3; i++)
    {
        cout << NEWLINE;
    }
}

void printFullStarPyramid()
{
    int rows, i, j, space;
    
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    for(i=1; i<=rows; i++)
    {
        //for loop for displaying space
        for(space = i; space <= rows; space++)
        {
            cout << " ";
        }
        //for to display star equal to number of rows
        for(j=1; j<= (2*i-1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void generateRandomNumber()
{
    for (int i=1; i<25; i++)
    {
        cout << 1+(rand()%6) << " ";
    }
    cout << NEWLINE;
}