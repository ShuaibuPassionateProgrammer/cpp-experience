#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int luckyNumbers[5];
    for(int i=0; i<5; i++)
    {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }
    for(int i=0; i<=4; i++)
    {
        cout << *(luckyNumbers + i) << " ";
    }
    cout << "\n";

    cout << "============================================" << "\n";

    int otherNumbers[9];
    for(int i=0; i<9; i++)
    {
        cin >> otherNumbers[i];
    }
    for(int i=0; i<=8; i++)
    {
        cout << *(otherNumbers + i) << " ";
    }
    cout << "\n";

    return 0;
}