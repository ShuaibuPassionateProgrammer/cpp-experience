#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#define NEWLINE '\n'
using namespace std;

namespace namespace1
{
    int x = 10;
};

namespace namespace2
{
    int x = 10;
};

class NamespaceHandler
{
    public: NamespaceHandler()
    {
        this->handleTheNamespace();
    }

    private: void handleTheNamespace()
    {
        cout << "Namespace One value = " << namespace1::x << NEWLINE;
        cout << "Namespace Two value = " << namespace2::x << NEWLINE;
    }
};

class FileCreation
{
    public: FileCreation()
    {
        this->createFile();
    }

    private: void createFile()
    {
        ofstream my_file("myfile.txt");
        if(my_file.is_open())
        {
            my_file << "Shuaibu Ibrahim Isa" << NEWLINE;
            my_file << "Passionate Programmer" << NEWLINE;
            my_file << "A Software Programmer" << NEWLINE;
            my_file << "A Game Programmer" << NEWLINE;
        }
        my_file.close();
    }
};

class ReadFile
{
    public: ReadFile()
    {
        this->readFile();
    }

    private: void readFile()
    {
        string line;
        ifstream my_file("myfile.txt");

        while(getline(my_file, line))
        {
            cout << line << NEWLINE;
        }
        my_file.close();
    }
};

int main()
{

    NamespaceHandler handler;
    FileCreation create_file;
    ReadFile read_file;

    return 0;
}