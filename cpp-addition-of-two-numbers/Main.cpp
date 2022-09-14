#include <iostream>
using namespace std;

double add(double num1, double num2);

int main()
{
    double number1;
    double number2;
    
    cout << "Enter first number: " << endl;
    cin >> number1;
    
    cout << "Enter first number: " << endl;
    cin >> number2;
    
    double result = add(number1, number2);
    cout << "The result is " << result << endl;

    return 0;
}

double add(double num1, double num2)
{
    double result = num1 + num2;
    return result;
}
