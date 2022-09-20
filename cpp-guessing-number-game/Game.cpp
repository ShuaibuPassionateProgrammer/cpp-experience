#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void login();
void startGame();

int main()
{
    login();

    return 0;
}

void login()
{
    string username;
    string password;
    
    const string user = "Shuaibu";
    const string pass = "shuaibupass123";
    
    cout << "Enter Username: \n";
    getline(cin, username);
    
    cout << "Enter Password: \n";
    getline(cin, password);
    
    if((username.empty()) || (password.empty()))
    {
        if(!(username.empty()) && (password.empty()))
            cout << username << " password is required!\n";
        else if((username.empty()) && !(password.empty()))
            cout << "Provide username first!\n";
        else
            cout << "Username or Password should not be empty!\n";
    }
    else 
    {
        if((username == user) && (password == pass))
        {
            cout << username << " logged in successfully!\n";
            startGame();
        }
        else
            cout << "Invalid! Username or Password\n";
    }
}

void startGame()
{
    int number;
    int response;
    int score = 0;
    
    srand(time(NULL));
    number = rand() % 10 + 1;
    
    do
    {
        cout << "Enter your guess (1-10): " << endl;
        cin >> response;
        
        if(response > number)
        {
            cout << "That was too high!\n";
        }
        else if(response < number)
        {
            cout << "That was too low!\n";
        }
        else
        {
            cout << "That was correct!\n";
        }
        score += 1;
    }while(number != response);
    
    cout << "Number: " << number << endl;
    cout << "Guesses: " << score << endl;
}