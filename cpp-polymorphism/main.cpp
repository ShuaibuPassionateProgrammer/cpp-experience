#include <iostream>
#include <conio.h>
#include <string>

class PolymorphicClass00
{
	public: void add(int a, int b) 
	{
		std::cout << "Addition result: " << a + b << std::endl;
	}
};

class PolymorphicClass01 : public PolymorphicClass00
{
	public: void add(int a, int b, int c) 
	{
		std::cout << "Addtion result: " << a + b + c << std::endl;
	}
};

class PolymorphicClass02 : public PolymorphicClass00
{
	public: void add(int a, int b, int c, int d) 
	{
		std::cout << "Addtion result: " << a + b + c + d << std::endl;
	}
};

class PolymorphicClass03 : public PolymorphicClass00
{
	public: void add(int a, int b, int c, int d, int e) 
	{
		std::cout << "Addition result: " << a + b + c + d + e<< std::endl;
	}
};

class PolymorphicClass04 : public PolymorphicClass00
{
	public: void add(int a, int b, int c, int d, int e, int f) 
	{
		std::cout << "Addition result: " << a + b + c + d + e + f<< std::endl;
	}
};

class PolymorphicClass05 : public PolymorphicClass00
{
	public: void add(int a, int b, int c, int d, int e, int f, int g) 
	{
		std::cout << "Addition result: " << a + b + c + d + e + f + g << std::endl;
	}
};

class AgeChecker
{
	public: AgeChecker()
	{
		this->ageToBeChecking();
	}
	
	private: void ageToBeChecking()
	{
		int current_age;
		std::cout << "Enter your age: " << std::endl;
		std::cin >> current_age;
		
		std::cout << "Your age is " << current_age << std::endl;
	}
};

class CppOverview
{
	public: CppOverview()
	{
		std::cout << "C++ is a general purpose, case-sentive free-form \nprogramming language that supports object oriented, \nprocedural and generic programming\n" << std::endl;
		std::cout << "C++ is a mid-level language as it encapsulates both \nthe high level and low level features\n" << std::endl;
		std::cout << "C++ supports the object orientation programming" << std::endl;
		std::cout << "They four major pillars of object orientation used in c++ are: \n" << std::endl;
		std::cout << "1. Inheritance\n2. Polymorphism\n3. Encapsulation and \n4. Abstraction\n" << std::endl;
		std::cout << "C++ Standarad Library\n" << std::endl;
		std::cout << "The C++ Standard Library is divided into three (3) important parts; these are: " << std::endl;
		std::cout << "1. They core library which includes data types, variables and literals etc." << std::endl;
		std::cout << "2. The standard library include the set of functions, manipulating string, files etc. " << std::endl;
		std::cout << "3. The Standard Template Library (STL) includes the set of functions and manipulating a data structure. \n" << std::endl;
		std::cout << "Usage of C++" << std::endl;
		std::cout << "By the help of C++ programming language, we can develop different types of secured and robust applications: " << std::endl;
		std::cout << "1. Window application " << std::endl;
		std::cout << "2. Client-Server application " << std::endl;
		std::cout << "3. Device Driver " << std::endl;
		std::cout << "4. Embedded firmware etc \n" << std::endl;
	}
};

class LoginValidation
{
	public: LoginValidation()
	{
		this->login();
	}
	
	private: void login()
	{
		std::string username, password;
		std::cout << "Username: \n";
		getline(std::cin, username);
		
		std::cout << "Password: \n";
		getline(std::cin, password);
		
		if(username.empty() || password.empty())
		{
			if(!username.empty() && password.empty())
			{
				std::cout << username << " password is required!" << std::endl; 
			}
			else if(username.empty() && !password.empty())
			{
				std::cout << "Provide the username first!" << std::endl;
			}
			else
			{
				std::cout << "Username or Password should not be empty!" << std::endl;
			}
		}
		else
		{
			if((!username.empty()) && !(password.empty()))
			{
				clrscr();
				CppOverview co;
				
				PolymorphicClass00 pc00;
				pc00.add(10, 10);
				
				PolymorphicClass01 pc01;
				pc01.add(10, 10, 10);
				
				PolymorphicClass02 pc02;
				pc02.add(10, 10, 10, 10);
				
				PolymorphicClass03 pc03;
				pc03.add(10, 10, 10, 10, 10);
				
				PolymorphicClass04 pc04;
				pc04.add(10, 10, 10, 10, 10, 10);
				
				std::cout << std::endl;
				AgeChecker ac;
			}
		}
	}
};

int main()
{
	
	LoginValidation lv;
	
	getch();
}