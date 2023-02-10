#include <iostream>
#include <string>
#define NEXTLINE '\n'
using namespace std;

class Main {

    string name;
    int age;

    public: Main() {
        this->setName("Shuaibu");
        cout << "First Name: "<< this->getName() << NEXTLINE;

        this->setName("Ibrahim");
        cout << "Last Name: "<< this->getName() << NEXTLINE;

        this->setName("Isa");
        cout << "Middle Name: "<< this->getName() << NEXTLINE;

        this->setAge(20);
        cout << "Age: " << this-getAge() << NEXTLINE;
    }

    private: string getName() {
        return this->name;
    }

    private: void setName(string name) {
        this->name = name;
    }

    private: int getAge() {
        return this->age;
    }

    private: void setAge(int age) {
        this->age = age;
    }
};

int main() {

    Main main;

    return 0;
}
