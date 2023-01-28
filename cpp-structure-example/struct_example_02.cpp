#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#define NEWLINE '\n'
using namespace std;

struct Rectangle 
{
    int width, height;

    //Structure constructor
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    void areaOfRectangle()
    {
        cout << "Area of rectangle = " << (width*height) << NEWLINE;
    }
};

int main(int argc, char *argv[])
{
    system("cls");
    system("color a");
    struct Rectangle rect = Rectangle(4,6);
    rect.areaOfrectangle();

    return 0;
}