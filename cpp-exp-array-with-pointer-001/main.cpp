#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int luckyNumbers[5] = {2, 5, 9, 11, 13};
    cout << luckyNumbers[2] << "\n";
    cout << *(luckyNumbers + 2) << "\n";

    cout << "=============================================" << "\n";

    int otherNumbers[9] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    cout << otherNumbers[3] << "\n";
    cout << *(otherNumbers + 4) << "\n";

    return 0;
}