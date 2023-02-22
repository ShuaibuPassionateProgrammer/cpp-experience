#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
using namespace std;

void main_program()
{
    std::cout << "Muti Threading Exercise" << std::endl;
    cout << "Hello ";
    cout.flush();
    sleep(10);
    cout << "World";
    cout << endl;
}

int main() {

    main_program();

    return 0;
}