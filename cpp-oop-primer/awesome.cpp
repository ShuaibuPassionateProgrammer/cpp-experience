#include <iostream>
#include <string>
#define NEWLINE '\n'
using namespace std;

class Main {

    private: string name;

    protected: Main() {
        name = "Shuaibu" << NEWLINE;
    }
};

int main() {

    Main main;

    return 0;
}