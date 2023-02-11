#include <iostream>
#incude <string>
#define NEWLINE '\n'
using namespace std;

class Main {

    private: string name;
    private: int age;

    public: Main() {
        setName("Shuaibu");
        cout << "My name is " << getName() << NEWLINE;
    }

    private: void getName() {
        return this->name;
    }

    private: void setName(string name) {
        this->name = name;
    }

    private: void getAge() {
        return this->age;
    }

    private: void setAge(int age) {
        this->age = age;
    }
};

int main() {


    return 0;
}

