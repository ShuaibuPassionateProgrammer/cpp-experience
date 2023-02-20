#include <iostream>
#include <conio.h>
#include <string>
#define PLAYER_1 "Smoke"
#define PLAYER_2 "Raiden"
#define PLAYER_3 "Kano"
#define PLAYER_4 "SubZero"
#define PLAYER_5 "Luiken"
#define NEWLINE '\n'

void startGame();
void gameSettings();
void gameSound();
void gameTips();
void exitGame();

char back_to_main_menu;

int main()
{
	int choice;
	std::cout << " ********************** Mortal Kombat **********************\n" << NEWLINE;
	std::cout << "1. Start Game" << NEWLINE;
	std::cout << "2. Game Settings" << NEWLINE;
	std::cout << "3. Game Help" << NEWLINE;
	std::cout << "4. Game Sounds" << NEWLINE;
	std::cout << "5. Quit Game" << NEWLINE;
	std::cin >> choice;
	
	switch(choice)
	{
		case 1:
			startGame();
			break;
		case 2:
			gameSettings();
			break;
		case 3:
			gameSound();
			break;
		case 4:
			gameTips();
			break;
		case 5:
			exitGame();
			break;
	}
		
	getch();
}

void default_player()
{
	std::cout << "Invalid selection!" << NEWLINE;
			std::cout << "Do you want to continue?" << NEWLINE;
			std::cin >> back_to_main_menu;
			std::cin.get();
			std::cin.get();
			if(back_to_main_menu == 'Y' || back_to_main_menu == 'y')
			{
				clrscr();
				main();
			}
}

void startGame()
{
	clrscr();
	int player_selection, back_to_main_menu;
	std::cout << "Select a player to proceed" << NEWLINE;
	std::cout << "1. Smoke\n";
	std::cout << "2. Raiden\n";
	std::cout << "3. Kano\n";
	std::cout << "4. SubZero\n";
	std::cout << "5. Luiken\n";
	std::cout << "Game has been started!" << NEWLINE;
	std::cin >> player_selection;
	switch(player_selection)
	{
		case 1:
			std::cout << PLAYER_1 << " is selected!" << NEWLINE;
			break;
		case 2:
			std::cout << PLAYER_2 << " is selected!" << NEWLINE;
			break;
		case 3:
			std::cout << PLAYER_3 << " is selected!" << NEWLINE;
			break;
		case 4:
			std::cout << PLAYER_4 << " is selected!" << NEWLINE;
			break;
		case 5:
			std::cout << PLAYER_5 << " is selected!" << NEWLINE;
			break;
		default:
			default_player();
			break;
	}
}

void gameSettings()
{
	std::cout << "Game has been settings environment" << NEWLINE;
}

void gameTips()
{
	std::cout << "Game has been help is loading" << NEWLINE;
}

void gameSound()
{
	std::cout << "Game has been sounds control" << NEWLINE;
}

void exitGame()
{
	std::cout << "Game exited successfully!" << NEWLINE;
}