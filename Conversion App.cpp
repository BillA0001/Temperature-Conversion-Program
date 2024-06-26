#include "stdafx.h"
#include <string>
#include <limits>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
#include "C:\Users\User\Desktop\Conversion App\area.cpp"
#include "C:\Users\User\Desktop\Conversion App\digital storage.cpp"
#include "C:\Users\User\Desktop\Conversion App\force.cpp"
#include "C:\Users\User\Desktop\Conversion App\fuel efficiency.cpp"
#include "C:\Users\User\Desktop\Conversion App\length.cpp"
#include "C:\Users\User\Desktop\Conversion App\mass.cpp"
#include "C:\Users\User\Desktop\Conversion App\speed.cpp"
#include "C:\Users\User\Desktop\Conversion App\temperature.cpp"
#include "C:\Users\User\Desktop\Conversion App\time.cpp"
#include "C:\Users\User\Desktop\Conversion App\volume.cpp"
#include "C:\Users\User\Desktop\Conversion App\energy.cpp"
#include "C:\Users\User\Desktop\Conversion App\pressure.cpp"
using namespace std;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 15;
	cfi.dwFontSize.Y = 25;
	cfi.FontFamily = FF_DECORATIVE;
	wcscpy_s(cfi.FaceName, L"Terminal");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	string choice;
	int select = -1;
	int select1;
	int select2;
	int round;
	while (select != 0)
	{
		cout << "how many digits would you like to round to: ";
		cin >> round;
		while (!cin || cin.fail())
		{
			cin.clear();
			string junk;
			getline(cin, junk);
			cout << "how many digits would you like to round to: ";
			cin >> round;
		}
		cout.precision(round);
		DWORD n;
		DWORD size;
		COORD coord = { 0 };
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		GetConsoleScreenBufferInfo(h, &csbi);
		size = csbi.dwSize.X * csbi.dwSize.Y;
		FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
		GetConsoleScreenBufferInfo(h, &csbi);
		FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
		SetConsoleCursorPosition(h, coord);
		cout << "valid options are 1-12 (0 to exit)\n1) area.			10) time.\n2) digital storage.		11) velocity.\n3) energy.			12) volume.\n4) force.\n5) fuel efficiency.\n6) length.\n7) mass.\n8) pressure.\n9) temperature.\nchoose a measurement system: ";
		cin >> select;
		fgetc(stdin);
		while (!cin || cin.fail() || select < 0 || select>13)
		{
			cin.clear();
			string junk;
			getline(cin, junk);
			cout << "choose a measurement system: ";
			cin >> select;
		}
		if (select == 0)
		{
			return 0;
		}
		else if (select == 1)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "area conversion.\noptions 1-22 are valid. (0 to exit)\n1) acres.				10) square micrometers.\n2) hectares.				11) square miles.\n3) square centimeters.			12) square millimeters.\n4) square decameters.			13) square nanometers.\n5) square decimeters.			14) square yards.\n6) square feet.\n7) square inches.\n8) square kilometers.\n9) square meters.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select1>14)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: " << endl;
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if  (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 2)
				{
					acrestohectares(1);
				}
				else if  (select2 == 3)
				{
					acrestosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					acrestosquaredecameters(1);
				}
				else if  (select2 == 5)
				{
					acrestosquaredecimeters(1);
				}
				else if  (select2 == 6)
				{
					acrestosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					acrestosquareinches(1);
				}
				else if  (select2 == 8)
				{
					acrestosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					acrestosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					acrestosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					acrestosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					acrestosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					acrestosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					acrestosquareyards(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to:";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					hectarestoacres(1);
				}
				else if  (select2 == 3)
				{
					hectarestosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					hectarestosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					hectarestosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					hectarestosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					hectarestosquareinches(1);
				}
				else if  (select2 == 8)
				{
					hectarestosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					hectarestosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					hectarestosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					hectarestosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					hectarestosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					hectarestosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					hectarestosquareyards(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if  (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squarecentimeterstoacres(1);
				}
				else if  (select2 == 2)
				{
					squarecentimeterstohectares(1);
				}
				else if  (select2 == 4)
				{
					squarecentimeterstosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squarecentimeterstosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squarecentimeterstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squarecentimeterstosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squarecentimeterstosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squarecentimeterstosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squarecentimeterstosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squarecentimeterstosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squarecentimeterstosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squarecentimeterstosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squarecentimeterstosquareyards(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squaredecimeterstoacres(1);
				}
				else if  (select2 == 2)
				{
					squaredecimeterstohectares(1);
				}
				else if  (select2 == 3)
				{
					squaredecimeterstosquarecentimeters(1);
				}
				else if  (select2 == 5)
				{
					squaredecimeterstosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squaredecimeterstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squaredecimeterstosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squaredecimeterstosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squaredecimeterstosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squaredecimeterstosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squaredecimeterstosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squaredecimeterstosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squaredecimeterstosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squaredecimeterstosquareyards(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 5)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squaredecameterstoacres(1);
				}
				else if  (select2 == 2)
				{
					squaredecameterstohectares(1);
				}
				else if  (select2 == 3)
				{
					squaredecameterstosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squaredecameterstosquaredecimeters(1);
				}
				else if  (select2 == 6)
				{
					squaredecameterstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squaredecameterstosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squaredecameterstosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squaredecameterstosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squaredecameterstosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squaredecameterstosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squaredecameterstosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squaredecameterstosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squaredecameterstosquareyards(1);
				}
			}
			else if (select1 == 6)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 6)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squarefeettoacres(1);
				}
				else if  (select2 == 2)
				{
					squarefeettohectares(1);
				}
				else if  (select2 == 3)
				{
					squarefeettosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squarefeettosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squarefeettosquaredecameters(1);
				}
				else if  (select2 == 7)
				{
					squarefeettosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squarefeettosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squarefeettosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squarefeettosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squarefeettosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squarefeettosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squarefeettosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squarefeettosquareyards(1);
				}
			}
			else if (select1 == 7)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 7)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squareinchestoacres(1);
				}
				else if  (select2 == 2)
				{
					squareinchestohectares(1);
				}
				else if  (select2 == 3)
				{
					squareinchestosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squareinchestosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squareinchestosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squareinchestosquarefeet(1);
				}
				else if  (select2 == 8)
				{
					squareinchestosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squareinchestosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squareinchestosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squareinchestosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squareinchestosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squareinchestosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squareinchestosquareyards(1);
				}
			}
			else if (select1 == 8)
			{
				cout << "OPTION 8 is invalid.\nselect a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 8)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squarekilometerstoacres(1);
				}
				else if  (select2 == 2)
				{
					squarekilometerstohectares(1);
				}
				else if  (select2 == 3)
				{
					squarekilometerstosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squarekilometerstosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squarekilometerstosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squarekilometerstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squarekilometerstosquareinches(1);
				}
				else if  (select2 == 9)
				{
					squarekilometerstosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squarekilometerstosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squarekilometerstosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squarekilometerstosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squarekilometerstosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squarekilometerstosquareyards(1);
				}
			}
			else if (select1 == 9)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 9)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squaremeterstoacres(1);
				}
				else if  (select2 == 2)
				{
					squaremeterstohectares(1);
				}
				else if  (select2 == 3)
				{
					squaremeterstosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squaremeterstosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squaremeterstosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squaremeterstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squaremeterstosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squaremeterstosquarekilometers(1);
				}
				else if  (select2 == 10)
				{
					squaremeterstosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squaremeterstosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squaremeterstosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squaremeterstosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squaremeterstosquareyards(1);
				}
			}
			else if (select1 == 10)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 10)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squaremicrometerstoacres(1);
				}
				else if  (select2 == 2)
				{
					squaremicrometerstohectares(1);
				}
				else if  (select2 == 3)
				{
					squaremicrometerstosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squaremicrometerstosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squaremicrometerstosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squaremicrometerstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squaremicrometerstosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squaremicrometerstosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squaremicrometerstosquaremeters(1);
				}
				else if  (select2 == 11)
				{
					squaremicrometerstosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squaremicrometerstosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squaremicrometerstosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squaremicrometerstosquareyards(1);
				}
			}
			else if (select1 == 11)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 11)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squaremilestoacres(1);
				}
				else if  (select2 == 2)
				{
					squaremilestohectares(1);
				}
				else if  (select2 == 3)
				{
					squaremilestosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squaremilestosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squaremilestosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squaremilestosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squaremilestosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squaremilestosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squaremilestosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squaremilestosquaremicrometers(1);
				}
				else if  (select2 == 12)
				{
					squaremilestosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squaremilestosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squaremilestosquareyards(1);
				}
			}
			else if (select1 == 12)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 12)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squaremillimeterstoacres(1);
				}
				else if  (select2 == 2)
				{
					squaremillimeterstohectares(1);
				}
				else if  (select2 == 3)
				{
					squaremillimeterstosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squaremillimeterstosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squaremillimeterstosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squaremillimeterstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squaremillimeterstosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squaremillimeterstosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squaremillimeterstosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squaremillimeterstosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squaremillimeterstosquaremiles(1);
				}
				else if  (select2 == 13)
				{
					squaremillimeterstosquarenanometers(1);
				}
				else if  (select2 == 14)
				{
					squaremillimeterstosquareyards(1);
				}
			}
			else if (select1 == 13)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 13)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squarenanometerstoacres(1);
				}
				else if  (select2 == 2)
				{
					squarenanometerstohectares(1);
				}
				else if  (select2 == 3)
				{
					squarenanometerstosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squarenanometerstosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squarenanometerstosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squarenanometerstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squarenanometerstosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squarenanometerstosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squarenanometerstosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squarenanometerstosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squarenanometerstosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squarenanometerstosquaremillimeters(1);
				}
				else if  (select2 == 14)
				{
					squarenanometerstosquareyards(1);
				}
			}
			if (select1 == 14)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>14 || select2 == 14)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if  (select2 == 1)
				{
					squareyardstoacres(1);
				}
				else if  (select2 == 2)
				{
					squareyardstohectares(1);
				}
				else if  (select2 == 3)
				{
					squareyardstosquarecentimeters(1);
				}
				else if  (select2 == 4)
				{
					squareyardstosquaredecimeters(1);
				}
				else if  (select2 == 5)
				{
					squareyardstosquaredecameters(1);
				}
				else if  (select2 == 6)
				{
					squareyardstosquarefeet(1);
				}
				else if  (select2 == 7)
				{
					squareyardstosquareinches(1);
				}
				else if  (select2 == 8)
				{
					squareyardstosquarekilometers(1);
				}
				else if  (select2 == 9)
				{
					squareyardstosquaremeters(1);
				}
				else if  (select2 == 10)
				{
					squareyardstosquaremicrometers(1);
				}
				else if  (select2 == 11)
				{
					squareyardstosquaremiles(1);
				}
				else if  (select2 == 12)
				{
					squareyardstosquaremillimeters(1);
				}
				else if  (select2 == 13)
				{
					squareyardstosquarenanometers(1);
				}
			}
		}
		else if (select == 2)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "     bits             bytes\n     ----             -----\n 1)     bits	 2)     bytes\n 3) kibibits	 4) kibibytes\n 5) kilobits	 6) kilobytes\n 7) mebibits	 8) mebibytes\n 9) megabits	10) megabytes\n11) gibibits	12) gibibytes\n13) gigabits	14) gigabytes\n15) tebibits	16) tebibytes\n17) terabits	18) terabytes\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select1>18)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2 > 18 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2)
				{
					bitstobytes(1);
				}
				else if (select2 == 3)
				{
					bitstokibibits(1);
				}
				else if (select2 == 4)
				{
					bitstokibibytes(1);
				}
				else if (select2 == 5)
				{
					bitstokilobits(1);
				}
				else if (select2 == 6)
				{
					bitstokilobytes(1);
				}
				else if (select2 == 7)
				{
					bitstomebibits(1);
				}
				else if (select2 == 8)
				{
					bitstomebibytes(1);
				}
				else if (select2 == 9)
				{
					bitstomegabits(1);
				}
				else if (select2 == 10)
				{
					bitstomegabytes(1);
				}
				else if (select2 == 11)
				{
					bitstogibibits(1);
				}
				else if (select2 == 12)
				{
					bitstogibibytes(1);
				}
				else if (select2 == 13)
				{
					bitstogigabits(1);
				}
				else if (select2 == 14)
				{
					bitstogigabytes(1);
				}
				else if (select2 == 15)
				{
					bitstotebibits(1);
				}
				else if (select2 == 16)
				{
					bitstotebibytes(1);
				}
				else if (select2 == 17)
				{
					bitstoterabits(1);
				}
				else if (select2 == 18)
				{
					bitstoterabytes(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					bytestobits(1);
				}
				else if (select2 == 3)
				{
					bytestokibibits(1);
				}
				else if (select2 == 4)
				{
					bytestokibibytes(1);
				}
				else if (select2 == 5)
				{
					bytestokilobits(1);
				}
				else if (select2 == 6)
				{
					bytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					bytestomebibits(1);
				}
				else if (select2 == 8)
				{
					bytestomebibytes(1);
				}
				else if (select2 == 9)
				{
					bytestomegabits(1);
				}
				else if (select2 == 10)
				{
					bytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					bytestogibibits(1);
				}
				else if (select2 == 12)
				{
					bytestogibibytes(1);
				}
				else if (select2 == 13)
				{
					bytestogigabits(1);
				}
				else if (select2 == 14)
				{
					bytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					bytestotebibits(1);
				}
				else if (select2 == 16)
				{
					bytestotebibytes(1);
				}
				else if (select2 == 17)
				{
					bytestoterabits(1);
				}
				else if (select2 == 18)
				{
					bytestoterabytes(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2 > 18 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kibibitstobits(1);
				}
				else if (select2 == 2)
				{
					kibibitstobytes(1);
				}
				else if (select2 == 4)
				{
					kibibitstokibibytes(1);
				}
				else if (select2 == 5)
				{
					kibibitstokilobits(1);
				}
				else if (select2 == 6)
				{
					kibibitstokilobytes(1);
				}
				else if (select2 == 7)
				{
					kibibitstomebibits(1);
				}
				else if (select2 == 8)
				{
					kibibitstomebibytes(1);
				}
				else if (select2 == 9)
				{
					kibibitstomegabits(1);
				}
				else if (select2 == 10)
				{
					kibibitstomegabytes(1);
				}
				else if (select2 == 11)
				{
					kibibitstogibibits(1);
				}
				else if (select2 == 12)
				{
					kibibitstogibibytes(1);
				}
				else if (select2 == 13)
				{
					kibibitstogigabits(1);
				}
				else if (select2 == 14)
				{
					kibibitstogigabytes(1);
				}
				else if (select2 == 15)
				{
					kibibitstotebibits(1);
				}
				else if (select2 == 16)
				{
					kibibitstotebibytes(1);
				}
				else if (select2 == 17)
				{
					kibibitstoterabits(1);
				}
				else if (select2 == 18)
				{
					kibibitstoterabytes(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kibibytestobits(1);
				}
				else if (select2 == 2)
				{
					kibibytestobytes(1);
				}
				else if (select2 == 3)
				{
					kibibytestokibibits(1);
				}
				else if (select2 == 5)
				{
					kibibytestokilobits(1);
				}
				else if (select2 == 6)
				{
					kibibytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					kibibytestomebibits(1);
				}
				else if (select2 == 8)
				{
					kibibytestomebibytes(1);
				}
				else if (select2 == 9)
				{
					kibibytestomegabits(1);
				}
				else if (select2 == 10)
				{
					kibibytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					kibibytestogibibits(1);
				}
				else if (select2 == 12)
				{
					kibibytestogibibytes(1);
				}
				else if (select2 == 13)
				{
					kibibytestogigabits(1);
				}
				else if (select2 == 14)
				{
					kibibytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					kibibytestotebibits(1);
				}
				else if (select2 == 16)
				{
					kibibytestotebibytes(1);
				}
				else if (select2 == 17)
				{
					kibibytestoterabits(1);
				}
				else if (select2 == 18)
				{
					kibibytestoterabytes(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 5)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kibibytestobits(1);
				}
				else if (select2 == 2)
				{
					kibibytestobytes(1);
				}
				else if (select2 == 3)
				{
					kibibytestokibibits(1);
				}
				else if (select2 == 4)
				{
					kibibytestokilobits(1);
				}
				else if (select2 == 6)
				{
					kibibytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					kibibytestokibibits(1);
				}
				else if (select2 == 8)
				{
					kibibytestomegabits(1);
				}
				else if (select2 == 9)
				{
					kibibytestomebibytes(1);
				}
				else if (select2 == 10)
				{
					kibibytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					kibibytestogibibits(1);
				}
				else if (select2 == 12)
				{
					kibibytestogigabits(1);
				}
				else if (select2 == 13)
				{
					kibibytestogibibytes(1);
				}
				else if (select2 == 14)
				{
					kibibytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					kibibytestotebibits(1);
				}
				else if (select2 == 16)
				{
					kibibytestoterabits(1);
				}
				else if (select2 == 17)
				{
					kibibytestotebibytes(1);
				}
				else if (select2 == 18)
				{
					kibibytestoterabytes(1);
				}
			}
			else if (select1 == 6)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 6)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kilobytestobits(1);
				}
				else if (select2 == 2)
				{
					kilobytestobytes(1);
				}
				else if (select2 == 3)
				{
					kilobytestokibibits(1);
				}
				else if (select2 == 4)
				{
					kilobytestokilobits(1);
				}
				else if (select2 == 5)
				{
					kilobytestokibibytes(1);
				}
				else if (select2 == 7)
				{
					kilobytestokibibits(1);
				}
				else if (select2 == 8)
				{
					kilobytestomegabits(1);
				}
				else if (select2 == 9)
				{
					kilobytestomebibytes(1);
				}
				else if (select2 == 10)
				{
					kilobytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					kilobytestogibibits(1);
				}
				else if (select2 == 12)
				{
					kilobytestogigabits(1);
				}
				else if (select2 == 13)
				{
					kilobytestogibibytes(1);
				}
				else if (select2 == 14)
				{
					kilobytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					kilobytestotebibits(1);
				}
				else if (select2 == 16)
				{
					kilobytestoterabits(1);
				}
				else if (select2 == 17)
				{
					kilobytestotebibytes(1);
				}
				else if (select2 == 18)
				{
					kilobytestoterabytes(1);
				}
			}
			else if (select1 == 7)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 7)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					mebibitstobits(1);
				}
				else if (select2 == 2)
				{
					mebibitstobytes(1);
				}
				else if (select2 == 3)
				{
					mebibitstokibibits(1);
				}
				else if (select2 == 4)
				{
					mebibitstokilobits(1);
				}
				else if (select2 == 5)
				{
					mebibitstokibibytes(1);
				}
				else if (select2 == 6)
				{
					mebibitstokilobytes(1);
				}
				else if (select2 == 8)
				{
					mebibitstomegabits(1);
				}
				else if (select2 == 9)
				{
					mebibitstomebibytes(1);
				}
				else if (select2 == 10)
				{
					mebibitstomegabytes(1);
				}
				else if (select2 == 11)
				{
					mebibitstogibibits(1);
				}
				else if (select2 == 12)
				{
					mebibitstogigabits(1);
				}
				else if (select2 == 13)
				{
					mebibitstogibibytes(1);
				}
				else if (select2 == 14)
				{
					mebibitstogigabytes(1);
				}
				else if (select2 == 15)
				{
					mebibitstotebibits(1);
				}
				else if (select2 == 16)
				{
					mebibitstoterabits(1);
				}
				else if (select2 == 17)
				{
					mebibitstotebibytes(1);
				}
				else if (select2 == 18)
				{
					mebibitstoterabytes(1);
				}
			}
			else if (select1 == 8)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 8)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					megabitstobits(1);
				}
				else if (select2 == 2)
				{
					megabitstobytes(1);
				}
				else if (select2 == 3)
				{
					megabitstokibibits(1);
				}
				else if (select2 == 4)
				{
					megabitstokilobits(1);
				}
				else if (select2 == 5)
				{
					megabitstokibibytes(1);
				}
				else if (select2 == 6)
				{
					megabitstokilobytes(1);
				}
				else if (select2 == 7)
				{
					megabitstokibibits(1);
				}
				else if (select2 == 9)
				{
					megabitstomebibytes(1);
				}
				else if (select2 == 10)
				{
					megabitstomegabytes(1);
				}
				else if (select2 == 11)
				{
					megabitstogibibits(1);
				}
				else if (select2 == 12)
				{
					megabitstogigabits(1);
				}
				else if (select2 == 13)
				{
					megabitstogibibytes(1);
				}
				else if (select2 == 14)
				{
					megabitstogigabytes(1);
				}
				else if (select2 == 15)
				{
					megabitstotebibits(1);
				}
				else if (select2 == 16)
				{
					megabitstoterabits(1);
				}
				else if (select2 == 17)
				{
					megabitstotebibytes(1);
				}
				else if (select2 == 18)
				{
					megabitstoterabytes(1);
				}
			}
			else if (select1 == 9)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 9)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					mebibytestobits(1);
				}
				else if (select2 == 2)
				{
					mebibytestobytes(1);
				}
				else if (select2 == 3)
				{
					mebibytestokibibits(1);
				}
				else if (select2 == 4)
				{
					mebibytestokilobits(1);
				}
				else if (select2 == 5)
				{
					mebibytestokibibytes(1);
				}
				else if (select2 == 6)
				{
					mebibytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					mebibytestokibibits(1);
				}
				else if (select2 == 8)
				{
					mebibytestomegabits(1);
				}
				else if (select2 == 10)
				{
					mebibytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					mebibytestogibibits(1);
				}
				else if (select2 == 12)
				{
					mebibytestogigabits(1);
				}
				else if (select2 == 13)
				{
					mebibytestogibibytes(1);
				}
				else if (select2 == 14)
				{
					mebibytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					mebibytestotebibits(1);
				}
				else if (select2 == 16)
				{
					mebibytestoterabits(1);
				}
				else if (select2 == 17)
				{
					mebibytestotebibytes(1);
				}
				else if (select2 == 18)
				{
					mebibytestoterabytes(1);
				}
			}
			else if (select1 == 10)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 10)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					megabytestobits(1);
				}
				else if (select2 == 2)
				{
					megabytestobytes(1);
				}
				else if (select2 == 3)
				{
					megabytestokibibits(1);
				}
				else if (select2 == 4)
				{
					megabytestokilobits(1);
				}
				else if (select2 == 5)
				{
					megabytestokibibytes(1);
				}
				else if (select2 == 6)
				{
					megabytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					megabytestokibibits(1);
				}
				else if (select2 == 8)
				{
					megabytestomegabits(1);
				}
				else if (select2 == 9)
				{
					megabytestomebibytes(1);
				}
				else if (select2 == 11)
				{
					megabytestogibibits(1);
				}
				else if (select2 == 12)
				{
					megabytestogigabits(1);
				}
				else if (select2 == 13)
				{
					megabytestogibibytes(1);
				}
				else if (select2 == 14)
				{
					megabytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					megabytestotebibits(1);
				}
				else if (select2 == 16)
				{
					megabytestoterabits(1);
				}
				else if (select2 == 17)
				{
					megabytestotebibytes(1);
				}
				else if (select2 == 18)
				{
					megabytestoterabytes(1);
				}
			}
			else if (select1 == 11)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 11)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					gibibitstobits(1);
				}
				else if (select2 == 2)
				{
					gibibitstobytes(1);
				}
				else if (select2 == 3)
				{
					gibibitstokibibits(1);
				}
				else if (select2 == 4)
				{
					gibibitstokilobits(1);
				}
				else if (select2 == 5)
				{
					gibibitstokibibytes(1);
				}
				else if (select2 == 6)
				{
					gibibitstokilobytes(1);
				}
				else if (select2 == 7)
				{
					gibibitstokibibits(1);
				}
				else if (select2 == 8)
				{
					gibibitstomegabits(1);
				}
				else if (select2 == 9)
				{
					gibibitstomebibytes(1);
				}
				else if (select2 == 10)
				{
					gibibitstomegabytes(1);
				}
				else if (select2 == 12)
				{
					gibibitstogigabits(1);
				}
				else if (select2 == 13)
				{
					gibibitstogibibytes(1);
				}
				else if (select2 == 14)
				{
					gibibitstogigabytes(1);
				}
				else if (select2 == 15)
				{
					gibibitstotebibits(1);
				}
				else if (select2 == 16)
				{
					gibibitstoterabits(1);
				}
				else if (select2 == 17)
				{
					gibibitstotebibytes(1);
				}
				else if (select2 == 18)
				{
					gibibitstoterabytes(1);
				}
			}
			else if (select1 == 12)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 12)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					gigabitstobits(1);
				}
				else if (select2 == 2)
				{
					gigabitstobytes(1);
				}
				else if (select2 == 3)
				{
					gigabitstokibibits(1);
				}
				else if (select2 == 4)
				{
					gigabitstokilobits(1);
				}
				else if (select2 == 5)
				{
					gigabitstokibibytes(1);
				}
				else if (select2 == 6)
				{
					gigabitstokilobytes(1);
				}
				else if (select2 == 7)
				{
					gigabitstokibibits(1);
				}
				else if (select2 == 8)
				{
					gigabitstomegabits(1);
				}
				else if (select2 == 9)
				{
					gigabitstomebibytes(1);
				}
				else if (select2 == 10)
				{
					gigabitstomegabytes(1);
				}
				else if (select2 == 11)
				{
					gigabitstogibibits(1);
				}
				else if (select2 == 13)
				{
					gigabitstogibibytes(1);
				}
				else if (select2 == 14)
				{
					gigabitstogigabytes(1);
				}
				else if (select2 == 15)
				{
					gigabitstotebibits(1);
				}
				else if (select2 == 16)
				{
					gigabitstoterabits(1);
				}
				else if (select2 == 17)
				{
					gigabitstotebibytes(1);
				}
				else if (select2 == 18)
				{
					gigabitstoterabytes(1);
				}
			}
			else if (select1 == 13)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 13)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					gibibytestobits(1);
				}
				else if (select2 == 2)
				{
					gibibytestobytes(1);
				}
				else if (select2 == 3)
				{
					gibibytestokibibits(1);
				}
				else if (select2 == 4)
				{
					gibibytestokilobits(1);
				}
				else if (select2 == 5)
				{
					gibibytestokibibytes(1);
				}
				else if (select2 == 6)
				{
					gibibytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					gibibytestokibibits(1);
				}
				else if (select2 == 8)
				{
					gibibytestomegabits(1);
				}
				else if (select2 == 9)
				{
					gibibytestomebibytes(1);
				}
				else if (select2 == 10)
				{
					gibibytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					gibibytestogibibits(1);
				}
				else if (select2 == 12)
				{
					gibibytestogigabits(1);
				}
				else if (select2 == 14)
				{
					gibibytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					gibibytestotebibits(1);
				}
				else if (select2 == 16)
				{
					gibibytestoterabits(1);
				}
				else if (select2 == 17)
				{
					gibibytestotebibytes(1);
				}
				else if (select2 == 18)
				{
					gibibytestoterabytes(1);
				}
			}
			else if (select1 == 14)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 14)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					gigabytestobits(1);
				}
				else if (select2 == 2)
				{
					gigabytestobytes(1);
				}
				else if (select2 == 3)
				{
					gigabytestokibibits(1);
				}
				else if (select2 == 4)
				{
					gigabytestokilobits(1);
				}
				else if (select2 == 5)
				{
					gigabytestokibibytes(1);
				}
				else if (select2 == 6)
				{
					gigabytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					gigabytestokibibits(1);
				}
				else if (select2 == 8)
				{
					gigabytestomegabits(1);
				}
				else if (select2 == 9)
				{
					gigabytestomebibytes(1);
				}
				else if (select2 == 10)
				{
					gigabytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					gigabytestogibibits(1);
				}
				else if (select2 == 12)
				{
					gigabytestogigabits(1);
				}
				else if (select2 == 13)
				{
					gigabytestogibibytes(1);
				}
				else if (select2 == 15)
				{
					gigabytestotebibits(1);
				}
				else if (select2 == 16)
				{
					gigabytestoterabits(1);
				}
				else if (select2 == 17)
				{
					gigabytestotebibytes(1);
				}
				else if (select2 == 18)
				{
					gigabytestoterabytes(1);
				}
			}
			else if (select1 == 15)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 15)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					tebibitstobits(1);
				}
				else if (select2 == 2)
				{
					tebibitstobytes(1);
				}
				else if (select2 == 3)
				{
					tebibitstokibibits(1);
				}
				else if (select2 == 4)
				{
					tebibitstokilobits(1);
				}
				else if (select2 == 5)
				{
					tebibitstokibibytes(1);
				}
				else if (select2 == 6)
				{
					tebibitstokilobytes(1);
				}
				else if (select2 == 7)
				{
					tebibitstokibibits(1);
				}
				else if (select2 == 8)
				{
					tebibitstomegabits(1);
				}
				else if (select2 == 9)
				{
					tebibitstomebibytes(1);
				}
				else if (select2 == 10)
				{
					tebibitstomegabytes(1);
				}
				else if (select2 == 11)
				{
					tebibitstogibibits(1);
				}
				else if (select2 == 12)
				{
					tebibitstogigabits(1);
				}
				else if (select2 == 13)
				{
					tebibitstogibibytes(1);
				}
				else if (select2 == 14)
				{
					tebibitstogigabytes(1);
				}
				else if (select2 == 16)
				{
					tebibitstoterabits(1);
				}
				else if (select2 == 17)
				{
					tebibitstotebibytes(1);
				}
				else if (select2 == 18)
				{
					tebibitstoterabytes(1);
				}
			}
			else if (select1 == 16)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 16)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					terabitstobits(1);
				}
				else if (select2 == 2)
				{
					terabitstobytes(1);
				}
				else if (select2 == 3)
				{
					terabitstokibibits(1);
				}
				else if (select2 == 4)
				{
					terabitstokilobits(1);
				}
				else if (select2 == 5)
				{
					terabitstokibibytes(1);
				}
				else if (select2 == 6)
				{
					terabitstokilobytes(1);
				}
				else if (select2 == 7)
				{
					terabitstokibibits(1);
				}
				else if (select2 == 8)
				{
					terabitstomegabits(1);
				}
				else if (select2 == 9)
				{
					terabitstomebibytes(1);
				}
				else if (select2 == 10)
				{
					terabitstomegabytes(1);
				}
				else if (select2 == 11)
				{
					terabitstogibibits(1);
				}
				else if (select2 == 12)
				{
					terabitstogigabits(1);
				}
				else if (select2 == 13)
				{
					terabitstogibibytes(1);
				}
				else if (select2 == 14)
				{
					terabitstogigabytes(1);
				}
				else if (select2 == 15)
				{
					terabitstotebibits(1);
				}
				else if (select2 == 17)
				{
					terabitstotebibytes(1);
				}
				else if (select2 == 18)
				{
					terabitstoterabytes(1);
				}
			}
			else if (select1 == 17)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 17)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					tebibytestobits(1);
				}
				else if (select2 == 2)
				{
					tebibytestobytes(1);
				}
				else if (select2 == 3)
				{
					tebibytestokibibits(1);
				}
				else if (select2 == 4)
				{
					tebibytestokilobits(1);
				}
				else if (select2 == 5)
				{
					tebibytestokibibytes(1);
				}
				else if (select2 == 6)
				{
					tebibytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					tebibytestokibibits(1);
				}
				else if (select2 == 8)
				{
					tebibytestomegabits(1);
				}
				else if (select2 == 9)
				{
					tebibytestomebibytes(1);
				}
				else if (select2 == 10)
				{
					tebibytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					tebibytestogibibits(1);
				}
				else if (select2 == 12)
				{
					tebibytestogigabits(1);
				}
				else if (select2 == 13)
				{
					tebibytestogibibytes(1);
				}
				else if (select2 == 14)
				{
					tebibytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					tebibytestotebibits(1);
				}
				else if (select2 == 16)
				{
					tebibytestoterabits(1);
				}
				else if (select2 == 18)
				{
					tebibytestoterabytes(1);
				}
			}
			else if (select1 == 18)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>18 || select2 == 18)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					terabytestobits(1);
				}
				else if (select2 == 2)
				{
					terabytestobytes(1);
				}
				else if (select2 == 3)
				{
					terabytestokibibits(1);
				}
				else if (select2 == 4)
				{
					terabytestokilobits(1);
				}
				else if (select2 == 5)
				{
					terabytestokibibytes(1);
				}
				else if (select2 == 6)
				{
					terabytestokilobytes(1);
				}
				else if (select2 == 7)
				{
					terabytestokibibits(1);
				}
				else if (select2 == 8)
				{
					terabytestomegabits(1);
				}
				else if (select2 == 9)
				{
					terabytestomebibytes(1);
				}
				else if (select2 == 10)
				{
					terabytestomegabytes(1);
				}
				else if (select2 == 11)
				{
					terabytestogibibits(1);
				}
				else if (select2 == 12)
				{
					terabytestogigabits(1);
				}
				else if (select2 == 13)
				{
					terabytestogibibytes(1);
				}
				else if (select2 == 14)
				{
					terabytestogigabytes(1);
				}
				else if (select2 == 15)
				{
					terabytestotebibits(1);
				}
				else if (select2 == 16)
				{
					terabytestoterabits(1);
				}
				else if (select2 == 17)
				{
					terabytestotebibytes(1);
				}
			}
		}
		else if (select == 3)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "energy conversion.\n1) british thermal units.\n2) electronvolts.\n3) foot-pounds.\n4) gram calories.\n5) joules.\n6) kilocalories.\n7) kilojoules.\n8) kilowatt hours.\n9) watt hours.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail())
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2)
				{
					britishthermalunitstoelectronvolts(1);
				}
				else if (select2 == 3)
				{
					britishthermalunitstofootpounds(1);
				}
				else if (select2 == 4)
				{
					britishthermalunitstogramcalories(1);
				}
				else if (select2 == 5)
				{
					britishthermalunitstojoules(1);
				}
				else if (select2 == 6)
				{
					britishthermalunitstokilocalories(1);
				}
				else if (select2 == 7)
				{
					britishthermalunitstokilojoules(1);
				}
				else if (select2 == 8)
				{
					britishthermalunitstokilowatthours(1);
				}
				else if (select2 == 9)
				{
					britishthermalunitstowatthours(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 2)
				{
					cin.clear(1);
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					electronvoltstobritishthermalunits(1);
				}
				else if (select2 == 3)
				{
					electronvoltstofootpounds(1);
				}
				else if (select2 == 4)
				{
					electronvoltstogramcalories(1);
				}
				else if (select2 == 5)
				{
					electronvoltstojoules(1);
				}
				else if (select2 == 6)
				{
					electronvoltstokilocalories(1);
				}
				else if (select2 == 7)
				{
					electronvoltstokilojoules(1);
				}
				else if (select2 == 8)
				{
					electronvoltstokilowatthours(1);
				}
				else if (select2 == 9)
				{
					electronvoltstowatthours(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 3)
				{
					cin.clear(1);
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					footpoundstobritishthermalunits(1);
				}
				else if (select2 == 2)
				{
					footpoundstoelectronvolts(1);
				}
				else if (select2 == 4)
				{
					footpoundstogramcalories(1);
				}
				else if (select2 == 5)
				{
					footpoundstojoules(1);
				}
				else if (select2 == 6)
				{
					footpoundstokilocalories(1);
				}
				else if (select2 == 7)
				{
					footpoundstokilojoules(1);
				}
				else if (select2 == 8)
				{
					footpoundstokilowatthours(1);
				}
				else if (select2 == 9)
				{
					footpoundstowatthours(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 4)
				{
					cin.clear(1);
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0) 
				{
					return 0;
				}
				else if (select2 == 1)
				{
					gramcaloriestobritishthermalunits(1);
				}
				else if (select2 == 2)
				{
					gramcaloriestoelectronvolts(1);
				}
				else if (select2 == 3)
				{
					gramcaloriestofootpounds(1);
				}
				else if (select2 == 5)
				{
					gramcaloriestojoules(1);
				}
				else if (select2 == 6)
				{
					gramcaloriestokilocalories(1);
				}
				else if (select2 == 7)
				{
					gramcaloriestokilojoules(1);
				}
				else if (select2 == 8)
				{
					gramcaloriestokilowatthours(1);
				}
				else if (select2 == 9)
				{
					gramcaloriestowatthours(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 5)
				{
					cin.clear(1);
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					joulestobritishthermalunits(1);
				}
				else if (select2 == 2)
				{
					joulestoelectronvolts(1);
				}
				else if (select2 == 3)
				{
					joulestofootpounds(1);
				}
				else if (select2 == 4)
				{
					joulestogramcalories(1);
				}
				else if (select2 == 6)
				{
					joulestokilocalories(1);
				}
				else if (select2 == 7)
				{
					joulestokilojoules(1);
				}
				else if (select2 == 8)
				{
					joulestokilowatthours(1);
				}
				else if (select2 == 9)
				{
					joulestowatthours(1);
				}
			}
			else if (select1 == 6)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 6)
				{
					cin.clear(1);
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kilocaloriestobritishthermalunits(1);
				}
				else if (select2 == 2)
				{
					kilocaloriestoelectronvolts(1);
				}
				else if (select2 == 3)
				{
					kilocaloriestofootpounds(1);
				}
				else if (select2 == 4)
				{
					kilocaloriestogramcalories(1);
				}
				else if (select2 == 5)
				{
					kilocaloriestojoules(1);
				}
				else if (select2 == 7)
				{
					kilocaloriestokilojoules(1);
				}
				else if (select2 == 8)
				{
					kilocaloriestokilowatthours(1);
				}
				else if (select2 == 9)
				{
					kilocaloriestowatthours(1);
				}
			}
			else if (select1 == 7)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 7)
				{
					cin.clear(1);
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kilojoulestobritishthermalunits(1);
				}
				else if (select2 == 2)
				{
					kilojoulestoelectronvolts(1);
				}
				else if (select2 == 3)
				{
					kilojoulestofootpounds(1);
				}
				else if (select2 == 4)
				{
					kilojoulestogramcalories(1);
				}
				else if (select2 == 5)
				{
					kilojoulestojoules(1);
				}
				else if (select2 == 6)
				{
					kilojoulestokilocalories(1);
				}
				else if (select2 == 8)
				{
					kilojoulestokilowatthours(1);
				}
				else if (select2 == 9)
				{
					kilojoulestowatthours(1);
				}
			}
			else if (select1 == 8)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 8)
				{
					cin.clear(1);
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kilowatthourstobritishthermalunits(1);
				}
				else if (select2 == 2)
				{
					kilowatthourstoelectronvolts(1);
				}
				else if (select2 == 3)
				{
					kilowatthourstofootpounds(1);
				}
				else if (select2 == 4)
				{
					kilowatthourstogramcalories(1);
				}
				else if (select2 == 5)
				{
					kilowatthourstojoules(1);
				}
				else if (select2 == 6)
				{
					kilowatthourstokilocalories(1);
				}
				else if (select2 == 7)
				{
					kilowatthourstokilojoules(1);
				}
				else if (select2 == 9)
				{
					kilowatthourstowatthours(1);
				}
			}
			else if (select1 == 9)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>9 || select2 == 9)
				{
					cin.clear(1);
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					watthourstobritishthermalunits(1);
				}
				else if (select2 == 2)
				{
					watthourstoelectronvolts(1);
				}
				else if (select2 == 3)
				{
					watthourstofootpounds(1);
				}
				else if (select2 == 4)
				{
					watthourstogramcalories(1);
				}
				else if (select2 == 5)
				{
					watthourstojoules(1);
				}
				else if (select2 == 6)
				{
					watthourstokilocalories(1);
				}
				else if (select2 == 7)
				{
					watthourstokilojoules(1);
				}
				else if (select2 == 8)
				{
					watthourstokilowatthours(1);
				}
			}
		}
		else if (select == 4)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "force conversion.\n1) kilograms of force.\n2) kilonewtons.\n3) millinewtons.\n4) newtons.\n5) ounces of force.\n6) pounds of force.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail())
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>6 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2)
				{
					kilogramsofforcetokilonewtons(1);
				}
				else if (select2 == 3)
				{
					kilogramsofforcetomillinewtons(1);
				}
				else if (select2 == 4)
				{
					kilogramsofforcetonewtons(1);
				}
				else if (select2 == 5)
				{
					kilogramsofforcetoouncesofforce(1);
				}
				else if (select2 == 6)
				{
					kilogramsofforcetopoundsofforce(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>6 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kilonewtonstokilogramsofforce(1);
				}
				else if (select2 == 3)
				{
					kilonewtonstomillinewtons(1);
				}
				else if (select2 == 4)
				{
					kilonewtonstonewtons(1);
				}
				else if (select2 == 5)
				{
					kilonewtonstoouncesofforce(1);
				}
				else if (select2 == 6)
				{
					kilonewtonstopoundsofforce(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>6 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					millinewtonstokilogramsofforce(1);
				}
				else if (select2 == 2)
				{
					millinewtonstokilonewtons(1);
				}
				else if (select2 == 4)
				{
					millinewtonstonewtons(1);
				}
				else if (select2 == 5)
				{
					millinewtonstoouncesofforce(1);
				}
				else if (select2 == 6)
				{
					millinewtonstopoundsofforce(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>6 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					newtonstokilogramsofforce(1);
				}
				else if (select2 == 2)
				{
					newtonstokilonewtons(1);
				}
				else if (select2 == 3)
				{
					newtonstomillinewtons(1);
				}
				else if (select2 == 5)
				{
					newtonstoouncesofforce(1);
				}
				else if (select2 == 6)
				{
					newtonstopoundsofforce(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>6 || select2 == 5)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					ouncesofforcetokilogramsofforce(1);
				}
				else if (select2 == 2)
				{
					ouncesofforcetokilonewtons(1);
				}
				else if (select2 == 3)
				{
					ouncesofforcetomillinewtons(1);
				}
				else if (select2 == 4)
				{
					ouncesofforcetonewtons(1);
				}
				else if (select2 == 6)
				{
					ouncesofforcetopoundsofforce(1);
				}
			}
			else if (select1 == 6)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>6 || select2 == 6)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					poundsofforcetokilogramsofforce(1);
				}
				else if (select2 == 2)
				{
					poundsofforcetokilonewtons(1);
				}
				else if (select2 == 3)
				{
					poundsofforcetomillinewtons(1);
				}
				else if (select2 == 4)
				{
					poundsofforcetonewtons(1);
				}
				else if (select2 == 5)
				{
					poundsofforcetoouncesofforce(1);
				}
			}
		}
		else if (select == 5)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "fuel Efficency conversion.\n1) gallons per mile.\n2) kilometers per liter.\n3) liters per 100 kilometers.\n4) miles per gallon.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select1>4)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2)
				{
					gallonspermiletokilometersperliter(1);
				}
				else if (select2 == 3)
				{
					gallonspermiletolitersperhundredkilometers(1);
				}
				else if (select2 == 4)
				{
					gallonspermiletomilespergallon(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kilometersperlitertogallonspermile(1);
				}
				else if (select2 == 3)
				{
					kilometersperlitertolitersperhundredkilometers(1);
				}
				else if (select2 == 4)
				{
					kilometersperlitertomilespergallon(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					litersperhundredkilometerstogallonspermile(1);
				}
				else if (select2 == 2)
				{
					litersperhundredkilometerstokilometersperliter(1);
				}
				else if (select2 == 4)
				{
					litersperhundredkilometerstomilespergallon(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					milespergallontogallonspermile(1);
				}
				else if (select2 == 2)
				{
					milespergallontokilometersperliter(1);
				}
				else if (select2 == 3)
				{
					milespergallontolitersperhundredkilometers(1);
				}
			}
		}
		else if (select == 6)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "length conversion.\n1) astronomical units.		10) micrometers.\n2) centimeters.			11) miles.\n3) decameters.			12) millimeters.\n4) decimeters.			13) nanometers.\n5) feet.			14) nautical miles.\n6) inches.			15) picometers.\n7) kilometers.			16) yards.\n8) light years.\n9) meters.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select1>16)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: " << endl;
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2) {
					astronomicalunitstocentimeters(1);
				}
				else if (select2 == 3) {
					astronomicalunitstodecameters(1);
				}
				else if (select2 == 4) {
					astronomicalunitstodecimeters(1);
				}
				else if (select2 == 5) {
					astronomicalunitstofeet(1);
				}
				else if (select2 == 6) {
					astronomicalunitstoinches(1);
				}
				else if (select2 == 7) {
					astronomicalunitstokilometers(1);
				}
				else if (select2 == 8) {
					astronomicalunitstolightyears(1);
				}
				else if (select2 == 9) {
					astronomicalunitstometers(1);
				}
				else if (select2 == 10) {
					astronomicalunitstomicrometers(1);
				}
				else if (select2 == 11) {
					astronomicalunitstomiles(1);
				}
				else if (select2 == 12) {
					astronomicalunitstomillimeters(1);
				}
				else if (select2 == 13) {
					astronomicalunitstonanometers(1);
				}
				else if (select2 == 14) {
					astronomicalunitstonauticalmiles(1);
				}
				else if (select2 == 15) {
					astronomicalunitstopicometers(1);
				}
				else if (select2 == 16) {
					astronomicalunitstoyards(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					centimeterstoastronomicalunits(1);
				}
				else if (select2 == 3)
				{
					centimeterstodecameters(1);
				}
				else if (select2 == 4)
				{
					centimeterstodecimeters(1);
				}
				else if (select2 == 5)
				{
					centimeterstofeet(1);
				}
				else if (select2 == 6)
				{
					centimeterstoinches(1);
				}
				else if (select2 == 7)
				{
					centimeterstokilometers(1);
				}
				else if (select2 == 8)
				{
					centimeterstolightyears(1);
				}
				else if (select2 == 9)
				{
					centimeterstometers(1);
				}
				else if (select2 == 10)
				{
					centimeterstomicrometers(1);
				}
				else if (select2 == 11)
				{
					centimeterstomiles(1);
				}
				else if (select2 == 12)
				{
					centimeterstomillimeters(1);
				}
				else if (select2 == 13)
				{
					centimeterstonanometers(1);
				}
				else if (select2 == 14)
				{
					centimeterstonauticalmiles(1);
				}
				else if (select2 == 15)
				{
					centimeterstopicometers(1);
				}
				else if (select2 == 16)
				{
					centimeterstoyards(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					decameterstoastronomicalunits(1);
				}
				else if (select2 == 2) {
					decameterstocentimeters(1);
				}
				else if (select2 == 4) {
					decameterstodecimeters(1);
				}
				else if (select2 == 5) {
					decameterstofeet(1);
				}
				else if (select2 == 6) {
					decameterstoinches(1);
				}
				else if (select2 == 7) {
					decameterstokilometers(1);
				}
				else if (select2 == 8) {
					decameterstolightyears(1);
				}
				else if (select2 == 9) {
					decameterstometers(1);
				}
				else if (select2 == 10) {
					decameterstomicrometers(1);
				}
				else if (select2 == 11) {
					decameterstomiles(1);
				}
				else if (select2 == 12) {
					decameterstomillimeters(1);
				}
				else if (select2 == 13) {
					decameterstonanometers(1);
				}
				else if (select2 == 14) {
					decameterstonauticalmiles(1);
				}
				else if (select2 == 15) {
					decameterstopicometers(1);
				}
				else if (select2 == 16) {
					decameterstoyards(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					decimeterstoastronomicalunits(1);
				}
				else if (select2 == 2) {
					decimeterstocentimeters(1);
				}
				else if (select2 == 3) {
					decimeterstodecameters(1);
				}
				else if (select2 == 5) {
					decimeterstofeet(1);
				}
				else if (select2 == 6) {
					decimeterstoinches(1);
				}
				else if (select2 == 7) {
					decimeterstokilometers(1);
				}
				else if (select2 == 8) {
					decimeterstolightyears(1);
				}
				else if (select2 == 9) {
					decimeterstometers(1);
				}
				else if (select2 == 10) {
					decimeterstomicrometers(1);
				}
				else if (select2 == 11) {
					decimeterstomiles(1);
				}
				else if (select2 == 12) {
					decimeterstomillimeters(1);
				}
				else if (select2 == 13) {
					decimeterstonanometers(1);
				}
				else if (select2 == 14) {
					decimeterstonauticalmiles(1);
				}
				else if (select2 == 15) {
					decimeterstopicometers(1);
				}
				else if (select2 == 16) {
					decimeterstoyards(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 5)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					feettoastronomicalunits(1);
				}
				else if (select2 == 2) {
					feettocentimeters(1);
				}
				else if (select2 == 3) {
					feettodecameters(1);
				}
				else if (select2 == 4) {
					feettodecimeters(1);
				}
				else if (select2 == 6) {
					feettoinches(1);
				}
				else if (select2 == 7) {
					feettokilometers(1);
				}
				else if (select2 == 8) {
					feettolightyears(1);
				}
				else if (select2 == 9) {
					feettometers(1);
				}
				else if (select2 == 10) {
					feettomicrometers(1);
				}
				else if (select2 == 11) {
					feettomiles(1);
				}
				else if (select2 == 12) {
					feettomillimeters(1);
				}
				else if (select2 == 13) {
					feettonanometers(1);
				}
				else if (select2 == 14) {
					feettonauticalmiles(1);
				}
				else if (select2 == 15) {
					feettopicometers(1);
				}
				else if (select2 == 16) {
					feettoyards(1);
				}
			}
			else if (select1 == 6)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 6)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					inchestoastronomicalunits(1);
				}
				else if (select2 == 2)
				{
					inchestocentimeters(1);
				}
				else if (select2 == 3)
				{
					inchestodecameters(1);
				}
				else if (select2 == 4)
				{
					inchestodecimeters(1);
				}
				else if (select2 == 5)
				{
					inchestofeet(1);
				}
				else if (select2 == 7)
				{
					inchestokilometers(1);
				}
				else if (select2 == 8)
				{
					inchestolightyears(1);
				}
				else if (select2 == 9)
				{
					inchestometers(1);
				}
				else if (select2 == 10)
				{
					inchestomicrometers(1);
				}
				else if (select2 == 11)
				{
					inchestomiles(1);
				}
				else if (select2 == 12)
				{
					inchestomillimeters(1);
				}
				else if (select2 == 13)
				{
					inchestonanometers(1);
				}
				else if (select2 == 14)
				{
					inchestonauticalmiles(1);
				}
				else if (select2 == 15)
				{
					inchestopicometers(1);
				}
				else if (select2 == 16)
				{
					inchestoyards(1);
				}
			}
			else if (select1 == 7)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 7)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					kilometerstoastronomicalunits(1);
				}
				else if (select2 == 2) {
					kilometerstocentimeters(1);
				}
				else if (select2 == 3) {
					kilometerstodecameters(1);
				}
				else if (select2 == 4) {
					kilometerstodecimeters(1);
				}
				else if (select2 == 5) {
					kilometerstofeet(1);
				}
				else if (select2 == 6) {
					kilometerstoinches(1);
				}
				else if (select2 == 8) {
					kilometerstolightyears(1);
				}
				else if (select2 == 9) {
					kilometerstometers(1);
				}
				else if (select2 == 10) {
					kilometerstomicrometers(1);
				}
				else if (select2 == 11) {
					kilometerstomiles(1);
				}
				else if (select2 == 12) {
					kilometerstomillimeters(1);
				}
				else if (select2 == 13) {
					kilometerstonanometers(1);
				}
				else if (select2 == 14) {
					kilometerstonauticalmiles(1);
				}
				else if (select2 == 15) {
					kilometerstopicometers(1);
				}
				else if (select2 == 16) {
					kilometerstoyards(1);
				}
			}
			else if (select1 == 8)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 8)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					lightyearstoastronomicalunits(1);
				}
				else if (select2 == 2) {
					lightyearstocentimeters(1);
				}
				else if (select2 == 3) {
					lightyearstodecameters(1);
				}
				else if (select2 == 4) {
					lightyearstodecimeters(1);
				}
				else if (select2 == 5) {
					lightyearstofeet(1);
				}
				else if (select2 == 6) {
					lightyearstoinches(1);
				}
				else if (select2 == 7) {
					lightyearstokilometers(1);
				}
				else if (select2 == 9) {
					lightyearstometers(1);
				}
				else if (select2 == 10) {
					lightyearstomicrometers(1);
				}
				else if (select2 == 11) {
					lightyearstomiles(1);
				}
				else if (select2 == 12) {
					lightyearstomillimeters(1);
				}
				else if (select2 == 13) {
					lightyearstonanometers(1);
				}
				else if (select2 == 14) {
					lightyearstonauticalmiles(1);
				}
				else if (select2 == 15) {
					lightyearstopicometers(1);
				}
				else if (select2 == 16) {
					lightyearstoyards(1);
				}
			}
			else if (select1 == 9)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 9)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					meterstoastronomicalunits(1);
				}
				else if (select2 == 2) {
					meterstocentimeters(1);
				}
				else if (select2 == 3) {
					meterstodecameters(1);
				}
				else if (select2 == 4) {
					meterstodecimeters(1);
				}
				else if (select2 == 5) {
					meterstofeet(1);
				}
				else if (select2 == 6) {
					meterstoinches(1);
				}
				else if (select2 == 7) {
					meterstokilometers(1);
				}
				else if (select2 == 8) {
					meterstolightyears(1);
				}
				else if (select2 == 10) {
					meterstomicrometers(1);
				}
				else if (select2 == 11) {
					meterstomiles(1);
				}
				else if (select2 == 12) {
					meterstomillimeters(1);
				}
				else if (select2 == 13) {
					meterstonanometers(1);
				}
				else if (select2 == 14) {
					meterstonauticalmiles(1);
				}
				else if (select2 == 15) {
					meterstopicometers(1);
				}
				else if (select2 == 16) {
					meterstoyards(1);
				}
			}
			else if (select1 == 10)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 10)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					micrometerstoastronomicalunits(1);
				}
				else if (select2 == 2)
				{
					micrometerstocentimeters(1);
				}
				else if (select2 == 3)
				{
					micrometerstodecameters(1);
				}
				else if (select2 == 4)
				{
					micrometerstodecimeters(1);
				}
				else if (select2 == 5)
				{
					micrometerstofeet(1);
				}
				else if (select2 == 6)
				{
					micrometerstoinches(1);
				}
				else if (select2 == 7)
				{
					micrometerstokilometers(1);
				}
				else if (select2 == 8)
				{
					micrometerstolightyears(1);
				}
				else if (select2 == 9)
				{
					micrometerstometers(1);
				}
				else if (select2 == 11)
				{
					micrometerstomiles(1);
				}
				else if (select2 == 12)
				{
					micrometerstomillimeters(1);
				}
				else if (select2 == 13)
				{
					micrometerstonanometers(1);
				}
				else if (select2 == 14)
				{
					micrometerstonauticalmiles(1);
				}
				else if (select2 == 15)
				{
					micrometerstopicometers(1);
				}
				else if (select2 == 16)
				{
					micrometerstoyards(1);
				}
			}
			else if (select1 == 11)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 11)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					milestoastronomicalunits(1);
				}
				else if (select2 == 2) {
					milestocentimeters(1);
				}
				else if (select2 == 3) {
					milestodecameters(1);
				}
				else if (select2 == 4) {
					milestodecimeters(1);
				}
				else if (select2 == 5) {
					milestofeet(1);
				}
				else if (select2 == 6) {
					milestoinches(1);
				}
				else if (select2 == 7) {
					milestokilometers(1);
				}
				else if (select2 == 8) {
					milestolightyears(1);
				}
				else if (select2 == 9) {
					milestometers(1);
				}
				else if (select2 == 10) {
					milestomicrometers(1);
				}
				else if (select2 == 12) {
					milestomillimeters(1);
				}
				else if (select2 == 13) {
					milestonanometers(1);
				}
				else if (select2 == 14) {
					milestonauticalmiles(1);
				}
				else if (select2 == 15) {
					milestopicometers(1);
				}
				else if (select2 == 16) {
					milestoyards(1);
				}
			}
			else if (select1 == 12)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 12)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					millimeterstoastronomicalunits(1);
				}
				else if (select2 == 2)
				{
					millimeterstocentimeters(1);
				}
				else if (select2 == 3)
				{
					millimeterstodecameters(1);
				}
				else if (select2 == 4)
				{
					millimeterstodecimeters(1);
				}
				else if (select2 == 5)
				{
					millimeterstofeet(1);
				}
				else if (select2 == 6)
				{
					millimeterstoinches(1);
				}
				else if (select2 == 7)
				{
					millimeterstokilometers(1);
				}
				else if (select2 == 8)
				{
					millimeterstolightyears(1);
				}
				else if (select2 == 9)
				{
					millimeterstometers(1);
				}
				else if (select2 == 10)
				{
					millimeterstomicrometers(1);
				}
				else if (select2 == 11)
				{
					millimeterstomiles(1);
				}
				else if (select2 == 13)
				{
					millimeterstonanometers(1);
				}
				else if (select2 == 14)
				{
					millimeterstonauticalmiles(1);
				}
				else if (select2 == 15)
				{
					millimeterstopicometers(1);
				}
				else if (select2 == 16)
				{
					millimeterstoyards(1);
				}
			}
			else if (select1 == 13)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 13)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					nanometerstoastronomicalunits(1);
				}
				else if (select2 == 2)
				{
					nanometerstocentimeters(1);
				}
				else if (select2 == 3)
				{
					nanometerstodecameters(1);
				}
				else if (select2 == 4)
				{
					nanometerstodecimeters(1);
				}
				else if (select2 == 5)
				{
					nanometerstofeet(1);
				}
				else if (select2 == 6)
				{
					nanometerstoinches(1);
				}
				else if (select2 == 7)
				{
					nanometerstokilometers(1);
				}
				else if (select2 == 8)
				{
					nanometerstolightyears(1);
				}
				else if (select2 == 9)
				{
					nanometerstometers(1);
				}
				else if (select2 == 10)
				{
					nanometerstomicrometers(1);
				}
				else if (select2 == 11)
				{
					nanometerstomiles(1);
				}
				else if (select2 == 12)
				{
					nanometerstomillimeters(1);
				}
				else if (select2 == 14)
				{
					nanometerstonauticalmiles(1);
				}
				else if (select2 == 15)
				{
					nanometerstopicometers(1);
				}
				else if (select2 == 16)
				{
					nanometerstoyards(1);
				}
			}
			else if (select1 == 14)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 14)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					nauticalmilestoastronomicalunits(1);
				}
				else if (select2 == 2) {
					nauticalmilestocentimeters(1);
				}
				else if (select2 == 3) {
					nauticalmilestodecameters(1);
				}
				else if (select2 == 4) {
					nauticalmilestodecimeters(1);
				}
				else if (select2 == 5) {
					nauticalmilestofeet(1);
				}
				else if (select2 == 6) {
					nauticalmilestoinches(1);
				}
				else if (select2 == 7) {
					nauticalmilestokilometers(1);
				}
				else if (select2 == 8) {
					nauticalmilestolightyears(1);
				}
				else if (select2 == 9) {
					nauticalmilestometers(1);
				}
				else if (select2 == 10) {
					nauticalmilestomicrometers(1);
				}
				else if (select2 == 11) {
					nauticalmilestomiles(1);
				}
				else if (select2 == 12) {
					nauticalmilestomillimeters(1);
				}
				else if (select2 == 13) {
					nauticalmilestonanometers(1);
				}
				else if (select2 == 15) {
					nauticalmilestopicometers(1);
				}
				else if (select2 == 16) {
					nauticalmilestoyards(1);
				}
			}
			else if (select1 == 15)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2 > 15 || select2 == 15)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					picometerstoastronomicalunits(1);
				}
				else if (select2 == 2)
				{
					picometerstocentimeters(1);
				}
				else if (select2 == 3)
				{
					picometerstodecameters(1);
				}
				else if (select2 == 4)
				{
					picometerstodecimeters(1);
				}
				else if (select2 == 5)
				{
					picometerstofeet(1);
				}
				else if (select2 == 6)
				{
					picometerstoinches(1);
				}
				else if (select2 == 7)
				{
					picometerstokilometers(1);
				}
				else if (select2 == 8)
				{
					picometerstolightyears(1);
				}
				else if (select2 == 9)
				{
					picometerstometers(1);
				}
				else if (select2 == 10)
				{
					picometerstomicrometers(1);
				}
				else if (select2 == 11)
				{
					picometerstomiles(1);
				}
				else if (select2 == 12)
				{
					picometerstomillimeters(1);
				}
				else if (select2 == 13)
				{
					picometerstonanometers(1);
				}
				else if (select2 == 14)
				{
					picometerstonauticalmiles(1);
				}
				else if (select2 == 16)
				{
					picometerstoyards(1);
				}
			}
			else if (select1 == 16)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>16 || select2 == 16)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					yardstoastronomicalunits(1);
				}
				else if (select2 == 2) {
					yardstocentimeters(1);
				}
				else if (select2 == 3) {
					yardstodecameters(1);
				}
				else if (select2 == 4) {
					yardstodecimeters(1);
				}
				else if (select2 == 5) {
					yardstofeet(1);
				}
				else if (select2 == 6) {
					yardstoinches(1);
				}
				else if (select2 == 7) {
					yardstokilometers(1);
				}
				else if (select2 == 8) {
					yardstolightyears(1);
				}
				else if (select2 == 9) {
					yardstometers(1);
				}
				else if (select2 == 10) {
					yardstomicrometers(1);
				}
				else if (select2 == 11) {
					yardstomiles(1);
				}
				else if (select2 == 12) {
					yardstomillimeters(1);
				}
				else if (select2 == 13) {
					yardstonanometers(1);
				}
				else if (select2 == 14) {
					yardstonauticalmiles(1);
				}
				else if (select2 == 15) {
					yardstopicometers(1);
				}
			}
		}
		else if (select == 7)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "mass conversion.\n1) grams.\n2) kilograms.\n3) micrograms.\n4) milligrams.\n5) ounces.\n6) pounds.\nselect a unit to convert from: ";
			cin >> select1;
			if (!cin || cin.fail() || select1 < 0 || select1>6)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			else if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2)
				{
					gramstokilograms(1);
				}
				else if (select2 == 3)
				{
					gramstomicrograms(1);
				}
				else if (select2 == 4)
				{
					gramstomilligrams(1);
				}
				else if (select2 == 5)
				{
					gramstoounces(1);
				}
				else if (select2 == 6)
				{
					gramstopounds(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					kilogramstograms(1);
				}
				else if (select2 == 3)
				{
					kilogramstomicrograms(1);
				}
				else if (select2 == 4)
				{
					kilogramstomilligrams(1);
				}
				else if (select2 == 5)
				{
					kilogramstoounces(1);
				}
				else if (select2 == 6)
				{
					kilogramstopounds(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					microgramstograms(1);
				}
				else if (select2 == 3)
				{
					microgramstokilograms(1);
				}
				else if (select2 == 4)
				{
					microgramstomilligrams(1);
				}
				else if (select2 == 5)
				{
					microgramstoounces(1);
				}
				else if (select2 == 6)
				{
					microgramstopounds(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					milligramstograms(1);
				}
				else if (select2 == 2)
				{
					milligramstokilograms(1);
				}
				else if (select2 == 3)
				{
					milligramstomicrograms(1);
				}
				else if (select2 == 5)
				{
					milligramstoounces(1);
				}
				else if (select2 == 6)
				{
					milligramstopounds(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					ouncestograms(1);
				}
				else if (select2 == 2)
				{
					ouncestokilograms(1);
				}
				else if (select2 == 3)
				{
					ouncestomicrograms(1);
				}
				else if (select2 == 5)
				{
					ouncestomilligrams(1);
				}
				else if (select2 == 6)
				{
					ouncestopounds(1);
				}
			}
			else if (select1 == 6)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					poundstograms(1);
				}
				else if (select2 == 2)
				{
					poundstokilograms(1);
				}
				else if (select2 == 3)
				{
					poundstomicrograms(1);
				}
				else if (select2 == 5)
				{
					poundstomilligrams(1);
				}
				else if (select2 == 5)
				{
					poundstoounces(1);
				}
			}
		}
		else if (select == 8)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "pressure conversion.\noptions 1-4 are valid.\n1) bars.\n2) inches of mercury.\n3) pascals.\n4) per square inch.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select>4)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2)
				{
					barstoinchesofmercury(1);
				}
				else if (select2 == 3)
				{
					barstopascals(1);
				}
				else if (select2 == 4)
				{
					barstopersquareinch(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					inchesofmercurytobars(1);
				}
				else if (select2 == 3)
				{
					inchesofmercurytopascals(1);
				}
				else if (select2 == 4)
				{
					inchesofmercurytopersquareinch(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					pascalstobars(1);
				}
				else if (select2 == 2)
				{
					pascalstoinchesofmercury(1);
				}
				else if (select2 == 4)
				{
					pascalstopersquareinch(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 1)
				{
					persquareinchtobars(1);
				}
				else if (select2 == 2)
				{
					persquareinchtoinchesofmercury(1);
				}
				else if (select2 == 3)
				{
					persquareinchtopascals(1);
				}
			}
		}
		else if (select == 9)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "options 1-5 are valid. (0 to exit)\n1) celsius.\n2) fahrenheit.\n3) kelvin.\n4) rankine.\n5) reaumur.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select1>5)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2) {
					celsiustofahrenheit(1);
				}
				else if (select2 == 3) {
					celsiustokelvin(1);
				}
				else if (select2 == 4) {
					celsiustorankine(1);
				}
				else if (select2 == 5) {
					celsiustoreaumur(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					fahrenheittocelsius(1);
				}
				else if (select2 == 3) {
					fahrenheittokelvin(1);
				}
				else if (select2 == 4) {
					fahrenheittorankine(1);
				}
				else if (select2 == 5) {
					fahrenheittoreaumur(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					kelvintocelsius(1);
				}
				else if (select2 == 2) {
					kelvintofahrenheit(1);
				}
				else if (select2 == 4) {
					kelvintorankine(1);
				}
				else if (select2 == 5) {
					kelvintoreaumur(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "RANKINE.\nselect a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					rankinetocelsius(1);
				}
				else if (select2 == 2) {
					rankinetofahrenheit(1);
				}
				else if (select2 == 3) {
					rankinetokelvin(1);
				}
				else if (select2 == 5) {
					rankinetoreaumur(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "REAUMUR.\nselect a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 5)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					reaumurtocelsius(1);
				}
				else if (select2 == 2) {
					reaumurtofahrenheit(1);
				}
				else if (select2 == 3) {
					reaumurtokelvin(1);
				}
				else if (select2 == 4) {
					reaumurtorankine(1);
				}
			}
		}
		else if (select == 10)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "time conversion.	\n1) days.\n2) hours.\n3) minutes.\n4) months.\n5) seconds.\n6) weeks.\n7) years.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select1>7)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: " << endl;
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>7 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2)
				{
					daystohours(1);
				}
				else if (select2 == 3)
				{
					daystominutes(1);
				}
				else if (select2 == 4)
				{
					daystomonths(1);
				}
				else if (select2 == 5)
				{
					daystoseconds(1);
				}
				else if (select2 == 6)
				{
					daystoweeks(1);
				}
				else if (select2 == 7)
				{
					daystoyears(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>7 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					hourstodays(1);
				}
				else if (select2 == 3)
				{
					hourstominutes(1);
				}
				else if (select2 == 4)
				{
					hourstomonths(1);
				}
				else if (select2 == 5)
				{
					hourstoseconds(1);
				}
				else if (select2 == 6)
				{
					hourstoweeks(1);
				}
				else if (select2 == 7)
				{
					hourstoyears(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>7 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					minutestodays(1);
				}
				else if (select2 == 2)
				{
					minutestohours(1);
				}
				else if (select2 == 4)
				{
					minutestomonths(1);
				}
				else if (select2 == 5)
				{
					minutestoseconds(1);
				}
				else if (select2 == 6)
				{
					minutestoweeks(1);
				}
				else if (select2 == 7)
				{
					minutestoyears(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>7 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					cout << "enter value in months: ";
					monthstodays(1);
				}
				else if (select2 == 2)
				{
					cout << "enter value in months: ";
					monthstohours(1);
				}
				else if (select2 == 3)
				{
					cout << "enter value in months: ";
					monthstominutes(1);
				}
				else if (select2 == 5)
				{
					cout << "enter value in months: ";
					monthstoseconds(1);
				}
				else if (select2 == 6)
				{
					cout << "enter value in months: ";
					monthstoweeks(1);
				}
				else if (select2 == 7)
				{
					cout << "enter value in months: ";
					monthstoyears(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>7 || select2 == 5)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					secondstodays(1);
				}
				else if (select2 == 2)
				{
					secondstohours(1);
				}
				else if (select2 == 3)
				{
					secondstominutes(1);
				}
				else if (select2 == 4)
				{
					secondstomonths(1);
				}
				else if (select2 == 6)
				{
					secondstoweeks(1);
				}
				else if (select2 == 7)
				{
					secondstoyears(1);
				}
			}
			else if (select1 == 6)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>7 || select2 == 6)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					cout << "enter value in weeks: ";
					weekstodays(1);
				}
				else if (select2 == 2)
				{
					cout << "enter value in weeks: ";
					weekstohours(1);
				}
				else if (select2 == 3)
				{
					cout << "enter value in weeks: ";
					weekstominutes(1);
				}
				else if (select2 == 4)
				{
					cout << "enter value in weeks: ";
					weekstomonths(1);
				}
				else if (select2 == 5)
				{
					cout << "enter value in weeks: ";
					weekstoseconds(1);
				}
				else if (select2 == 7)
				{
					cout << "enter value in weeks: ";
					weekstoyears(1);
				}
			}
			else if (select1 == 7)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>7 || select2 == 7)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					yearstodays(1);
				}
				else if (select2 == 2)
				{
					yearstohours(1);
				}
				else if (select2 == 3)
				{
					yearstominutes(1);
				}
				else if (select2 == 4)
				{
					yearstomonths(1);
				}
				else if (select2 == 5)
				{
					yearstoseconds(1);
				}
				else if (select2 == 6)
				{
					yearstoweeks(1);
				}
			}
		}
		else if (select == 11)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "speed conversion.\n1) kilometers per hour.\n2) mach.\n3) meters per second.\n4) miles per hour.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select1>4)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2) {
					kilometersperhourtomach(1);
				}
				else if (select2 == 3) {
					kilometersperhourtometerspersecond(1);
				}
				else if (select2 == 4) {
					kilometersperhourtomilesperhour(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					machtokilometersperhour(1);
				}
				else if (select2 == 3) {
					machtometerspersecond(1);
				}
				else if (select2 == 4) {
					machtomilesperhour(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					meterspersecondtokilometersperhour(1);
				}
				else if (select2 == 2) {
					meterspersecondtomach(1);
				}
				else if (select2 == 4) {
					meterspersecondtomilesperhour(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				if (!cin || cin.fail() || select2 < 0 || select2>4 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				else if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1) {
					milesperhourtokilometersperhour(1);
				}
				else if (select2 == 2) {
					milesperhourtomach(1);
				}
				else if (select2 == 3) {
					milesperhourtometerspersecond(1);
				}
			}
		}
		else if (select == 12)
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
			cout << "volume conversion.\n1) gallons.\n2) liters.\n3) milliliters.\n4) pints.\n5) quarts.\nselect a unit to convert from: ";
			cin >> select1;
			while (!cin || cin.fail() || select1 < 0 || select1>5)
			{
				cin.clear();
				string junk;
				getline(cin, junk);
				cout << "select a unit to convert from: ";
				cin >> select1;
			}
			if (select1 == 0)
			{
				return 0;
			}
			else if (select1 == 1)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 1)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 2)
				{
					gallonstoliters(1);
				}
				else if (select2 == 3)
				{
					gallonstomilliliters(1);
				}
				else if (select2 == 4)
				{
					gallonstopints(1);
				}
				else if (select2 == 5)
				{
					gallonstoquarts(1);
				}
			}
			else if (select1 == 2)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 2)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					literstogallons(1);
				}
				else if (select2 == 3)
				{
					literstomilliliters(1);
				}
				else if (select2 == 4)
				{
					literstopints(1);
				}
				else if (select2 == 5)
				{
					literstoquarts(1);
				}
			}
			else if (select1 == 3)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 3)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					milliliterstogallons(1);
				}
				else if (select2 == 2)
				{
					milliliterstoliters(1);
				}
				else if (select2 == 4)
				{
					milliliterstopints(1);
				}
				else if (select2 == 5)
				{
					milliliterstoquarts(1);
				}
			}
			else if (select1 == 4)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 4)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					pintstogallons(1);
				}
				else if (select2 == 2)
				{
					pintstoliters(1);
				}
				else if (select2 == 3)
				{
					pintstomilliliters(1);
				}
				else if (select2 == 5)
				{
					pintstoquarts(1);
				}
			}
			else if (select1 == 5)
			{
				cout << "select a unit to convert to: ";
				cin >> select2;
				while (!cin || cin.fail() || select2 < 0 || select2>5 || select2 == 5)
				{
					cin.clear();
					string junk;
					getline(cin, junk);
					cout << "select a unit to convert to: ";
					cin >> select2;
				}
				if (select2 == 0)
				{
					return 0;
				}
				else if (select2 == 1)
				{
					quartstogallons(1);
				}
				else if (select2 == 2)
				{
					quartstoliters(1);
				}
				else if (select2 == 3)
				{
					quartstomilliliters(1);
				}
				else if (select2 == 4)
				{
					quartstopints(1);
				}
			}
		}
		cout << "would you like to do another conversion? y/n: ";
		cin >> choice;
		while (choice != "Y" && choice != "y" && choice != "N" && choice != "n")
		{
			cin.clear();
			string junk;
			getline(cin, junk);
			cout << "would you like to do another conversion? y/n: ";
			cin >> choice;
		}
		if (choice == "Y" || choice == "y")
		{
			DWORD n;
			DWORD size;
			COORD coord = { 0 };
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			GetConsoleScreenBufferInfo(h, &csbi);
			size = csbi.dwSize.X * csbi.dwSize.Y;
			FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
			GetConsoleScreenBufferInfo(h, &csbi);
			FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
			SetConsoleCursorPosition(h, coord);
		}
		if (choice == "N" || choice == "n")
		{
			return 0;
		}
	}
	return 0;
}
