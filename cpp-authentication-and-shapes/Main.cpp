#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Shapes
{
    public: Shapes()
    {
        this->shapeMenu();
    }
    
    public: void shapeMenu()
    {
        int choice;
        do 
        {
            cout << "################## Shapes Application ##################\n" << endl;
            cout << "1. Rectangle Shape" << endl;
            cout << "2. Triangle Shape" << endl;
            cout << "3. Diamond Shape" << endl;
            cout << "4. Square Shape" << endl;
            cout << "0. Exit" << endl;
            cin >> choice;
            switch(choice)
            {
                case 1:
                    rectangle();
                    break;
                case 2:
                    triangle();
                    break;
                case 3:
                    diamond();
                    break;
                case 4:
                    square();
                    break;
                case 0:
                    quitOption();
                    break;
                default:
                    cout << "Invalid selection" << endl;
                    shapeMenu();
                    break;
            }
        }
        while(choice != 0);
    }
    
    private: void rectangle()
    {
        cout << "*************************" << endl;
        cout << "*                        *" << endl;
        cout << "*                        *" << endl;
        cout << "*                        *" << endl;
        cout << "*                        *" << endl;
        cout << "*                        *" << endl;
        cout << "*                        *" << endl;
        cout << "*************************" << endl;
    }
    
    private: void triangle()
    {
        cout << "                   " << endl;
        cout << "       **          " << endl;
        cout << "      *  *         " << endl;
        cout << "     *    *        " << endl;
        cout << "    *      *       " << endl;
        cout << "   *        *      " << endl;
        cout << "  *          *     " << endl;
        cout << " **************    " << endl;
    }
    
    private: void diamond()
    {
        cout << "    ************     " << endl;
        cout << "   *             *   " << endl;
        cout << " *                *  " << endl;
        cout << "*                  *" << endl;
        cout << "*                  *" << endl;
        cout << "*                  *" << endl;
        cout << "*                  *" << endl;
        cout << "*                  *" << endl;
        cout << " *                * " << endl;
        cout << "  *              *  " << endl;
        cout << "   *************    " << endl;
    }
    
    private: void square()
    {
        cout << "***************" << endl;
        cout << "*             *" << endl;
        cout << "*             *" << endl;
        cout << "*             *" << endl;
        cout << "*             *" << endl;
        cout << "*             *" << endl;
        cout << "*             *" << endl;
        cout << "***************" << endl;
    }
    
    private: void quitOption()
    {
        cout << "Good Bye!" << endl;
        exit(0);
    }
};

class Login
{
    string username, password;
    const string user = "Shuaibu";
    const string pass = "shuaibupass@123";

    public: Login()
    {
        cout << "Enter Username: " << endl;
        getline(cin, username);
        
        cout << "Enter Password: " << endl;
        getline(cin, password);
        
        if(username.empty() || password.empty())
        {
            if(!(username.empty()) && (password.empty()))
            {
                cout << username << " password is required!" << endl;
            } 
            else if((username.empty()) && !(password.empty())) 
            {
                cout << "Provide the username first!" << endl;
            }
            else 
            {
                cout << "Username or Password should not be empty!" << endl;
            }
        }
        else
        {
            if(username == user && password == pass)
            {
                cout << username << " logged in successfully!" << endl;
                Shapes shape;
            }
            else  
            {
                cout << "Invalid Username or Password!" << endl;
            }
        }
    }
};

int main() {
    
    static int login_attempt = 1;
    
    while(login_attempt <= 3)
    {
        Login login;
        login_attempt += 1;
    }
    
    return 0;
}