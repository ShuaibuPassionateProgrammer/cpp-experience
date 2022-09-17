#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    cout << "Pseudo Random Number Generator" << endl;
    cout << "______________________________" << endl;

    srand(time(NULL));
    
    int number1 = rand() % 10 + 1;
    int number2 = rand() % 20 + 1;
    int number3 = rand() % 30 + 1;
    
    cout << number1 << "\t" << number2 << "\t" << number3 << "\n";

    return 0;
}