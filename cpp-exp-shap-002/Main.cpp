#include <iostream>
using namespace std;

class Shapes
{
	public: Shapes()
	{
		
	}
	
	private: void rectAngleMenu()
	{
		
	}
	
	private: void drawRectangle()
	{
		
	}
};

class Login 
{
	private: string username, password;
	
	public: Login()
	{
		this->loginProcess();
	}
	
	private: void loginProcess()
	{
		cout << "Username: " << endl;
		getline(cin, username);
	
		cout << "Password: " << endl;
		getline(cin, password);
		
		if(username.empty() || password.empty())
		{
			if(!(username.empty()) && (password.empty()))
			{
				cout << username << " password is required" << endl;
			}
			else if((username.empty()) && !(password.empty()))
			{
				cout << "Provide the username first!" << endl;
			}
			else 
			{
				cout << "Username or Password should be not empty!" << endl;
			}
		}
		else
		{
			if(username == "Shuaibu" && password == "shuaibupass123")
			{
				cout << username << " logged in successfully!" << endl;
			}
			else
			{
				cout << "Wrong Username or Password!" << endl;
			}
		}
	}
};

int main()
{
	Login login;
	
	cout << "***********************" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << endl;
	cout << "***********************" << endl;
	
	return 0;
}