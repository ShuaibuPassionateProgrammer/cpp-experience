#include <iostream>
#include <conio.h>
#include <string>
#define NEWLINE '\n'
using namespace std;

class Operators {
	
	public: int id;
	public: string name;
	public: int age;
		
	public: Operators(int id, string name, int age) {
		this->id = id;
		this->name = name;
		this->age = age;
		
		cout << this->id << " " << this->name << " " << this->age << NEWLINE;
	}
};


class Login {
	
	public: Login() {
		this->setUsernameAndPassword();
	}
	
	private: void setUsernameAndPassword() {
		string username;
		string password;
		
		cout << "Username" << NEWLINE;
		getline(cin, username);
		
		cout << "Password" << NEWLINE;
		getline(cin, password);
		
		if(username.empty() || password.empty()) {
			if(username =="Admin" && password.empty()){
				cout << username << " password required!" << NEWLINE;
			} else if(username.empty() && !password.empty()) {
				cout << "Provide your username first" << NEWLINE;
			} else {
				cout << "Username or Password should not be empty" << NEWLINE;
			}
		} else {
			if(username == "Admin" && password == "admin@123") {
				Operators(1, "Shuaibu", 21);
				Operators(2, "Ibrahim", 25);
				Operators(3, "Isa", 18);
				Operators(4, "Sulaimanu", 31);
				Operators(5, "Dauda", 35);
				Operators(6, "Musa", 12);
				Operators(7, "Adamu", 26);
				Operators(8, "Yusuf", 19);
				Operators(9, "Isa", 23);
				cout << "A programming language is a process of creating a set of instruction that tells the computer to perform a specific task." << NEWLINE;
			} else {
				cout << "Wrong Username or Password" << NEWLINE;
			}
		}
	}
};

int main() {
	Login login;
	
	return 0;
}