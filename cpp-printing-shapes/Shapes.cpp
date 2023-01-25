#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

void generateRandomNumber();
void drawTriangle();
void drawPyramid();

class Calculation
{
    public: Calculation()
    {
        this->calculation();
    }

    private: void calculation()
    {
        int num1, num2;
        
        std::cout << "Enter first number: " << std::endl;
        std::cin >> num1;

        std::cout << "Enter second number: " << std::endl;
        std::cin >> num1;

        std::cout << num1 << " + " << num2 << this->sum(num1, num2) << std::endl;
        std::cout << num1 << " - " << num2 << this->subtract(num1, num2) << std::endl;
        std::cout << num1 << " * " << num2 << this->multiply(num1, num2) << std::endl;
        std::cout << num1 << " / " << num2 << this->quotient(num1, num2) << std::endl;
    }

    private: int sum(int num1, int num2)
    {
        return num1 + num2;
    }

    private: int subtract(int num1, int num2)
    {
        return num1 - num2;
    }

    private: int multiply(int num1, int num2)
    {
        return num1 * num2;
    }

    private: int quotient(int num1, int num2)
    {
        return num1 / num2;
    }
};

//main entry point
int main()
{
    system("cls");
    system("color a");
    for(int i=0; i<25; i++)
    {
        generateRandomNumber();
    }
    std::cout << std::endl;
    drawTriangle();
    std::cout << std::endl;
    drawPyramid();
    std::cout << std::endl;
    Calculation calc;

    return 0;
}

void generateRandomNumber()
{
    std::cout << 1+(rand()%6) << " ";
}

void drawTriangle()
{
    int rows, i, j, space;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for(i=1; i<rows; i++)
    {
        for(space=i; space<rows; space++)
        {
            std::cout << " ";
        }
        for(j=1; j<=(2*i-1); j++)
        {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
}

void drawPyramid()
{
    int rows, i, j;
    std::cout << "Enter the number of rows again: ";
    std::cin >> rows;

    for(i=0; i<rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            std::cout << "| ";
        }
        std::cout << std::endl;
    }
}