#include <iostream>
#include <string>
#define NEWLINE '\n'
using namespace std;

class MainClass{
    public: MainClass() {
        cout << "Lets go..." << endl;
        string name = "Unknown";
    }
};

class MainClass001 {
    public: MainClass001() {
        string name, favoriteColor;

        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your favorite color: " << endl;
        getline(cin, favoriteColor);

        cout << "My name is " << name << endl;
        cout << "My favorite color is " << favoriteColor << " and i like it" << endl;
    }
};

class MainClass002 {
    public: void myFunction001();
};

void MainClass002::myFunction001() {
    string car[4];
    car[0] = "Bugatti";
    car[1] = "Chevrolet";
    car[2] = "Ferrari";
    car[3] = "LamBorgini";

    for(int i = 0; i <= 10; i++) {
        cout << i << "\t" << car[i] << NEWLINE;
    }
}

void login();

int main()
{
    login();

    return 0;
}

void login() {
    string usrname;
    string passwd;

    int iterate = 0;
    while(iterate <= 25) {

        if(iterate==3) {
            break;
        }

        cout << "Enter Username: ";
        getline(cin, usrname);

        cout << "Enter Password: ";
        getline(cin, passwd);

        if(usrname=="") {
            cout << "Username field cannot be empty!" << NEWLINE;
        }
        if(passwd=="") {
            cout << "Password field cannot be empty!" << NEWLINE;
        }

        if(usrname=="Administrator" && passwd=="administratorpassword123") {
            cout << "Administrator: Logged In Successfully!" << NEWLINE;
        }
        else if(usrname=="Shuaibu" && passwd=="shuaibupassword123") {
            cout << "Shuaibu: Logged In Successfully!" << endl;
            MainClass mainClass;
            MainClass001 mainClass001;

            MainClass002 mainClass002;
            mainClass002.myFunction001();

        }
        else {
            cout << "Invalid Username or Password" << NEWLINE;
        }

        cout << NEWLINE;

        iterate += 1;
    }
}