#include <iostream>
#include <conio.h>
#include <string>
#define NEXTLINE '\n'

class ArithmeticOperator {
	
	public: int first, second, add, subtract, mutiply, mod;
	public: float divide;
	
	public: ArithmeticOperator() {
		std::cout << "Enter two numbers to perform some arithmetic operators: " << NEXTLINE;
		std::cin >> first >> second;
		
		std::cout << "The sumission of " << first << " + " << second << " = " << addition(first, second) << NEXTLINE;
		std::cout << "The difference of " << first << " - " << second << " = " << subtraction(first, second) << NEXTLINE;
		std::cout << "The product of " << first << " * " << second << " = " << multiplication(first, second) << NEXTLINE;
		std::cout << "The division of " << first << " / " << second << " = " << division(first, second) << NEXTLINE;
		std::cout << "The remainder of " << first << " % " << second << " = " << addition(first, second) << NEXTLINE;
		std::cout << print_abcd() << NEXTLINE;
	}
	
	private: int addition(int num1, int num2) {
		int add = num1 + num2;
		return (add);
	}
	
	private: int subtraction(int num1, int num2) {
		int sub = num1 - num2;
		return (sub);
	}
	
	private: int multiplication(int num1, int num2) {
		int mult = num1 * num2;
		return (mult);
	}
	
	private: int division(float num1, float num2) {
		float div = (float)num1 / num2;
		return (div);
	}
	
	private: int modulus(int num1, int num2) {
		int mod = num1 % num2;
		return (mod);
	}
	
	private: char print_abcd()
	{
		char alphabet = 'A';
		while(alphabet < 'Z')
		{
			std::cout << alphabet << " ";
			alphabet += 1;
		}
		return alphabet;
	}
};

class ArithmeticAuthentication {
	private: std::string username;
	private: std::string password;
	
	public: ArithmeticAuthentication() {
		this->loginAuthentication();
	}
	
	private: void loginAuthentication() {
		
		std::cout << "Username: " << NEXTLINE;
		getline(std::cin, username);
		
		std::cout << "Password: " << NEXTLINE;
		getline(std::cin, password);
		
		if(username.empty() || password.empty()) {
			if(!(username.empty()) && (password.empty())) {
				std::cout << username << " password is required!" << NEXTLINE;
			} else if((username.empty()) && !(password.empty())) {
				std::cout << "Provide the username first!" << NEXTLINE;
			} else {
				std::cout << "Username or Password should not be empty!" << NEXTLINE;
			}
		} else {
			if(!(username.empty()) && !(password.empty())) {
				clrscr();
				std::cout << username << " loged in succcessfully!" << NEXTLINE;
				ArithmeticOperator ao;
			} else {
				std::cout << "Invalid Username or Password" << NEXTLINE;
			}
		}
	}
};

int main() {
	
	ArithmeticAuthentication aa;
	
	getch();
}