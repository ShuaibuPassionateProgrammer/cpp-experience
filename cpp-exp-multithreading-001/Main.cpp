#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    std::cout << "Muti Threading Exercise" << std::endl;
    cout << "Hello ";
    cout.flush();
    sleep(10);

    return 0;
}