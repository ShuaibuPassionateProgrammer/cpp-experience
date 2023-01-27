#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int width, height;
};

int main(int argc, char *argv[])
{
    system("cls");
    system("color a");

    struct Rectangle rect;
    rect.width = 8;
    rect.height = 5;
    cout << "Area of Rectangle = " << (rect.width * rect.height) << endl;

    return 0;
}